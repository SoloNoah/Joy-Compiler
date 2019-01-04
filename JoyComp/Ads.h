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
	/// Summary for Ads
	/// </summary>
	public ref class Ads : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		Ads(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Ads(Form^ other)
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
		~Ads()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  addButton;
	protected:
	private: System::Windows::Forms::Button^  backButton;
	private: System::Windows::Forms::TextBox^  nameInput;
	private: System::Windows::Forms::Label^  nameLabel;
	private: System::Windows::Forms::Label^  linkLabel;
	private: System::Windows::Forms::TextBox^  linkInput;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  priorityInput;
	private: System::Windows::Forms::Label^  label2;
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
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->nameInput = (gcnew System::Windows::Forms::TextBox());
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->linkLabel = (gcnew System::Windows::Forms::Label());
			this->linkInput = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->priorityInput = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// addButton
			// 
			this->addButton->BackColor = System::Drawing::Color::DarkGray;
			this->addButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addButton->Location = System::Drawing::Point(218, 232);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(104, 36);
			this->addButton->TabIndex = 5;
			this->addButton->Text = L"Add";
			this->addButton->UseVisualStyleBackColor = false;
			this->addButton->Click += gcnew System::EventHandler(this, &Ads::addButton_Click);
			// 
			// backButton
			// 
			this->backButton->BackColor = System::Drawing::Color::DarkGray;
			this->backButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backButton->Location = System::Drawing::Point(11, 232);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(104, 36);
			this->backButton->TabIndex = 6;
			this->backButton->Text = L"Back";
			this->backButton->UseVisualStyleBackColor = false;
			this->backButton->Click += gcnew System::EventHandler(this, &Ads::backButton_Click);
			// 
			// nameInput
			// 
			this->nameInput->Location = System::Drawing::Point(11, 91);
			this->nameInput->MaxLength = 40;
			this->nameInput->Name = L"nameInput";
			this->nameInput->Size = System::Drawing::Size(193, 22);
			this->nameInput->TabIndex = 2;
			// 
			// nameLabel
			// 
			this->nameLabel->AutoSize = true;
			this->nameLabel->Location = System::Drawing::Point(12, 71);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(49, 17);
			this->nameLabel->TabIndex = 3;
			this->nameLabel->Text = L"Name:";
			// 
			// linkLabel
			// 
			this->linkLabel->AutoSize = true;
			this->linkLabel->Location = System::Drawing::Point(12, 116);
			this->linkLabel->Name = L"linkLabel";
			this->linkLabel->Size = System::Drawing::Size(38, 17);
			this->linkLabel->TabIndex = 5;
			this->linkLabel->Text = L"Link:";
			// 
			// linkInput
			// 
			this->linkInput->Location = System::Drawing::Point(12, 136);
			this->linkInput->Name = L"linkInput";
			this->linkInput->Size = System::Drawing::Size(310, 22);
			this->linkInput->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 31.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(-9, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(347, 61);
			this->label1->TabIndex = 30;
			this->label1->Text = L"Advertisement";
			// 
			// priorityInput
			// 
			this->priorityInput->Location = System::Drawing::Point(11, 204);
			this->priorityInput->MaxLength = 4;
			this->priorityInput->Name = L"priorityInput";
			this->priorityInput->Size = System::Drawing::Size(193, 22);
			this->priorityInput->TabIndex = 31;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 167);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(294, 34);
			this->label2->TabIndex = 32;
			this->label2->Text = L"Priority:\r\n(The bigger the number, the bigger the odds)";
			// 
			// Ads
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(338, 282);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->priorityInput);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->linkLabel);
			this->Controls->Add(this->linkInput);
			this->Controls->Add(this->nameLabel);
			this->Controls->Add(this->nameInput);
			this->Controls->Add(this->backButton);
			this->Controls->Add(this->addButton);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"Ads";
			this->Text = L"Ads";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void addButton_Click(System::Object^  sender, System::EventArgs^  e) {
		string url = marshal_as<string>(linkInput->Text);
		regex url_regex("((https | http)? : \ / \ / ) ? ([\da - z\. - ] + )\.([a - z\.]{ 2,6 })([\ / \w \. - ] * )*\ / ? $ /");
		if ((nameInput->TextLength <= 40 && nameInput->TextLength >= 3) && regex_match(url, url_regex) == true) {
			this->addButton->BackColor = System::Drawing::Color::DarkGray;
			writeToDataBase(nameInput->Text, linkInput->Text, priorityInput->Text, "NULL", "Ads");
			MessageBox::Show("Ad added successfully!");
		}
		else
			this->addButton->BackColor = System::Drawing::Color::Red;
	}
	private: System::Void backButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Visible = false;
		obj->Visible = true;
	}
	};
}
