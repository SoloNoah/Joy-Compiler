#pragma once
#include "functions.h"
#include "Menus.h"

namespace JoyCompiler {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	string globalUsername;
	int globalCurrentUserPermission;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form {
	public:
		Login(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  loginButton;
	private: System::Windows::Forms::TextBox^  login_userNameInput;
	private: System::Windows::Forms::TextBox^  login_passInput;
	private: System::Windows::Forms::Label^  login_userNameLabel;
	private: System::Windows::Forms::Label^  login_passwordLabel;
	private: System::Windows::Forms::Button^  regButton;
	private: System::Windows::Forms::Label^  login_errorLabel1;
	private: System::Windows::Forms::Label^  login_errorLabel2;
	private: System::Windows::Forms::Panel^  loginPanel;
	private: System::Windows::Forms::Panel^  registerPanel;
	private: System::Windows::Forms::Button^  reg_backButton;
	private: System::Windows::Forms::Label^  reg_lastNameLabel;
	private: System::Windows::Forms::Label^  reg_warningLabel;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  reg_registerButton;
	private: System::Windows::Forms::TextBox^  reg_lastNameInput;
	private: System::Windows::Forms::TextBox^  reg_passInput;
	private: System::Windows::Forms::TextBox^  reg_userNameInput;
	private: System::Windows::Forms::TextBox^  reg_nameInput;
	private: System::Windows::Forms::Label^  reg_userNameLabel;
	private: System::Windows::Forms::Label^  reg_passLabel;
	private: System::Windows::Forms::Label^  reg_nameLabel;
	private: System::Windows::Forms::Label^  label2;
	private: System::ComponentModel::IContainer^  components;

			 /// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->loginButton = (gcnew System::Windows::Forms::Button());
			this->login_userNameInput = (gcnew System::Windows::Forms::TextBox());
			this->login_passInput = (gcnew System::Windows::Forms::TextBox());
			this->login_userNameLabel = (gcnew System::Windows::Forms::Label());
			this->login_passwordLabel = (gcnew System::Windows::Forms::Label());
			this->regButton = (gcnew System::Windows::Forms::Button());
			this->login_errorLabel1 = (gcnew System::Windows::Forms::Label());
			this->login_errorLabel2 = (gcnew System::Windows::Forms::Label());
			this->loginPanel = (gcnew System::Windows::Forms::Panel());
			this->registerPanel = (gcnew System::Windows::Forms::Panel());
			this->reg_backButton = (gcnew System::Windows::Forms::Button());
			this->reg_lastNameLabel = (gcnew System::Windows::Forms::Label());
			this->reg_warningLabel = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->reg_registerButton = (gcnew System::Windows::Forms::Button());
			this->reg_lastNameInput = (gcnew System::Windows::Forms::TextBox());
			this->reg_passInput = (gcnew System::Windows::Forms::TextBox());
			this->reg_userNameInput = (gcnew System::Windows::Forms::TextBox());
			this->reg_nameInput = (gcnew System::Windows::Forms::TextBox());
			this->reg_userNameLabel = (gcnew System::Windows::Forms::Label());
			this->reg_passLabel = (gcnew System::Windows::Forms::Label());
			this->reg_nameLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->loginPanel->SuspendLayout();
			this->registerPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// loginButton
			// 
			this->loginButton->AutoEllipsis = true;
			this->loginButton->BackColor = System::Drawing::Color::Transparent;
			this->loginButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->loginButton->Location = System::Drawing::Point(313, 209);
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(78, 37);
			this->loginButton->TabIndex = 4;
			this->loginButton->Text = L"Login";
			this->loginButton->UseVisualStyleBackColor = false;
			this->loginButton->Click += gcnew System::EventHandler(this, &Login::button1_Click);
			// 
			// login_userNameInput
			// 
			this->login_userNameInput->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->login_userNameInput->Location = System::Drawing::Point(85, 67);
			this->login_userNameInput->MaxLength = 20;
			this->login_userNameInput->Name = L"login_userNameInput";
			this->login_userNameInput->Size = System::Drawing::Size(189, 22);
			this->login_userNameInput->TabIndex = 1;
			this->login_userNameInput->TextChanged += gcnew System::EventHandler(this, &Login::textBox1_TextChanged);
			// 
			// login_passInput
			// 
			this->login_passInput->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->login_passInput->Location = System::Drawing::Point(85, 130);
			this->login_passInput->MaxLength = 20;
			this->login_passInput->Name = L"login_passInput";
			this->login_passInput->PasswordChar = '*';
			this->login_passInput->Size = System::Drawing::Size(189, 22);
			this->login_passInput->TabIndex = 2;
			this->login_passInput->TextChanged += gcnew System::EventHandler(this, &Login::textBox2_TextChanged);
			// 
			// login_userNameLabel
			// 
			this->login_userNameLabel->AutoSize = true;
			this->login_userNameLabel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->login_userNameLabel->Location = System::Drawing::Point(82, 47);
			this->login_userNameLabel->Name = L"login_userNameLabel";
			this->login_userNameLabel->Size = System::Drawing::Size(77, 17);
			this->login_userNameLabel->TabIndex = 3;
			this->login_userNameLabel->Text = L"Username:";
			// 
			// login_passwordLabel
			// 
			this->login_passwordLabel->AutoSize = true;
			this->login_passwordLabel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->login_passwordLabel->Location = System::Drawing::Point(86, 110);
			this->login_passwordLabel->Name = L"login_passwordLabel";
			this->login_passwordLabel->Size = System::Drawing::Size(73, 17);
			this->login_passwordLabel->TabIndex = 4;
			this->login_passwordLabel->Text = L"Password:";
			// 
			// regButton
			// 
			this->regButton->BackColor = System::Drawing::Color::Transparent;
			this->regButton->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->regButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->regButton->Location = System::Drawing::Point(20, 209);
			this->regButton->Name = L"regButton";
			this->regButton->Size = System::Drawing::Size(78, 37);
			this->regButton->TabIndex = 3;
			this->regButton->Text = L"Register";
			this->regButton->UseVisualStyleBackColor = false;
			this->regButton->Click += gcnew System::EventHandler(this, &Login::button2_Click);
			// 
			// login_errorLabel1
			// 
			this->login_errorLabel1->AutoSize = true;
			this->login_errorLabel1->BackColor = System::Drawing::SystemColors::Control;
			this->login_errorLabel1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->login_errorLabel1->ForeColor = System::Drawing::Color::Red;
			this->login_errorLabel1->Location = System::Drawing::Point(280, 67);
			this->login_errorLabel1->Name = L"login_errorLabel1";
			this->login_errorLabel1->Size = System::Drawing::Size(45, 17);
			this->login_errorLabel1->TabIndex = 7;
			this->login_errorLabel1->Text = L"*Error";
			this->login_errorLabel1->Visible = false;
			// 
			// login_errorLabel2
			// 
			this->login_errorLabel2->AutoSize = true;
			this->login_errorLabel2->BackColor = System::Drawing::SystemColors::Control;
			this->login_errorLabel2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->login_errorLabel2->ForeColor = System::Drawing::Color::Red;
			this->login_errorLabel2->Location = System::Drawing::Point(280, 130);
			this->login_errorLabel2->Name = L"login_errorLabel2";
			this->login_errorLabel2->Size = System::Drawing::Size(45, 17);
			this->login_errorLabel2->TabIndex = 8;
			this->login_errorLabel2->Text = L"*Error";
			this->login_errorLabel2->Visible = false;
			// 
			// loginPanel
			// 
			this->loginPanel->BackColor = System::Drawing::Color::Transparent;
			this->loginPanel->Controls->Add(this->login_userNameLabel);
			this->loginPanel->Controls->Add(this->loginButton);
			this->loginPanel->Controls->Add(this->login_errorLabel2);
			this->loginPanel->Controls->Add(this->login_userNameInput);
			this->loginPanel->Controls->Add(this->login_errorLabel1);
			this->loginPanel->Controls->Add(this->login_passInput);
			this->loginPanel->Controls->Add(this->login_passwordLabel);
			this->loginPanel->Controls->Add(this->regButton);
			this->loginPanel->ForeColor = System::Drawing::Color::Black;
			this->loginPanel->Location = System::Drawing::Point(21, 61);
			this->loginPanel->Name = L"loginPanel";
			this->loginPanel->Size = System::Drawing::Size(407, 261);
			this->loginPanel->TabIndex = 10;
			// 
			// registerPanel
			// 
			this->registerPanel->BackColor = System::Drawing::Color::Transparent;
			this->registerPanel->Controls->Add(this->reg_backButton);
			this->registerPanel->Controls->Add(this->reg_lastNameLabel);
			this->registerPanel->Controls->Add(this->reg_warningLabel);
			this->registerPanel->Controls->Add(this->label4);
			this->registerPanel->Controls->Add(this->reg_registerButton);
			this->registerPanel->Controls->Add(this->reg_lastNameInput);
			this->registerPanel->Controls->Add(this->reg_passInput);
			this->registerPanel->Controls->Add(this->reg_userNameInput);
			this->registerPanel->Controls->Add(this->reg_nameInput);
			this->registerPanel->Controls->Add(this->reg_userNameLabel);
			this->registerPanel->Controls->Add(this->reg_passLabel);
			this->registerPanel->Controls->Add(this->reg_nameLabel);
			this->registerPanel->Location = System::Drawing::Point(25, 71);
			this->registerPanel->Name = L"registerPanel";
			this->registerPanel->Size = System::Drawing::Size(403, 251);
			this->registerPanel->TabIndex = 11;
			this->registerPanel->Visible = false;
			// 
			// reg_backButton
			// 
			this->reg_backButton->BackColor = System::Drawing::Color::Transparent;
			this->reg_backButton->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->reg_backButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->reg_backButton->Location = System::Drawing::Point(16, 199);
			this->reg_backButton->Name = L"reg_backButton";
			this->reg_backButton->Size = System::Drawing::Size(78, 37);
			this->reg_backButton->TabIndex = 9;
			this->reg_backButton->Text = L"Back";
			this->reg_backButton->UseVisualStyleBackColor = false;
			this->reg_backButton->Click += gcnew System::EventHandler(this, &Login::reg_backButton_Click);
			// 
			// reg_lastNameLabel
			// 
			this->reg_lastNameLabel->AutoSize = true;
			this->reg_lastNameLabel->Location = System::Drawing::Point(211, 12);
			this->reg_lastNameLabel->Name = L"reg_lastNameLabel";
			this->reg_lastNameLabel->Size = System::Drawing::Size(80, 17);
			this->reg_lastNameLabel->TabIndex = 28;
			this->reg_lastNameLabel->Text = L"Last Name:";
			// 
			// reg_warningLabel
			// 
			this->reg_warningLabel->ForeColor = System::Drawing::Color::Red;
			this->reg_warningLabel->Location = System::Drawing::Point(211, 81);
			this->reg_warningLabel->Name = L"reg_warningLabel";
			this->reg_warningLabel->Size = System::Drawing::Size(95, 56);
			this->reg_warningLabel->TabIndex = 27;
			this->reg_warningLabel->Text = L"*Characters lenght should be 3 - 20*";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(61, 120);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 17);
			this->label4->TabIndex = 26;
			// 
			// reg_registerButton
			// 
			this->reg_registerButton->BackColor = System::Drawing::Color::Transparent;
			this->reg_registerButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->reg_registerButton->Location = System::Drawing::Point(309, 199);
			this->reg_registerButton->Name = L"reg_registerButton";
			this->reg_registerButton->Size = System::Drawing::Size(78, 37);
			this->reg_registerButton->TabIndex = 10;
			this->reg_registerButton->Text = L"Register";
			this->reg_registerButton->UseVisualStyleBackColor = false;
			this->reg_registerButton->Click += gcnew System::EventHandler(this, &Login::reg_registerButton_Click);
			// 
			// reg_lastNameInput
			// 
			this->reg_lastNameInput->Location = System::Drawing::Point(214, 32);
			this->reg_lastNameInput->MaxLength = 20;
			this->reg_lastNameInput->Name = L"reg_lastNameInput";
			this->reg_lastNameInput->Size = System::Drawing::Size(115, 22);
			this->reg_lastNameInput->TabIndex = 6;
			// 
			// reg_passInput
			// 
			this->reg_passInput->Location = System::Drawing::Point(54, 150);
			this->reg_passInput->MaxLength = 20;
			this->reg_passInput->Name = L"reg_passInput";
			this->reg_passInput->PasswordChar = '*';
			this->reg_passInput->Size = System::Drawing::Size(115, 22);
			this->reg_passInput->TabIndex = 8;
			// 
			// reg_userNameInput
			// 
			this->reg_userNameInput->Location = System::Drawing::Point(54, 91);
			this->reg_userNameInput->MaxLength = 20;
			this->reg_userNameInput->Name = L"reg_userNameInput";
			this->reg_userNameInput->Size = System::Drawing::Size(115, 22);
			this->reg_userNameInput->TabIndex = 7;
			// 
			// reg_nameInput
			// 
			this->reg_nameInput->Location = System::Drawing::Point(54, 32);
			this->reg_nameInput->MaxLength = 20;
			this->reg_nameInput->Name = L"reg_nameInput";
			this->reg_nameInput->Size = System::Drawing::Size(115, 22);
			this->reg_nameInput->TabIndex = 5;
			// 
			// reg_userNameLabel
			// 
			this->reg_userNameLabel->AutoSize = true;
			this->reg_userNameLabel->Location = System::Drawing::Point(54, 71);
			this->reg_userNameLabel->Name = L"reg_userNameLabel";
			this->reg_userNameLabel->Size = System::Drawing::Size(77, 17);
			this->reg_userNameLabel->TabIndex = 20;
			this->reg_userNameLabel->Text = L"Username:";
			// 
			// reg_passLabel
			// 
			this->reg_passLabel->AutoSize = true;
			this->reg_passLabel->Location = System::Drawing::Point(54, 130);
			this->reg_passLabel->Name = L"reg_passLabel";
			this->reg_passLabel->Size = System::Drawing::Size(73, 17);
			this->reg_passLabel->TabIndex = 19;
			this->reg_passLabel->Text = L"Password:";
			// 
			// reg_nameLabel
			// 
			this->reg_nameLabel->AutoSize = true;
			this->reg_nameLabel->Location = System::Drawing::Point(54, 12);
			this->reg_nameLabel->Name = L"reg_nameLabel";
			this->reg_nameLabel->Size = System::Drawing::Size(53, 17);
			this->reg_nameLabel->TabIndex = 18;
			this->reg_nameLabel->Text = L"Name: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(48, -1);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(345, 69);
			this->label2->TabIndex = 31;
			this->label2->Text = L"JoyCompiler";
			// 
			// Login
			// 
			this->AcceptButton = this->loginButton;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(460, 321);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->loginPanel);
			this->Controls->Add(this->registerPanel);
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->HelpButton = true;
			this->Name = L"Login";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->loginPanel->ResumeLayout(false);
			this->loginPanel->PerformLayout();
			this->registerPanel->ResumeLayout(false);
			this->registerPanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) { //Login
		if (login_userNameInput->TextLength < 3 || login_passInput->TextLength < 3)
			this->loginButton->BackColor = System::Drawing::Color::Red;
		else {
			this->loginButton->BackColor = System::Drawing::Color::DarkGray;
			String ^ userName = login_userNameInput->Text;
			String ^ password = login_passInput->Text;
			string user = marshal_as<string>(userName), pass = marshal_as<string>(password);
			int ret = loginCheck(user, pass);
			if ((ret == ADMIN || ret == USER || ret == CONPROMOTER)) {
				if (ret == ADMIN)
					globalCurrentUserPermission = ADMIN;
				else if (ret == USER)
					globalCurrentUserPermission = USER;
				else if (ret == CONPROMOTER)
					globalCurrentUserPermission = CONPROMOTER;
				globalUsername = user;
				this->Hide();
				Menus^ menu = gcnew Menus(this);
				menu->Show();
			}
			else {
				MessageBox::Show("Username or password are wrong.");
			}
		}
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		login_errorLabel1->Hide();
		if (login_userNameInput->TextLength < 3)
			login_errorLabel1->Show();
		else
			login_errorLabel2->Hide();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) { //Register

		loginPanel->Visible = false;
		registerPanel->Visible = true;
	}
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		login_errorLabel2->Hide();
		if (login_passInput->TextLength < 3)
			login_errorLabel2->Show();
		else
			login_errorLabel2->Hide();
	}
	private: System::Void reg_backButton_Click(System::Object^  sender, System::EventArgs^  e) {
		registerPanel->Visible = false;
		loginPanel->Visible = true;
	}
	private: System::Void reg_registerButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (reg_nameInput->TextLength < 3 || reg_lastNameInput->TextLength < 3 ||
			reg_userNameInput->TextLength < 3 || reg_passInput->TextLength < 3)
			reg_warningLabel->Show();
		else {
			reg_warningLabel->Hide();
			String ^ name = reg_nameInput->Text, ^lastName = reg_lastNameInput->Text,
				^userName = reg_userNameInput->Text, ^password = reg_passInput->Text;
			if (findUserName(marshal_as<string>(userName)) == -1) {
				writeToDataBase(userName, password, name, lastName, "Users");
				MessageBox::Show("Successfully registered.\nWelcome to JoyCompiler " + name + " " + lastName);
				registerPanel->Visible = false;
				loginPanel->Visible = true;
			}
			else
				MessageBox::Show("There already a user with that username.\nPlease choose other username.");
		}
	}
	private: System::Void Login_Load(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
