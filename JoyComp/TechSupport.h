#pragma once
#include "functions.h"

namespace JoyCompiler {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for TechSupport
	/// </summary>
	public ref class TechSupport : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		TechSupport(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		TechSupport(Form^ other)
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
		~TechSupport()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  contactButton;
	protected:

	protected:


	private: System::Windows::Forms::Button^  bugButton;



	private: System::Windows::Forms::Button^  faqButton;
	private: System::Windows::Forms::Button^  tech_backButton;

	private: System::Windows::Forms::Panel^  techPanel;
	private: System::Windows::Forms::Label^  techLabel;


	private: System::Windows::Forms::Panel^  bugPanel;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  bug_sendButton;

	private: System::Windows::Forms::Button^  bug_backButton;

	private: System::Windows::Forms::TextBox^  bugInput;
	private: System::Windows::Forms::Label^  bugLabel;
	private: System::Windows::Forms::Panel^  faqPanel;
	private: System::Windows::Forms::Label^  faqLabel;


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
			this->contactButton = (gcnew System::Windows::Forms::Button());
			this->bugButton = (gcnew System::Windows::Forms::Button());
			this->faqButton = (gcnew System::Windows::Forms::Button());
			this->tech_backButton = (gcnew System::Windows::Forms::Button());
			this->techPanel = (gcnew System::Windows::Forms::Panel());
			this->techLabel = (gcnew System::Windows::Forms::Label());
			this->bugPanel = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bug_sendButton = (gcnew System::Windows::Forms::Button());
			this->bug_backButton = (gcnew System::Windows::Forms::Button());
			this->bugInput = (gcnew System::Windows::Forms::TextBox());
			this->bugLabel = (gcnew System::Windows::Forms::Label());
			this->faqPanel = (gcnew System::Windows::Forms::Panel());
			this->faqLabel = (gcnew System::Windows::Forms::Label());
			this->faq_backButton = (gcnew System::Windows::Forms::Button());
			this->outputTextBox = (gcnew System::Windows::Forms::TextBox());
			this->techPanel->SuspendLayout();
			this->bugPanel->SuspendLayout();
			this->faqPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// contactButton
			// 
			this->contactButton->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->contactButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->contactButton->Location = System::Drawing::Point(53, 223);
			this->contactButton->Name = L"contactButton";
			this->contactButton->Size = System::Drawing::Size(204, 32);
			this->contactButton->TabIndex = 6;
			this->contactButton->Text = L"Contact Us";
			this->contactButton->UseVisualStyleBackColor = false;
			this->contactButton->Click += gcnew System::EventHandler(this, &TechSupport::button3_Click);
			// 
			// bugButton
			// 
			this->bugButton->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->bugButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bugButton->Location = System::Drawing::Point(53, 185);
			this->bugButton->Name = L"bugButton";
			this->bugButton->Size = System::Drawing::Size(204, 32);
			this->bugButton->TabIndex = 5;
			this->bugButton->Text = L"Bug Report";
			this->bugButton->UseVisualStyleBackColor = false;
			this->bugButton->Click += gcnew System::EventHandler(this, &TechSupport::button2_Click);
			// 
			// faqButton
			// 
			this->faqButton->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->faqButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->faqButton->Location = System::Drawing::Point(53, 147);
			this->faqButton->Name = L"faqButton";
			this->faqButton->Size = System::Drawing::Size(204, 32);
			this->faqButton->TabIndex = 4;
			this->faqButton->Text = L"Frequently asked questions";
			this->faqButton->UseVisualStyleBackColor = false;
			this->faqButton->Click += gcnew System::EventHandler(this, &TechSupport::button1_Click);
			// 
			// tech_backButton
			// 
			this->tech_backButton->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->tech_backButton->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->tech_backButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tech_backButton->Location = System::Drawing::Point(9, 272);
			this->tech_backButton->Name = L"tech_backButton";
			this->tech_backButton->Size = System::Drawing::Size(104, 36);
			this->tech_backButton->TabIndex = 7;
			this->tech_backButton->Text = L"Back";
			this->tech_backButton->UseVisualStyleBackColor = false;
			this->tech_backButton->Click += gcnew System::EventHandler(this, &TechSupport::backButton_click);
			// 
			// techPanel
			// 
			this->techPanel->Controls->Add(this->tech_backButton);
			this->techPanel->Controls->Add(this->faqButton);
			this->techPanel->Controls->Add(this->bugButton);
			this->techPanel->Controls->Add(this->contactButton);
			this->techPanel->Controls->Add(this->techLabel);
			this->techPanel->Location = System::Drawing::Point(2, 3);
			this->techPanel->Name = L"techPanel";
			this->techPanel->Size = System::Drawing::Size(320, 324);
			this->techPanel->TabIndex = 14;
			// 
			// techLabel
			// 
			this->techLabel->AutoSize = true;
			this->techLabel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->techLabel->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->techLabel->Location = System::Drawing::Point(7, 6);
			this->techLabel->Name = L"techLabel";
			this->techLabel->Size = System::Drawing::Size(309, 138);
			this->techLabel->TabIndex = 32;
			this->techLabel->Text = L"Tech \r\n     Support";
			// 
			// bugPanel
			// 
			this->bugPanel->Controls->Add(this->label1);
			this->bugPanel->Controls->Add(this->bug_sendButton);
			this->bugPanel->Controls->Add(this->bug_backButton);
			this->bugPanel->Controls->Add(this->bugInput);
			this->bugPanel->Controls->Add(this->bugLabel);
			this->bugPanel->Location = System::Drawing::Point(2, 9);
			this->bugPanel->Name = L"bugPanel";
			this->bugPanel->Size = System::Drawing::Size(320, 314);
			this->bugPanel->TabIndex = 15;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(1, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(316, 69);
			this->label1->TabIndex = 33;
			this->label1->Text = L"Bug Report";
			// 
			// bug_sendButton
			// 
			this->bug_sendButton->BackColor = System::Drawing::Color::DarkGray;
			this->bug_sendButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bug_sendButton->Location = System::Drawing::Point(209, 268);
			this->bug_sendButton->Margin = System::Windows::Forms::Padding(4);
			this->bug_sendButton->Name = L"bug_sendButton";
			this->bug_sendButton->Size = System::Drawing::Size(104, 36);
			this->bug_sendButton->TabIndex = 2;
			this->bug_sendButton->Text = L"Send";
			this->bug_sendButton->UseVisualStyleBackColor = false;
			this->bug_sendButton->Click += gcnew System::EventHandler(this, &TechSupport::bug_sendButton_Click);
			// 
			// bug_backButton
			// 
			this->bug_backButton->BackColor = System::Drawing::Color::DarkGray;
			this->bug_backButton->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->bug_backButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bug_backButton->Location = System::Drawing::Point(19, 268);
			this->bug_backButton->Margin = System::Windows::Forms::Padding(4);
			this->bug_backButton->Name = L"bug_backButton";
			this->bug_backButton->Size = System::Drawing::Size(104, 36);
			this->bug_backButton->TabIndex = 3;
			this->bug_backButton->Text = L"Back";
			this->bug_backButton->UseVisualStyleBackColor = false;
			this->bug_backButton->Click += gcnew System::EventHandler(this, &TechSupport::bug_backButton_Click);
			// 
			// bugInput
			// 
			this->bugInput->Location = System::Drawing::Point(34, 121);
			this->bugInput->MaxLength = 255;
			this->bugInput->Multiline = true;
			this->bugInput->Name = L"bugInput";
			this->bugInput->Size = System::Drawing::Size(258, 128);
			this->bugInput->TabIndex = 18;
			// 
			// bugLabel
			// 
			this->bugLabel->AutoSize = true;
			this->bugLabel->Location = System::Drawing::Point(31, 101);
			this->bugLabel->Name = L"bugLabel";
			this->bugLabel->Size = System::Drawing::Size(209, 17);
			this->bugLabel->TabIndex = 17;
			this->bugLabel->Text = L"Enter the bug you encountered:";
			// 
			// faqPanel
			// 
			this->faqPanel->Controls->Add(this->faqLabel);
			this->faqPanel->Controls->Add(this->faq_backButton);
			this->faqPanel->Controls->Add(this->outputTextBox);
			this->faqPanel->Location = System::Drawing::Point(2, 3);
			this->faqPanel->Name = L"faqPanel";
			this->faqPanel->Size = System::Drawing::Size(318, 324);
			this->faqPanel->TabIndex = 16;
			// 
			// faqLabel
			// 
			this->faqLabel->AutoSize = true;
			this->faqLabel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->faqLabel->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->faqLabel->Location = System::Drawing::Point(79, 14);
			this->faqLabel->Name = L"faqLabel";
			this->faqLabel->Size = System::Drawing::Size(157, 69);
			this->faqLabel->TabIndex = 34;
			this->faqLabel->Text = L"FAQ";
			// 
			// faq_backButton
			// 
			this->faq_backButton->BackColor = System::Drawing::Color::DarkGray;
			this->faq_backButton->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->faq_backButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->faq_backButton->Location = System::Drawing::Point(13, 272);
			this->faq_backButton->Margin = System::Windows::Forms::Padding(4);
			this->faq_backButton->Name = L"faq_backButton";
			this->faq_backButton->Size = System::Drawing::Size(104, 36);
			this->faq_backButton->TabIndex = 1;
			this->faq_backButton->Text = L"Back";
			this->faq_backButton->UseVisualStyleBackColor = false;
			this->faq_backButton->Click += gcnew System::EventHandler(this, &TechSupport::faq_backButton_Click);
			// 
			// outputTextBox
			// 
			this->outputTextBox->Location = System::Drawing::Point(19, 89);
			this->outputTextBox->MaxLength = 255;
			this->outputTextBox->Multiline = true;
			this->outputTextBox->Name = L"outputTextBox";
			this->outputTextBox->Size = System::Drawing::Size(273, 143);
			this->outputTextBox->TabIndex = 19;
			this->outputTextBox->TextChanged += gcnew System::EventHandler(this, &TechSupport::faqInput_TextChanged);
			// 
			// TechSupport
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->tech_backButton;
			this->ClientSize = System::Drawing::Size(328, 335);
			this->Controls->Add(this->techPanel);
			this->Controls->Add(this->faqPanel);
			this->Controls->Add(this->bugPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MaximizeBox = false;
			this->Name = L"TechSupport";
			this->Text = L"TechSupport";
			this->Load += gcnew System::EventHandler(this, &TechSupport::TechSupport_Load);
			this->techPanel->ResumeLayout(false);
			this->techPanel->PerformLayout();
			this->bugPanel->ResumeLayout(false);
			this->bugPanel->PerformLayout();
			this->faqPanel->ResumeLayout(false);
			this->faqPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void backButton_click(System::Object^  sender, System::EventArgs^  e) {
		this->Visible = false;
		obj->Visible = true;
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		techPanel->Visible = false;
		faqPanel->Visible = true;
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		techPanel->Visible = false;
		bugPanel->Visible = true;
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void bug_sendButton_Click(System::Object^  sender, System::EventArgs^  e) {
		writeToDataBase(bugInput->Text, "NULL", "NULL", "NULL", "Bugs");
		MessageBox::Show("Great success");
		techPanel->Visible = true;
		bugPanel->Visible = false;
	}
	private: System::Void bug_backButton_Click(System::Object^  sender, System::EventArgs^  e) {
		techPanel->Visible = true;
		bugPanel->Visible = false;
	}
	private: System::Void faqInput_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		string text = printAllFile("FAQ");
		String^ printText = gcnew String(text.c_str());
		outputTextBox->ReadOnly = false;
		outputTextBox->Text = printText;
		outputTextBox->ReadOnly = true;
	}
	private: System::Void faq_backButton_Click(System::Object^  sender, System::EventArgs^  e) {
		techPanel->Visible = true;
		faqPanel->Visible = false;

	}
	private: System::Void TechSupport_Load(System::Object^  sender, System::EventArgs^  e) {
		faqPanel->Visible = false;
		bugPanel->Visible = false;
		techPanel->Visible = true;
	}
};
}
