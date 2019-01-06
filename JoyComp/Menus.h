#pragma once
#include "functions.h"
#include "TechSupport.h"
#include "Content.h"
#include "PermissionEdit.h"
#include "WatchList.h"
#include "Ads.h"
#include "AdsReport.h"

namespace JoyCompiler {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	string link;
	extern string globalUsername;
	extern int globalCurrentUserPermission;

	/// <summary>
	/// Summary for Menus
	/// </summary>
	public ref class Menus : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		Menus(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Menus(Form^ other)
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
		~Menus()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Panel^  userPanel;
	private: System::Windows::Forms::Button^  user_reportButton;
	private: System::Windows::Forms::Button^  user_watchListButton;
	private: System::Windows::Forms::Button^  user_searchButton;
	private: System::Windows::Forms::Button^  backButton;
	private: System::Windows::Forms::Panel^  adminPanel;
	private: System::Windows::Forms::Button^  admin_conPromReports;
	private: System::Windows::Forms::Button^  admin_contentReports;
	private: System::Windows::Forms::Button^  admin_userReports;
	private: System::Windows::Forms::Button^  admin_perEditButton;
	private: System::Windows::Forms::Button^  admin_bugReportButton;
	private: System::Windows::Forms::Button^  admin_contentButton;
	private: System::Windows::Forms::Panel^  conPromPanel;
	private: System::Windows::Forms::Button^  conProm_editButton;
	private: System::Windows::Forms::Button^  conProm_reportButton;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::LinkLabel^  linkLabel;
	private: System::Windows::Forms::Button^  button2;


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
			this->userPanel = (gcnew System::Windows::Forms::Panel());
			this->linkLabel = (gcnew System::Windows::Forms::LinkLabel());
			this->user_reportButton = (gcnew System::Windows::Forms::Button());
			this->user_watchListButton = (gcnew System::Windows::Forms::Button());
			this->user_searchButton = (gcnew System::Windows::Forms::Button());
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->adminPanel = (gcnew System::Windows::Forms::Panel());
			this->admin_conPromReports = (gcnew System::Windows::Forms::Button());
			this->admin_contentReports = (gcnew System::Windows::Forms::Button());
			this->admin_userReports = (gcnew System::Windows::Forms::Button());
			this->admin_perEditButton = (gcnew System::Windows::Forms::Button());
			this->admin_bugReportButton = (gcnew System::Windows::Forms::Button());
			this->admin_contentButton = (gcnew System::Windows::Forms::Button());
			this->conPromPanel = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->conProm_editButton = (gcnew System::Windows::Forms::Button());
			this->conProm_reportButton = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->userPanel->SuspendLayout();
			this->adminPanel->SuspendLayout();
			this->conPromPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// userPanel
			// 
			this->userPanel->BackColor = System::Drawing::Color::Transparent;
			this->userPanel->Controls->Add(this->linkLabel);
			this->userPanel->Controls->Add(this->user_reportButton);
			this->userPanel->Controls->Add(this->user_watchListButton);
			this->userPanel->Controls->Add(this->user_searchButton);
			this->userPanel->Location = System::Drawing::Point(25, 96);
			this->userPanel->Name = L"userPanel";
			this->userPanel->Size = System::Drawing::Size(264, 167);
			this->userPanel->TabIndex = 8;
			// 
			// linkLabel
			// 
			this->linkLabel->AutoSize = true;
			this->linkLabel->Location = System::Drawing::Point(88, 135);
			this->linkLabel->Name = L"linkLabel";
			this->linkLabel->Size = System::Drawing::Size(72, 17);
			this->linkLabel->TabIndex = 7;
			this->linkLabel->TabStop = true;
			this->linkLabel->Text = L"linkLabel1";
			this->linkLabel->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Menus::linkLabel_LinkClicked);
			// 
			// user_reportButton
			// 
			this->user_reportButton->BackColor = System::Drawing::Color::Transparent;
			this->user_reportButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->user_reportButton->Location = System::Drawing::Point(28, 93);
			this->user_reportButton->Name = L"user_reportButton";
			this->user_reportButton->Size = System::Drawing::Size(204, 32);
			this->user_reportButton->TabIndex = 6;
			this->user_reportButton->Text = L"[3] Tech Support";
			this->user_reportButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->user_reportButton->UseVisualStyleBackColor = false;
			this->user_reportButton->Click += gcnew System::EventHandler(this, &Menus::user_reportButton_Click);
			// 
			// user_watchListButton
			// 
			this->user_watchListButton->BackColor = System::Drawing::Color::Transparent;
			this->user_watchListButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->user_watchListButton->Location = System::Drawing::Point(28, 55);
			this->user_watchListButton->Name = L"user_watchListButton";
			this->user_watchListButton->Size = System::Drawing::Size(204, 32);
			this->user_watchListButton->TabIndex = 5;
			this->user_watchListButton->Text = L"[2] Watch List";
			this->user_watchListButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->user_watchListButton->UseVisualStyleBackColor = false;
			this->user_watchListButton->Click += gcnew System::EventHandler(this, &Menus::user_watchListButton_Click);
			// 
			// user_searchButton
			// 
			this->user_searchButton->BackColor = System::Drawing::Color::Transparent;
			this->user_searchButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->user_searchButton->Location = System::Drawing::Point(28, 17);
			this->user_searchButton->Name = L"user_searchButton";
			this->user_searchButton->Size = System::Drawing::Size(204, 32);
			this->user_searchButton->TabIndex = 4;
			this->user_searchButton->Text = L"[1] Search Event";
			this->user_searchButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->user_searchButton->UseVisualStyleBackColor = false;
			this->user_searchButton->Click += gcnew System::EventHandler(this, &Menus::user_searchButton_Click);
			// 
			// backButton
			// 
			this->backButton->BackColor = System::Drawing::Color::Transparent;
			this->backButton->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->backButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backButton->Location = System::Drawing::Point(9, 344);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(104, 36);
			this->backButton->TabIndex = 14;
			this->backButton->Text = L"Log off";
			this->backButton->UseVisualStyleBackColor = false;
			this->backButton->Click += gcnew System::EventHandler(this, &Menus::backButton_Click);
			// 
			// adminPanel
			// 
			this->adminPanel->BackColor = System::Drawing::Color::Transparent;
			this->adminPanel->Controls->Add(this->admin_conPromReports);
			this->adminPanel->Controls->Add(this->admin_contentReports);
			this->adminPanel->Controls->Add(this->admin_userReports);
			this->adminPanel->Controls->Add(this->admin_perEditButton);
			this->adminPanel->Controls->Add(this->admin_bugReportButton);
			this->adminPanel->Controls->Add(this->admin_contentButton);
			this->adminPanel->Location = System::Drawing::Point(42, 81);
			this->adminPanel->Name = L"adminPanel";
			this->adminPanel->Size = System::Drawing::Size(230, 257);
			this->adminPanel->TabIndex = 14;
			// 
			// admin_conPromReports
			// 
			this->admin_conPromReports->BackColor = System::Drawing::Color::Transparent;
			this->admin_conPromReports->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->admin_conPromReports->Location = System::Drawing::Point(14, 175);
			this->admin_conPromReports->Margin = System::Windows::Forms::Padding(4);
			this->admin_conPromReports->Name = L"admin_conPromReports";
			this->admin_conPromReports->Size = System::Drawing::Size(204, 32);
			this->admin_conPromReports->TabIndex = 12;
			this->admin_conPromReports->Text = L"[5] Content promoters report";
			this->admin_conPromReports->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->admin_conPromReports->UseVisualStyleBackColor = false;
			this->admin_conPromReports->Click += gcnew System::EventHandler(this, &Menus::admin_conPromReports_Click);
			// 
			// admin_contentReports
			// 
			this->admin_contentReports->BackColor = System::Drawing::Color::Transparent;
			this->admin_contentReports->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->admin_contentReports->Location = System::Drawing::Point(14, 135);
			this->admin_contentReports->Margin = System::Windows::Forms::Padding(4);
			this->admin_contentReports->Name = L"admin_contentReports";
			this->admin_contentReports->Size = System::Drawing::Size(204, 32);
			this->admin_contentReports->TabIndex = 11;
			this->admin_contentReports->Text = L"[4] Content report";
			this->admin_contentReports->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->admin_contentReports->UseVisualStyleBackColor = false;
			this->admin_contentReports->Click += gcnew System::EventHandler(this, &Menus::admin_contentReports_Click);
			// 
			// admin_userReports
			// 
			this->admin_userReports->BackColor = System::Drawing::Color::Transparent;
			this->admin_userReports->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->admin_userReports->Location = System::Drawing::Point(14, 95);
			this->admin_userReports->Margin = System::Windows::Forms::Padding(4);
			this->admin_userReports->Name = L"admin_userReports";
			this->admin_userReports->Size = System::Drawing::Size(204, 32);
			this->admin_userReports->TabIndex = 10;
			this->admin_userReports->Text = L"[3] Users report";
			this->admin_userReports->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->admin_userReports->UseVisualStyleBackColor = false;
			this->admin_userReports->Click += gcnew System::EventHandler(this, &Menus::admin_userReports_Click);
			// 
			// admin_perEditButton
			// 
			this->admin_perEditButton->BackColor = System::Drawing::Color::Transparent;
			this->admin_perEditButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->admin_perEditButton->Location = System::Drawing::Point(14, 215);
			this->admin_perEditButton->Margin = System::Windows::Forms::Padding(4);
			this->admin_perEditButton->Name = L"admin_perEditButton";
			this->admin_perEditButton->Size = System::Drawing::Size(204, 32);
			this->admin_perEditButton->TabIndex = 13;
			this->admin_perEditButton->Text = L"[6] Permission edit";
			this->admin_perEditButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->admin_perEditButton->UseVisualStyleBackColor = false;
			this->admin_perEditButton->Click += gcnew System::EventHandler(this, &Menus::admin_perEditButton_Click);
			// 
			// admin_bugReportButton
			// 
			this->admin_bugReportButton->BackColor = System::Drawing::Color::Transparent;
			this->admin_bugReportButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->admin_bugReportButton->Location = System::Drawing::Point(14, 53);
			this->admin_bugReportButton->Margin = System::Windows::Forms::Padding(4);
			this->admin_bugReportButton->Name = L"admin_bugReportButton";
			this->admin_bugReportButton->Size = System::Drawing::Size(204, 32);
			this->admin_bugReportButton->TabIndex = 9;
			this->admin_bugReportButton->Text = L"[2] Bug report";
			this->admin_bugReportButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->admin_bugReportButton->UseVisualStyleBackColor = false;
			this->admin_bugReportButton->Click += gcnew System::EventHandler(this, &Menus::admin_bugReportButton_click);
			// 
			// admin_contentButton
			// 
			this->admin_contentButton->BackColor = System::Drawing::Color::Transparent;
			this->admin_contentButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->admin_contentButton->Location = System::Drawing::Point(14, 15);
			this->admin_contentButton->Margin = System::Windows::Forms::Padding(4);
			this->admin_contentButton->Name = L"admin_contentButton";
			this->admin_contentButton->Size = System::Drawing::Size(204, 32);
			this->admin_contentButton->TabIndex = 8;
			this->admin_contentButton->Text = L"[1] Content menu";
			this->admin_contentButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->admin_contentButton->UseVisualStyleBackColor = false;
			this->admin_contentButton->Click += gcnew System::EventHandler(this, &Menus::admin_contentButton_Click);
			// 
			// conPromPanel
			// 
			this->conPromPanel->BackColor = System::Drawing::Color::Transparent;
			this->conPromPanel->Controls->Add(this->button2);
			this->conPromPanel->Controls->Add(this->button1);
			this->conPromPanel->Controls->Add(this->conProm_editButton);
			this->conPromPanel->Controls->Add(this->conProm_reportButton);
			this->conPromPanel->Location = System::Drawing::Point(25, 99);
			this->conPromPanel->Name = L"conPromPanel";
			this->conPromPanel->Size = System::Drawing::Size(267, 189);
			this->conPromPanel->TabIndex = 15;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(31, 135);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(204, 32);
			this->button2->TabIndex = 4;
			this->button2->Text = L"[4] Ads Report";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Menus::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(31, 97);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(204, 32);
			this->button1->TabIndex = 3;
			this->button1->Text = L"[3] Ads";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Menus::button1_Click);
			// 
			// conProm_editButton
			// 
			this->conProm_editButton->BackColor = System::Drawing::Color::Transparent;
			this->conProm_editButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->conProm_editButton->Location = System::Drawing::Point(31, 21);
			this->conProm_editButton->Name = L"conProm_editButton";
			this->conProm_editButton->Size = System::Drawing::Size(204, 32);
			this->conProm_editButton->TabIndex = 1;
			this->conProm_editButton->Text = L"[1] Content menu";
			this->conProm_editButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->conProm_editButton->UseVisualStyleBackColor = false;
			this->conProm_editButton->Click += gcnew System::EventHandler(this, &Menus::conProm_editButton_Click);
			// 
			// conProm_reportButton
			// 
			this->conProm_reportButton->BackColor = System::Drawing::Color::Transparent;
			this->conProm_reportButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->conProm_reportButton->Location = System::Drawing::Point(31, 59);
			this->conProm_reportButton->Name = L"conProm_reportButton";
			this->conProm_reportButton->Size = System::Drawing::Size(204, 32);
			this->conProm_reportButton->TabIndex = 2;
			this->conProm_reportButton->Text = L"[2] Tech Support";
			this->conProm_reportButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->conProm_reportButton->UseVisualStyleBackColor = false;
			this->conProm_reportButton->Click += gcnew System::EventHandler(this, &Menus::conProm_reportButton_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 34.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(-2, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(332, 66);
			this->label2->TabIndex = 31;
			this->label2->Text = L"JoyCompiler";
			// 
			// Menus
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(336, 387);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->backButton);
			this->Controls->Add(this->adminPanel);
			this->Controls->Add(this->userPanel);
			this->Controls->Add(this->conPromPanel);
			this->BackgroundImage = Image::FromFile("C:\\Users\\aviel\\Desktop\\Joy_Compiler.git\\JoyComp\\photo.jpg");
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"Menus";
			this->Text = L"Menu";
			this->Load += gcnew System::EventHandler(this, &Menus::Menus_Load);
			this->userPanel->ResumeLayout(false);
			this->userPanel->PerformLayout();
			this->adminPanel->ResumeLayout(false);
			this->conPromPanel->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void backButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		obj->Show();
	}
	private: System::Void Menus_Load(System::Object^  sender, System::EventArgs^  e) {
		if (globalCurrentUserPermission == USER) {
			userPanel->Visible = true;
			adminPanel->Visible = false;
			conPromPanel->Visible = false;
			bool flag = checkIfFileEmpty("Ads.txt");
			if (flag == false) {
				ifstream file("Ads.txt");
				linkLabel->Visible = true;
				string holder;
				String^ temp;
				int lines = getNumberOfLines("Ads.txt");
				int v = rand() % lines, i = 0;
				while (v % 2 != 0)
					v = rand() % lines;
				while (i <= v) {
					getline(file, holder);
					i++;
				}
				temp = gcnew String(holder.c_str());
				linkLabel->Text = temp;
				getline(file, holder);
				link = holder;
				file.close();
			}
			else {
				linkLabel->Visible = false;
			}
		}
		else if (globalCurrentUserPermission == ADMIN) {
			userPanel->Visible = false;
			adminPanel->Visible = true;
			conPromPanel->Visible = false;
		}
		else if (globalCurrentUserPermission == CONPROMOTER) {
			userPanel->Visible = false;
			adminPanel->Visible = false;
			conPromPanel->Visible = true;
		}
	}
	private: System::Void user_searchButton_Click(System::Object^  sender, System::EventArgs^  e) {
		Content^ con = gcnew Content(this);
		this->Visible = false;
		con->Visible = true;
	}
	private: System::Void user_reportButton_Click(System::Object^  sender, System::EventArgs^  e) {
		TechSupport^ tech = gcnew TechSupport(this);
		this->Visible = false;
		tech->Visible = true;
	}
	private: System::Void conProm_reportButton_Click(System::Object^  sender, System::EventArgs^  e) {
		TechSupport^ tech = gcnew TechSupport(this);
		this->Visible = false;
		tech->Visible = true;
	}
	private: System::Void conProm_editButton_Click(System::Object^  sender, System::EventArgs^  e) {
		Content^ con = gcnew Content(this);
		this->Visible = false;
		con->Visible = true;
	}
	private: System::Void admin_contentButton_Click(System::Object^  sender, System::EventArgs^  e) {
		Content^ con = gcnew Content(this);
		this->Visible = false;
		con->Visible = true;
	}
	private: System::Void admin_bugReportButton_click(System::Object^  sender, System::EventArgs^  e) {
		createLogFile("Bugs");
		MessageBox::Show("Created log file succssesfuly");
	}
	private: System::Void admin_userReports_Click(System::Object^  sender, System::EventArgs^  e) {
		createLogFile("Users");
		MessageBox::Show("Created log file succssesfuly");
	}
	private: System::Void admin_contentReports_Click(System::Object^  sender, System::EventArgs^  e) {
		createLogFile("Content");
		MessageBox::Show("Created log file succssesfuly");
	}
	private: System::Void admin_conPromReports_Click(System::Object^  sender, System::EventArgs^  e) {
		createLogFile("ContentPromoters");
		MessageBox::Show("Created log file succssesfuly");
	}
	private: System::Void admin_perEditButton_Click(System::Object^  sender, System::EventArgs^  e) {
		PermissionEdit^ per = gcnew PermissionEdit(this);
		this->Visible = false;
		per->Visible = true;
	}
	private: System::Void user_watchListButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Visible = false;
		WatchList^ waLi = gcnew WatchList(this);
		waLi->Visible = true;
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Visible = false;
		Ads^ ad = gcnew Ads(this);
		ad->Visible = true;
	}
	private: System::Void linkLabel_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		String^ temp = gcnew String(link.c_str());
		System::Diagnostics::Process::Start(temp);
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Visible = false;
		AdsReport^ ad = gcnew AdsReport(this);
		ad->Visible = true;
	}
	};
}