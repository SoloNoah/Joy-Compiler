#pragma once
#include "functions.h"

namespace JoyCompiler {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdsReport
	/// </summary>
	public ref class AdsReport : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		AdsReport(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		AdsReport(Form^ other)
		{
			obj = other;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdsReport()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  faqLabel;
	protected:
	private: System::Windows::Forms::Button^  faq_backButton;
	private: System::Windows::Forms::TextBox^  outputTextBox;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->faqLabel = (gcnew System::Windows::Forms::Label());
			this->faq_backButton = (gcnew System::Windows::Forms::Button());
			this->outputTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// faqLabel
			// 
			this->faqLabel->AutoSize = true;
			this->faqLabel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->faqLabel->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->faqLabel->Location = System::Drawing::Point(72, 6);
			this->faqLabel->Name = L"faqLabel";
			this->faqLabel->Size = System::Drawing::Size(127, 69);
			this->faqLabel->TabIndex = 37;
			this->faqLabel->Text = L"Ads";
			// 
			// faq_backButton
			// 
			this->faq_backButton->BackColor = System::Drawing::Color::DarkGray;
			this->faq_backButton->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->faq_backButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->faq_backButton->Location = System::Drawing::Point(13, 257);
			this->faq_backButton->Margin = System::Windows::Forms::Padding(4);
			this->faq_backButton->Name = L"faq_backButton";
			this->faq_backButton->Size = System::Drawing::Size(104, 36);
			this->faq_backButton->TabIndex = 2;
			this->faq_backButton->Text = L"Back";
			this->faq_backButton->UseVisualStyleBackColor = false;
			this->faq_backButton->Click += gcnew System::EventHandler(this, &AdsReport::faq_backButton_Click);
			// 
			// outputTextBox
			// 
			this->outputTextBox->Location = System::Drawing::Point(13, 78);
			this->outputTextBox->Multiline = true;
			this->outputTextBox->Name = L"outputTextBox";
			this->outputTextBox->Size = System::Drawing::Size(245, 160);
			this->outputTextBox->TabIndex = 38;
			// 
			// AdsReport
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(295, 306);
			this->Controls->Add(this->outputTextBox);
			this->Controls->Add(this->faqLabel);
			this->Controls->Add(this->faq_backButton);
			this->Name = L"AdsReport";
			this->Text = L"AdsReport";
			this->Load += gcnew System::EventHandler(this, &AdsReport::AdsReport_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AdsReport_Load(System::Object^  sender, System::EventArgs^  e) {
		ifstream file;
		file.open("TotalAds.txt", ios::beg);
		string temp, str;
		file.seekg(0, file.end);
		int length = file.tellg();
		file.clear();
		file.seekg(0, ios::beg);
		if (length != 0) {
			while (!file.eof()) {
				getline(file, temp);
				if (globalUsername == temp) {
					for (int i = 0; i < 2; i++) {
						temp.clear();
						getline(file, temp);
						str += temp;
						str += "\n";
					}
					str += "\n";
					temp.clear();
				}
				else {
					getline(file, temp);
					getline(file, temp);
					temp.clear();
				}
			}
			String^ toPrint = gcnew String(str.c_str());
			MessageBox::Show(toPrint);
			cout << str;
			outputTextBox->ReadOnly = false;
			outputTextBox->Text = toPrint;
			outputTextBox->ReadOnly = true;
		}
		else {
			outputTextBox->Text = "You have no ads!";
			outputTextBox->ReadOnly = true;
		}
		file.close();
	}
	private: System::Void faq_backButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Visible = false;
		obj->Visible = true;
	}
	};
}
