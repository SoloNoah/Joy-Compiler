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
	private: System::Windows::Forms::ListBox^  outputTextBox;



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
			this->outputTextBox = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// faqLabel
			// 
			this->faqLabel->AutoSize = true;
			this->faqLabel->BackColor = System::Drawing::Color::Transparent;
			this->faqLabel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->faqLabel->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->faqLabel->Location = System::Drawing::Point(14, 6);
			this->faqLabel->Name = L"faqLabel";
			this->faqLabel->Size = System::Drawing::Size(269, 69);
			this->faqLabel->TabIndex = 37;
			this->faqLabel->Text = L"Your Ads";
			// 
			// faq_backButton
			// 
			this->faq_backButton->BackColor = System::Drawing::Color::Transparent;
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
			this->outputTextBox->FormattingEnabled = true;
			this->outputTextBox->HorizontalScrollbar = true;
			this->outputTextBox->ItemHeight = 16;
			this->outputTextBox->Location = System::Drawing::Point(13, 78);
			this->outputTextBox->Name = L"outputTextBox";
			this->outputTextBox->SelectionMode = System::Windows::Forms::SelectionMode::None;
			this->outputTextBox->Size = System::Drawing::Size(270, 164);
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
		string adName, adUrl;
		if (checkIfFileEmpty("TotalAds.txt") == false) {
			file.open("TotalAds.txt");
			while (getline(file, adName)) {
				if (globalUsername == adName) {
					getline(file, adName);
					getline(file, adUrl);
					adName += ": " + adUrl;
					outputTextBox->Items->Add(gcnew String(adName.c_str()));
				}
				else {
					getline(file, adName);
					getline(file, adName);
				}
			}
			file.close();
		}
		else
			outputTextBox->Items->Add("You have no ads!");
	}
	private: System::Void faq_backButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Visible = false;
		obj->Visible = true;
	}
	};
}
