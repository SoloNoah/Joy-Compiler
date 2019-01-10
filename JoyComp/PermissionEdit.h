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
	/// Summary for PermissionEdit
	/// </summary>
	public ref class PermissionEdit : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		PermissionEdit(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		PermissionEdit(Form^ other)
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
		~PermissionEdit()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  backButton;
	private: System::Windows::Forms::Label^  infoLabel1;

	private: System::Windows::Forms::Label^  infoLabel2;
	private: System::Windows::Forms::TextBox^  nameInput;

	private: System::Windows::Forms::Button^  proccedButton;

	private: System::Windows::Forms::Label^  faqLabel;
	private: System::Windows::Forms::ComboBox^  actionComboBox;
	protected:

	protected:

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
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->infoLabel1 = (gcnew System::Windows::Forms::Label());
			this->actionComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->infoLabel2 = (gcnew System::Windows::Forms::Label());
			this->nameInput = (gcnew System::Windows::Forms::TextBox());
			this->proccedButton = (gcnew System::Windows::Forms::Button());
			this->faqLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// backButton
			// 
			this->backButton->BackColor = System::Drawing::Color::Transparent;
			this->backButton->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->backButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->backButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backButton->Location = System::Drawing::Point(15, 306);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(78, 37);
			this->backButton->TabIndex = 4;
			this->backButton->Text = L"Back";
			this->backButton->UseVisualStyleBackColor = false;
			this->backButton->Click += gcnew System::EventHandler(this, &PermissionEdit::backButton_Click);
			// 
			// infoLabel1
			// 
			this->infoLabel1->AutoSize = true;
			this->infoLabel1->BackColor = System::Drawing::Color::Transparent;
			this->infoLabel1->Location = System::Drawing::Point(71, 147);
			this->infoLabel1->Name = L"infoLabel1";
			this->infoLabel1->Size = System::Drawing::Size(122, 17);
			this->infoLabel1->TabIndex = 1;
			this->infoLabel1->Text = L"Choose an action:";
			// 
			// actionComboBox
			// 
			this->actionComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Grant permission", L"Remove permission" });
			this->actionComboBox->Location = System::Drawing::Point(71, 167);
			this->actionComboBox->Name = L"actionComboBox";
			this->actionComboBox->Size = System::Drawing::Size(211, 24);
			this->actionComboBox->TabIndex = 1;
			// 
			// infoLabel2
			// 
			this->infoLabel2->AutoSize = true;
			this->infoLabel2->BackColor = System::Drawing::Color::Transparent;
			this->infoLabel2->Location = System::Drawing::Point(71, 212);
			this->infoLabel2->Name = L"infoLabel2";
			this->infoLabel2->Size = System::Drawing::Size(253, 34);
			this->infoLabel2->TabIndex = 3;
			this->infoLabel2->Text = L"Enter the username that you would like\r\nto grant / remove permission:\r\n";
			// 
			// nameInput
			// 
			this->nameInput->Location = System::Drawing::Point(74, 259);
			this->nameInput->MaxLength = 20;
			this->nameInput->Name = L"nameInput";
			this->nameInput->Size = System::Drawing::Size(247, 22);
			this->nameInput->TabIndex = 2;
			// 
			// proccedButton
			// 
			this->proccedButton->BackColor = System::Drawing::Color::Transparent;
			this->proccedButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->proccedButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->proccedButton->Location = System::Drawing::Point(298, 306);
			this->proccedButton->Name = L"proccedButton";
			this->proccedButton->Size = System::Drawing::Size(78, 37);
			this->proccedButton->TabIndex = 3;
			this->proccedButton->Text = L"Procceed";
			this->proccedButton->UseVisualStyleBackColor = false;
			this->proccedButton->Click += gcnew System::EventHandler(this, &PermissionEdit::proccedButton_Click);
			// 
			// faqLabel
			// 
			this->faqLabel->AutoSize = true;
			this->faqLabel->BackColor = System::Drawing::Color::Transparent;
			this->faqLabel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->faqLabel->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->faqLabel->Location = System::Drawing::Point(3, 9);
			this->faqLabel->Name = L"faqLabel";
			this->faqLabel->Size = System::Drawing::Size(373, 138);
			this->faqLabel->TabIndex = 45;
			this->faqLabel->Text = L"Permission\r\n               Edit";
			// 
			// PermissionEdit
			// 
			this->AcceptButton = this->proccedButton;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->backButton;
			this->ClientSize = System::Drawing::Size(386, 355);
			this->Controls->Add(this->faqLabel);
			this->Controls->Add(this->proccedButton);
			this->Controls->Add(this->nameInput);
			this->Controls->Add(this->infoLabel2);
			this->Controls->Add(this->actionComboBox);
			this->Controls->Add(this->infoLabel1);
			this->Controls->Add(this->backButton);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"PermissionEdit";
			this->Text = L"PermissionEdit";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void proccedButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (actionComboBox->Text == "Grant permission" || actionComboBox->Text == "Remove permission") {
			String^ username = nameInput->Text;
			if (actionComboBox->Text == "Grant permission") {
				if (editPermission(username, "Grant"))
					MessageBox::Show("Successfully promoted " + username + " to content promoter.");
			}
			else if (actionComboBox->Text == "Remove permission") {
				if(editPermission(username, "Remove"))
					MessageBox::Show("Successfully demote " + username + " to user.");
			}
		}
		else
			MessageBox::Show("You need to choose a vaild action.");
	}
	private: System::Void backButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Visible = false;
		obj->Visible = true;
	}
	};
}
