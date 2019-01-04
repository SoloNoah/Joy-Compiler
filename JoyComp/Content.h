#pragma once
#include "functions.h"
#include "SearchResult.h"

namespace JoyCompiler {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	extern int globalCurrentUserPermission;

	/// <summary>
	/// Summary for Content
	/// </summary>
	public ref class Content : public System::Windows::Forms::Form {
	public:
		Form^ obj;
		Content(void) {
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Content(Form^ other) {
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
		~Content() {
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  add_backButton;
	private: System::Windows::Forms::Panel^  addPanel;
	private: System::Windows::Forms::TextBox^  add_yearInput;
	private: System::Windows::Forms::TextBox^  add_monthInput;
	private: System::Windows::Forms::Label^  add_errorLabel2;
	private: System::Windows::Forms::Label^  add_errorLabel3;
	private: System::Windows::Forms::Button^  add_confirmButton;
	private: System::Windows::Forms::Label^  add_errorLabel5;

	private: System::Windows::Forms::Label^  add_errorLabel1;
	private: System::Windows::Forms::Label^  add_dateLabel;
	private: System::Windows::Forms::Label^  add_genLabel;
	private: System::Windows::Forms::Label^  add_catLabel;
	private: System::Windows::Forms::Label^  add_nameLabel;
	private: System::Windows::Forms::TextBox^  add_dayInput;
	private: System::Windows::Forms::TextBox^  add_genInput;
	private: System::Windows::Forms::TextBox^  add_catInput;
	private: System::Windows::Forms::TextBox^  add_nameInput;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Panel^  contentPanel;
	private: System::Windows::Forms::Button^  delEventButton;
	private: System::Windows::Forms::Button^  addEventButton;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  backButton;
	private: System::Windows::Forms::Panel^  deletePanel;
	private: System::Windows::Forms::Button^  del_backButton;
	private: System::Windows::Forms::Label^  del_Label;
	private: System::Windows::Forms::Button^  del_confirmButton;
	private: System::Windows::Forms::ComboBox^  del_genComboBox;
	private: System::Windows::Forms::Label^  del_genLabel;
	private: System::Windows::Forms::Label^  del_catLabel;
	private: System::Windows::Forms::ComboBox^  del_catComboBox;
	private: System::Windows::Forms::TextBox^  del_nameInput;
	private: System::Windows::Forms::Label^  del_nameLabel;

	private: System::Windows::Forms::Button^  searchButton;
	private: System::Windows::Forms::Panel^  searchPanel;
	private: System::Windows::Forms::Button^  search_backButton;
	private: System::Windows::Forms::Button^  search_confirmButton;
	private: System::Windows::Forms::Label^  search_warningLabel;
	private: System::Windows::Forms::Label^  orLabel;
	private: System::Windows::Forms::ComboBox^  search_genComboBox;
	private: System::Windows::Forms::Label^  search_genreLabel;
	private: System::Windows::Forms::Label^  search_catLabel;
	private: System::Windows::Forms::ComboBox^  search_catComboBox;
	private: System::Windows::Forms::TextBox^  search_nameInput;
	private: System::Windows::Forms::Label^  search_searchLabel;
	private: System::Windows::Forms::Label^  search_Label;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  del_yearInput;

	private: System::Windows::Forms::TextBox^  del_monthInput;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  del_dayInput;
	private: System::Windows::Forms::Button^  search_showAllButton;
	private: System::Windows::Forms::Label^  add_errorLabel4;

	private: System::Windows::Forms::Label^  add_errorLabel8;

	private: System::Windows::Forms::Label^  add_errorLabel7;



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
			this->add_backButton = (gcnew System::Windows::Forms::Button());
			this->addPanel = (gcnew System::Windows::Forms::Panel());
			this->add_errorLabel4 = (gcnew System::Windows::Forms::Label());
			this->add_errorLabel8 = (gcnew System::Windows::Forms::Label());
			this->add_errorLabel7 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->add_yearInput = (gcnew System::Windows::Forms::TextBox());
			this->add_monthInput = (gcnew System::Windows::Forms::TextBox());
			this->add_errorLabel2 = (gcnew System::Windows::Forms::Label());
			this->add_errorLabel3 = (gcnew System::Windows::Forms::Label());
			this->add_confirmButton = (gcnew System::Windows::Forms::Button());
			this->add_errorLabel5 = (gcnew System::Windows::Forms::Label());
			this->add_errorLabel1 = (gcnew System::Windows::Forms::Label());
			this->add_dateLabel = (gcnew System::Windows::Forms::Label());
			this->add_genLabel = (gcnew System::Windows::Forms::Label());
			this->add_catLabel = (gcnew System::Windows::Forms::Label());
			this->add_nameLabel = (gcnew System::Windows::Forms::Label());
			this->add_dayInput = (gcnew System::Windows::Forms::TextBox());
			this->add_genInput = (gcnew System::Windows::Forms::TextBox());
			this->add_catInput = (gcnew System::Windows::Forms::TextBox());
			this->add_nameInput = (gcnew System::Windows::Forms::TextBox());
			this->contentPanel = (gcnew System::Windows::Forms::Panel());
			this->searchButton = (gcnew System::Windows::Forms::Button());
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->delEventButton = (gcnew System::Windows::Forms::Button());
			this->addEventButton = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->deletePanel = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->del_yearInput = (gcnew System::Windows::Forms::TextBox());
			this->del_monthInput = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->del_dayInput = (gcnew System::Windows::Forms::TextBox());
			this->del_confirmButton = (gcnew System::Windows::Forms::Button());
			this->del_genComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->del_genLabel = (gcnew System::Windows::Forms::Label());
			this->del_catLabel = (gcnew System::Windows::Forms::Label());
			this->del_catComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->del_nameInput = (gcnew System::Windows::Forms::TextBox());
			this->del_nameLabel = (gcnew System::Windows::Forms::Label());
			this->del_backButton = (gcnew System::Windows::Forms::Button());
			this->del_Label = (gcnew System::Windows::Forms::Label());
			this->searchPanel = (gcnew System::Windows::Forms::Panel());
			this->search_showAllButton = (gcnew System::Windows::Forms::Button());
			this->search_backButton = (gcnew System::Windows::Forms::Button());
			this->search_confirmButton = (gcnew System::Windows::Forms::Button());
			this->search_warningLabel = (gcnew System::Windows::Forms::Label());
			this->orLabel = (gcnew System::Windows::Forms::Label());
			this->search_genComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->search_genreLabel = (gcnew System::Windows::Forms::Label());
			this->search_catLabel = (gcnew System::Windows::Forms::Label());
			this->search_catComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->search_nameInput = (gcnew System::Windows::Forms::TextBox());
			this->search_searchLabel = (gcnew System::Windows::Forms::Label());
			this->search_Label = (gcnew System::Windows::Forms::Label());
			this->addPanel->SuspendLayout();
			this->contentPanel->SuspendLayout();
			this->deletePanel->SuspendLayout();
			this->searchPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// add_backButton
			// 
			this->add_backButton->BackColor = System::Drawing::Color::DarkGray;
			this->add_backButton->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->add_backButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->add_backButton->Location = System::Drawing::Point(4, 303);
			this->add_backButton->Margin = System::Windows::Forms::Padding(4);
			this->add_backButton->Name = L"add_backButton";
			this->add_backButton->Size = System::Drawing::Size(78, 37);
			this->add_backButton->TabIndex = 8;
			this->add_backButton->Text = L"Back";
			this->add_backButton->UseVisualStyleBackColor = false;
			this->add_backButton->Click += gcnew System::EventHandler(this, &Content::add_backButton_Click);
			// 
			// addPanel
			// 
			this->addPanel->Controls->Add(this->add_errorLabel4);
			this->addPanel->Controls->Add(this->add_errorLabel8);
			this->addPanel->Controls->Add(this->add_errorLabel7);
			this->addPanel->Controls->Add(this->add_backButton);
			this->addPanel->Controls->Add(this->label1);
			this->addPanel->Controls->Add(this->add_yearInput);
			this->addPanel->Controls->Add(this->add_monthInput);
			this->addPanel->Controls->Add(this->add_errorLabel2);
			this->addPanel->Controls->Add(this->add_errorLabel3);
			this->addPanel->Controls->Add(this->add_confirmButton);
			this->addPanel->Controls->Add(this->add_errorLabel5);
			this->addPanel->Controls->Add(this->add_errorLabel1);
			this->addPanel->Controls->Add(this->add_dateLabel);
			this->addPanel->Controls->Add(this->add_genLabel);
			this->addPanel->Controls->Add(this->add_catLabel);
			this->addPanel->Controls->Add(this->add_nameLabel);
			this->addPanel->Controls->Add(this->add_dayInput);
			this->addPanel->Controls->Add(this->add_genInput);
			this->addPanel->Controls->Add(this->add_catInput);
			this->addPanel->Controls->Add(this->add_nameInput);
			this->addPanel->Location = System::Drawing::Point(12, 12);
			this->addPanel->Name = L"addPanel";
			this->addPanel->Size = System::Drawing::Size(305, 347);
			this->addPanel->TabIndex = 4;
			// 
			// add_errorLabel4
			// 
			this->add_errorLabel4->AutoSize = true;
			this->add_errorLabel4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->add_errorLabel4->ForeColor = System::Drawing::Color::Red;
			this->add_errorLabel4->Location = System::Drawing::Point(231, 248);
			this->add_errorLabel4->Name = L"add_errorLabel4";
			this->add_errorLabel4->Size = System::Drawing::Size(62, 26);
			this->add_errorLabel4->TabIndex = 32;
			this->add_errorLabel4->Text = L"*Error\r\nInvalid date";
			this->add_errorLabel4->Visible = false;
			// 
			// add_errorLabel8
			// 
			this->add_errorLabel8->AutoSize = true;
			this->add_errorLabel8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->add_errorLabel8->ForeColor = System::Drawing::Color::Red;
			this->add_errorLabel8->Location = System::Drawing::Point(7, 273);
			this->add_errorLabel8->Name = L"add_errorLabel8";
			this->add_errorLabel8->Size = System::Drawing::Size(58, 26);
			this->add_errorLabel8->TabIndex = 31;
			this->add_errorLabel8->Text = L"*Error\r\nInvalid day";
			this->add_errorLabel8->Visible = false;
			// 
			// add_errorLabel7
			// 
			this->add_errorLabel7->AutoSize = true;
			this->add_errorLabel7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->add_errorLabel7->ForeColor = System::Drawing::Color::Red;
			this->add_errorLabel7->Location = System::Drawing::Point(82, 273);
			this->add_errorLabel7->Name = L"add_errorLabel7";
			this->add_errorLabel7->Size = System::Drawing::Size(70, 26);
			this->add_errorLabel7->TabIndex = 30;
			this->add_errorLabel7->Text = L"*Error\r\nInvalid month";
			this->add_errorLabel7->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(294, 69);
			this->label1->TabIndex = 29;
			this->label1->Text = L"Add Event";
			// 
			// add_yearInput
			// 
			this->add_yearInput->Location = System::Drawing::Point(150, 248);
			this->add_yearInput->MaxLength = 4;
			this->add_yearInput->Name = L"add_yearInput";
			this->add_yearInput->Size = System::Drawing::Size(66, 22);
			this->add_yearInput->TabIndex = 6;
			this->add_yearInput->TextChanged += gcnew System::EventHandler(this, &Content::add_yearInput_TextChanged);
			// 
			// add_monthInput
			// 
			this->add_monthInput->Location = System::Drawing::Point(78, 248);
			this->add_monthInput->MaxLength = 2;
			this->add_monthInput->Name = L"add_monthInput";
			this->add_monthInput->Size = System::Drawing::Size(66, 22);
			this->add_monthInput->TabIndex = 5;
			this->add_monthInput->TextChanged += gcnew System::EventHandler(this, &Content::add_monthInput_TextChanged);
			// 
			// add_errorLabel2
			// 
			this->add_errorLabel2->AutoSize = true;
			this->add_errorLabel2->ForeColor = System::Drawing::Color::Red;
			this->add_errorLabel2->Location = System::Drawing::Point(231, 161);
			this->add_errorLabel2->Name = L"add_errorLabel2";
			this->add_errorLabel2->Size = System::Drawing::Size(50, 17);
			this->add_errorLabel2->TabIndex = 26;
			this->add_errorLabel2->Text = L"*Error*";
			this->add_errorLabel2->Visible = false;
			// 
			// add_errorLabel3
			// 
			this->add_errorLabel3->AutoSize = true;
			this->add_errorLabel3->ForeColor = System::Drawing::Color::Red;
			this->add_errorLabel3->Location = System::Drawing::Point(231, 206);
			this->add_errorLabel3->Name = L"add_errorLabel3";
			this->add_errorLabel3->Size = System::Drawing::Size(50, 17);
			this->add_errorLabel3->TabIndex = 25;
			this->add_errorLabel3->Text = L"*Error*";
			this->add_errorLabel3->Visible = false;
			// 
			// add_confirmButton
			// 
			this->add_confirmButton->BackColor = System::Drawing::Color::DarkGray;
			this->add_confirmButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->add_confirmButton->Location = System::Drawing::Point(219, 304);
			this->add_confirmButton->Name = L"add_confirmButton";
			this->add_confirmButton->Size = System::Drawing::Size(78, 37);
			this->add_confirmButton->TabIndex = 7;
			this->add_confirmButton->Text = L"Confirm";
			this->add_confirmButton->UseVisualStyleBackColor = false;
			this->add_confirmButton->Click += gcnew System::EventHandler(this, &Content::add_confirmButton_Click);
			// 
			// add_errorLabel5
			// 
			this->add_errorLabel5->AutoSize = true;
			this->add_errorLabel5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->add_errorLabel5->ForeColor = System::Drawing::Color::Red;
			this->add_errorLabel5->Location = System::Drawing::Point(154, 273);
			this->add_errorLabel5->Name = L"add_errorLabel5";
			this->add_errorLabel5->Size = System::Drawing::Size(61, 26);
			this->add_errorLabel5->TabIndex = 24;
			this->add_errorLabel5->Text = L"*Error\r\nInvalid year";
			this->add_errorLabel5->Visible = false;
			// 
			// add_errorLabel1
			// 
			this->add_errorLabel1->AutoSize = true;
			this->add_errorLabel1->ForeColor = System::Drawing::Color::Red;
			this->add_errorLabel1->Location = System::Drawing::Point(231, 116);
			this->add_errorLabel1->Name = L"add_errorLabel1";
			this->add_errorLabel1->Size = System::Drawing::Size(50, 17);
			this->add_errorLabel1->TabIndex = 23;
			this->add_errorLabel1->Text = L"*Error*";
			this->add_errorLabel1->Visible = false;
			// 
			// add_dateLabel
			// 
			this->add_dateLabel->AutoSize = true;
			this->add_dateLabel->Location = System::Drawing::Point(3, 228);
			this->add_dateLabel->Name = L"add_dateLabel";
			this->add_dateLabel->Size = System::Drawing::Size(142, 17);
			this->add_dateLabel->TabIndex = 22;
			this->add_dateLabel->Text = L"Date: (DD/MM/YYYY)";
			// 
			// add_genLabel
			// 
			this->add_genLabel->AutoSize = true;
			this->add_genLabel->Location = System::Drawing::Point(3, 183);
			this->add_genLabel->Name = L"add_genLabel";
			this->add_genLabel->Size = System::Drawing::Size(52, 17);
			this->add_genLabel->TabIndex = 21;
			this->add_genLabel->Text = L"Genre:";
			// 
			// add_catLabel
			// 
			this->add_catLabel->AutoSize = true;
			this->add_catLabel->Location = System::Drawing::Point(3, 138);
			this->add_catLabel->Name = L"add_catLabel";
			this->add_catLabel->Size = System::Drawing::Size(69, 17);
			this->add_catLabel->TabIndex = 20;
			this->add_catLabel->Text = L"Category:";
			// 
			// add_nameLabel
			// 
			this->add_nameLabel->AutoSize = true;
			this->add_nameLabel->Location = System::Drawing::Point(3, 93);
			this->add_nameLabel->Name = L"add_nameLabel";
			this->add_nameLabel->Size = System::Drawing::Size(100, 17);
			this->add_nameLabel->TabIndex = 19;
			this->add_nameLabel->Text = L"Content name:";
			// 
			// add_dayInput
			// 
			this->add_dayInput->Location = System::Drawing::Point(6, 248);
			this->add_dayInput->MaxLength = 2;
			this->add_dayInput->Name = L"add_dayInput";
			this->add_dayInput->Size = System::Drawing::Size(66, 22);
			this->add_dayInput->TabIndex = 4;
			this->add_dayInput->TextChanged += gcnew System::EventHandler(this, &Content::add_dayInput_TextChanged);
			// 
			// add_genInput
			// 
			this->add_genInput->Location = System::Drawing::Point(6, 203);
			this->add_genInput->MaxLength = 20;
			this->add_genInput->Name = L"add_genInput";
			this->add_genInput->Size = System::Drawing::Size(219, 22);
			this->add_genInput->TabIndex = 3;
			this->add_genInput->TextChanged += gcnew System::EventHandler(this, &Content::add_genInput_TextChanged);
			// 
			// add_catInput
			// 
			this->add_catInput->Location = System::Drawing::Point(6, 158);
			this->add_catInput->MaxLength = 20;
			this->add_catInput->Name = L"add_catInput";
			this->add_catInput->Size = System::Drawing::Size(219, 22);
			this->add_catInput->TabIndex = 2;
			this->add_catInput->TextChanged += gcnew System::EventHandler(this, &Content::add_catInput_TextChanged);
			// 
			// add_nameInput
			// 
			this->add_nameInput->Location = System::Drawing::Point(6, 113);
			this->add_nameInput->MaxLength = 20;
			this->add_nameInput->Name = L"add_nameInput";
			this->add_nameInput->Size = System::Drawing::Size(219, 22);
			this->add_nameInput->TabIndex = 1;
			this->add_nameInput->TextChanged += gcnew System::EventHandler(this, &Content::add_nameInput_TextChanged);
			// 
			// contentPanel
			// 
			this->contentPanel->Controls->Add(this->searchButton);
			this->contentPanel->Controls->Add(this->backButton);
			this->contentPanel->Controls->Add(this->delEventButton);
			this->contentPanel->Controls->Add(this->addEventButton);
			this->contentPanel->Controls->Add(this->label2);
			this->contentPanel->Location = System::Drawing::Point(12, 1);
			this->contentPanel->Name = L"contentPanel";
			this->contentPanel->Size = System::Drawing::Size(297, 330);
			this->contentPanel->TabIndex = 31;
			// 
			// searchButton
			// 
			this->searchButton->BackColor = System::Drawing::Color::DarkGray;
			this->searchButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->searchButton->Location = System::Drawing::Point(55, 189);
			this->searchButton->Name = L"searchButton";
			this->searchButton->Size = System::Drawing::Size(204, 32);
			this->searchButton->TabIndex = 3;
			this->searchButton->Text = L"Search Event";
			this->searchButton->UseVisualStyleBackColor = false;
			this->searchButton->Click += gcnew System::EventHandler(this, &Content::searchButton_Click);
			// 
			// backButton
			// 
			this->backButton->BackColor = System::Drawing::Color::DarkGray;
			this->backButton->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->backButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backButton->Location = System::Drawing::Point(15, 281);
			this->backButton->Margin = System::Windows::Forms::Padding(4);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(78, 37);
			this->backButton->TabIndex = 4;
			this->backButton->Text = L"Back";
			this->backButton->UseVisualStyleBackColor = false;
			this->backButton->Click += gcnew System::EventHandler(this, &Content::backButton_Click);
			// 
			// delEventButton
			// 
			this->delEventButton->BackColor = System::Drawing::Color::DarkGray;
			this->delEventButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->delEventButton->Location = System::Drawing::Point(55, 151);
			this->delEventButton->Name = L"delEventButton";
			this->delEventButton->Size = System::Drawing::Size(204, 32);
			this->delEventButton->TabIndex = 2;
			this->delEventButton->Text = L"Delete Event";
			this->delEventButton->UseVisualStyleBackColor = false;
			this->delEventButton->Click += gcnew System::EventHandler(this, &Content::delEventButton_Click);
			// 
			// addEventButton
			// 
			this->addEventButton->BackColor = System::Drawing::Color::DarkGray;
			this->addEventButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addEventButton->Location = System::Drawing::Point(55, 113);
			this->addEventButton->Name = L"addEventButton";
			this->addEventButton->Size = System::Drawing::Size(204, 32);
			this->addEventButton->TabIndex = 1;
			this->addEventButton->Text = L"Add Event";
			this->addEventButton->UseVisualStyleBackColor = false;
			this->addEventButton->Click += gcnew System::EventHandler(this, &Content::addEventButton_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(13, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(193, 69);
			this->label2->TabIndex = 30;
			this->label2->Text = L"Events";
			// 
			// deletePanel
			// 
			this->deletePanel->Controls->Add(this->label5);
			this->deletePanel->Controls->Add(this->label3);
			this->deletePanel->Controls->Add(this->del_yearInput);
			this->deletePanel->Controls->Add(this->del_monthInput);
			this->deletePanel->Controls->Add(this->label4);
			this->deletePanel->Controls->Add(this->del_dayInput);
			this->deletePanel->Controls->Add(this->del_confirmButton);
			this->deletePanel->Controls->Add(this->del_genComboBox);
			this->deletePanel->Controls->Add(this->del_genLabel);
			this->deletePanel->Controls->Add(this->del_catLabel);
			this->deletePanel->Controls->Add(this->del_catComboBox);
			this->deletePanel->Controls->Add(this->del_nameInput);
			this->deletePanel->Controls->Add(this->del_nameLabel);
			this->deletePanel->Controls->Add(this->del_backButton);
			this->deletePanel->Controls->Add(this->del_Label);
			this->deletePanel->Location = System::Drawing::Point(10, 12);
			this->deletePanel->Name = L"deletePanel";
			this->deletePanel->Size = System::Drawing::Size(307, 329);
			this->deletePanel->TabIndex = 35;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(174, 251);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(12, 17);
			this->label5->TabIndex = 50;
			this->label5->Text = L"/";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(85, 251);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(12, 17);
			this->label3->TabIndex = 49;
			this->label3->Text = L"/";
			// 
			// del_yearInput
			// 
			this->del_yearInput->Location = System::Drawing::Point(191, 248);
			this->del_yearInput->MaxLength = 4;
			this->del_yearInput->Name = L"del_yearInput";
			this->del_yearInput->Size = System::Drawing::Size(66, 22);
			this->del_yearInput->TabIndex = 47;
			// 
			// del_monthInput
			// 
			this->del_monthInput->Location = System::Drawing::Point(102, 248);
			this->del_monthInput->MaxLength = 2;
			this->del_monthInput->Name = L"del_monthInput";
			this->del_monthInput->Size = System::Drawing::Size(66, 22);
			this->del_monthInput->TabIndex = 46;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(14, 228);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(142, 17);
			this->label4->TabIndex = 48;
			this->label4->Text = L"Date: (DD/MM/YYYY)";
			// 
			// del_dayInput
			// 
			this->del_dayInput->Location = System::Drawing::Point(13, 248);
			this->del_dayInput->MaxLength = 2;
			this->del_dayInput->Name = L"del_dayInput";
			this->del_dayInput->Size = System::Drawing::Size(66, 22);
			this->del_dayInput->TabIndex = 45;
			// 
			// del_confirmButton
			// 
			this->del_confirmButton->BackColor = System::Drawing::Color::DarkGray;
			this->del_confirmButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->del_confirmButton->Location = System::Drawing::Point(221, 282);
			this->del_confirmButton->Name = L"del_confirmButton";
			this->del_confirmButton->Size = System::Drawing::Size(78, 37);
			this->del_confirmButton->TabIndex = 4;
			this->del_confirmButton->Text = L"Confirm";
			this->del_confirmButton->UseVisualStyleBackColor = false;
			this->del_confirmButton->Click += gcnew System::EventHandler(this, &Content::del_confirmButton_Click);
			// 
			// del_genComboBox
			// 
			this->del_genComboBox->FormattingEnabled = true;
			this->del_genComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Action", L"Drama", L"Comedy" });
			this->del_genComboBox->Location = System::Drawing::Point(152, 190);
			this->del_genComboBox->MaxLength = 20;
			this->del_genComboBox->Name = L"del_genComboBox";
			this->del_genComboBox->Size = System::Drawing::Size(121, 24);
			this->del_genComboBox->TabIndex = 3;
			// 
			// del_genLabel
			// 
			this->del_genLabel->AutoSize = true;
			this->del_genLabel->Location = System::Drawing::Point(149, 170);
			this->del_genLabel->Name = L"del_genLabel";
			this->del_genLabel->Size = System::Drawing::Size(52, 17);
			this->del_genLabel->TabIndex = 41;
			this->del_genLabel->Text = L"Genre:";
			// 
			// del_catLabel
			// 
			this->del_catLabel->AutoSize = true;
			this->del_catLabel->Location = System::Drawing::Point(14, 170);
			this->del_catLabel->Name = L"del_catLabel";
			this->del_catLabel->Size = System::Drawing::Size(69, 17);
			this->del_catLabel->TabIndex = 40;
			this->del_catLabel->Text = L"Category:";
			// 
			// del_catComboBox
			// 
			this->del_catComboBox->FormattingEnabled = true;
			this->del_catComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Movie", L"TVShow" });
			this->del_catComboBox->Location = System::Drawing::Point(13, 190);
			this->del_catComboBox->MaxLength = 20;
			this->del_catComboBox->Name = L"del_catComboBox";
			this->del_catComboBox->Size = System::Drawing::Size(121, 24);
			this->del_catComboBox->TabIndex = 2;
			// 
			// del_nameInput
			// 
			this->del_nameInput->Location = System::Drawing::Point(12, 138);
			this->del_nameInput->MaxLength = 20;
			this->del_nameInput->Name = L"del_nameInput";
			this->del_nameInput->Size = System::Drawing::Size(260, 22);
			this->del_nameInput->TabIndex = 1;
			this->del_nameInput->TextChanged += gcnew System::EventHandler(this, &Content::del_nameInput_TextChanged);
			// 
			// del_nameLabel
			// 
			this->del_nameLabel->AutoSize = true;
			this->del_nameLabel->Location = System::Drawing::Point(9, 118);
			this->del_nameLabel->Name = L"del_nameLabel";
			this->del_nameLabel->Size = System::Drawing::Size(87, 17);
			this->del_nameLabel->TabIndex = 37;
			this->del_nameLabel->Text = L"Event name:";
			// 
			// del_backButton
			// 
			this->del_backButton->BackColor = System::Drawing::Color::DarkGray;
			this->del_backButton->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->del_backButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->del_backButton->Location = System::Drawing::Point(8, 282);
			this->del_backButton->Margin = System::Windows::Forms::Padding(4);
			this->del_backButton->Name = L"del_backButton";
			this->del_backButton->Size = System::Drawing::Size(78, 37);
			this->del_backButton->TabIndex = 5;
			this->del_backButton->Text = L"Back";
			this->del_backButton->UseVisualStyleBackColor = false;
			this->del_backButton->Click += gcnew System::EventHandler(this, &Content::del_backButton_Click);
			// 
			// del_Label
			// 
			this->del_Label->AutoSize = true;
			this->del_Label->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->del_Label->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 31.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->del_Label->Location = System::Drawing::Point(16, 0);
			this->del_Label->Name = L"del_Label";
			this->del_Label->Size = System::Drawing::Size(265, 122);
			this->del_Label->TabIndex = 35;
			this->del_Label->Text = L"Delete \r\n        Event";
			// 
			// searchPanel
			// 
			this->searchPanel->Controls->Add(this->search_showAllButton);
			this->searchPanel->Controls->Add(this->search_backButton);
			this->searchPanel->Controls->Add(this->search_confirmButton);
			this->searchPanel->Controls->Add(this->search_warningLabel);
			this->searchPanel->Controls->Add(this->orLabel);
			this->searchPanel->Controls->Add(this->search_genComboBox);
			this->searchPanel->Controls->Add(this->search_genreLabel);
			this->searchPanel->Controls->Add(this->search_catLabel);
			this->searchPanel->Controls->Add(this->search_catComboBox);
			this->searchPanel->Controls->Add(this->search_nameInput);
			this->searchPanel->Controls->Add(this->search_searchLabel);
			this->searchPanel->Controls->Add(this->search_Label);
			this->searchPanel->Location = System::Drawing::Point(10, 12);
			this->searchPanel->Name = L"searchPanel";
			this->searchPanel->Size = System::Drawing::Size(284, 344);
			this->searchPanel->TabIndex = 36;
			// 
			// search_showAllButton
			// 
			this->search_showAllButton->BackColor = System::Drawing::Color::DarkGray;
			this->search_showAllButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->search_showAllButton->Location = System::Drawing::Point(97, 294);
			this->search_showAllButton->Name = L"search_showAllButton";
			this->search_showAllButton->Size = System::Drawing::Size(78, 46);
			this->search_showAllButton->TabIndex = 37;
			this->search_showAllButton->Text = L"Show All \r\nContent";
			this->search_showAllButton->UseVisualStyleBackColor = false;
			this->search_showAllButton->Click += gcnew System::EventHandler(this, &Content::search_showAllButton_Click);
			// 
			// search_backButton
			// 
			this->search_backButton->BackColor = System::Drawing::Color::DarkGray;
			this->search_backButton->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->search_backButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->search_backButton->Location = System::Drawing::Point(6, 299);
			this->search_backButton->Margin = System::Windows::Forms::Padding(4);
			this->search_backButton->Name = L"search_backButton";
			this->search_backButton->Size = System::Drawing::Size(78, 37);
			this->search_backButton->TabIndex = 4;
			this->search_backButton->Text = L"Back";
			this->search_backButton->UseVisualStyleBackColor = false;
			this->search_backButton->Click += gcnew System::EventHandler(this, &Content::search_backButton_Click);
			// 
			// search_confirmButton
			// 
			this->search_confirmButton->BackColor = System::Drawing::Color::DarkGray;
			this->search_confirmButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->search_confirmButton->Location = System::Drawing::Point(195, 298);
			this->search_confirmButton->Name = L"search_confirmButton";
			this->search_confirmButton->Size = System::Drawing::Size(78, 37);
			this->search_confirmButton->TabIndex = 5;
			this->search_confirmButton->Text = L"Search";
			this->search_confirmButton->UseVisualStyleBackColor = false;
			this->search_confirmButton->Click += gcnew System::EventHandler(this, &Content::search_confirmButton_Click);
			// 
			// search_warningLabel
			// 
			this->search_warningLabel->ForeColor = System::Drawing::Color::Red;
			this->search_warningLabel->Location = System::Drawing::Point(1, 187);
			this->search_warningLabel->Name = L"search_warningLabel";
			this->search_warningLabel->Size = System::Drawing::Size(236, 21);
			this->search_warningLabel->TabIndex = 24;
			this->search_warningLabel->Text = L"*Characters lenght should be 3 - 20";
			// 
			// orLabel
			// 
			this->orLabel->AutoSize = true;
			this->orLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->orLabel->Location = System::Drawing::Point(111, 210);
			this->orLabel->Name = L"orLabel";
			this->orLabel->Size = System::Drawing::Size(40, 24);
			this->orLabel->TabIndex = 23;
			this->orLabel->Text = L"OR";
			// 
			// search_genComboBox
			// 
			this->search_genComboBox->FormattingEnabled = true;
			this->search_genComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Action", L"Drama", L"Comedy" });
			this->search_genComboBox->Location = System::Drawing::Point(145, 262);
			this->search_genComboBox->MaxLength = 3;
			this->search_genComboBox->Name = L"search_genComboBox";
			this->search_genComboBox->Size = System::Drawing::Size(121, 24);
			this->search_genComboBox->TabIndex = 22;
			// 
			// search_genreLabel
			// 
			this->search_genreLabel->AutoSize = true;
			this->search_genreLabel->Location = System::Drawing::Point(142, 240);
			this->search_genreLabel->Name = L"search_genreLabel";
			this->search_genreLabel->Size = System::Drawing::Size(52, 17);
			this->search_genreLabel->TabIndex = 21;
			this->search_genreLabel->Text = L"Genre:";
			// 
			// search_catLabel
			// 
			this->search_catLabel->AutoSize = true;
			this->search_catLabel->Location = System::Drawing::Point(3, 240);
			this->search_catLabel->Name = L"search_catLabel";
			this->search_catLabel->Size = System::Drawing::Size(69, 17);
			this->search_catLabel->TabIndex = 20;
			this->search_catLabel->Text = L"Category:";
			// 
			// search_catComboBox
			// 
			this->search_catComboBox->FormattingEnabled = true;
			this->search_catComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Movie", L"TVShow" });
			this->search_catComboBox->Location = System::Drawing::Point(6, 262);
			this->search_catComboBox->MaxLength = 2;
			this->search_catComboBox->Name = L"search_catComboBox";
			this->search_catComboBox->Size = System::Drawing::Size(121, 24);
			this->search_catComboBox->TabIndex = 19;
			// 
			// search_nameInput
			// 
			this->search_nameInput->Location = System::Drawing::Point(6, 162);
			this->search_nameInput->MaxLength = 20;
			this->search_nameInput->Name = L"search_nameInput";
			this->search_nameInput->Size = System::Drawing::Size(260, 22);
			this->search_nameInput->TabIndex = 1;
			this->search_nameInput->TextChanged += gcnew System::EventHandler(this, &Content::search_nameInput_TextChanged);
			// 
			// search_searchLabel
			// 
			this->search_searchLabel->AutoSize = true;
			this->search_searchLabel->Location = System::Drawing::Point(3, 142);
			this->search_searchLabel->Name = L"search_searchLabel";
			this->search_searchLabel->Size = System::Drawing::Size(115, 17);
			this->search_searchLabel->TabIndex = 17;
			this->search_searchLabel->Text = L"Search by name:";
			// 
			// search_Label
			// 
			this->search_Label->AutoSize = true;
			this->search_Label->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->search_Label->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_Label->Location = System::Drawing::Point(6, 5);
			this->search_Label->Name = L"search_Label";
			this->search_Label->Size = System::Drawing::Size(267, 138);
			this->search_Label->TabIndex = 36;
			this->search_Label->Text = L"Search\r\n      Event";
			// 
			// Content
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->add_backButton;
			this->ClientSize = System::Drawing::Size(329, 368);
			this->Controls->Add(this->searchPanel);
			this->Controls->Add(this->deletePanel);
			this->Controls->Add(this->contentPanel);
			this->Controls->Add(this->addPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MaximizeBox = false;
			this->Name = L"Content";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Content";
			this->Load += gcnew System::EventHandler(this, &Content::Content_Load);
			this->addPanel->ResumeLayout(false);
			this->addPanel->PerformLayout();
			this->contentPanel->ResumeLayout(false);
			this->contentPanel->PerformLayout();
			this->deletePanel->ResumeLayout(false);
			this->deletePanel->PerformLayout();
			this->searchPanel->ResumeLayout(false);
			this->searchPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Content_Load(System::Object^  sender, System::EventArgs^  e) {
		if (globalCurrentUserPermission == ADMIN || globalCurrentUserPermission == CONPROMOTER) {
			addPanel->Visible = false;
			deletePanel->Visible = false;
			contentPanel->Visible = true;
			searchPanel->Visible = false;
		}
		else {
			addPanel->Visible = false;
			deletePanel->Visible = false;
			contentPanel->Visible = false;
			searchPanel->Visible = true;
		}
	}
	private: System::Void add_confirmButton_Click(System::Object^  sender, System::EventArgs^  e) {
		add_errorLabel4->Visible = false;
		if (add_nameInput->TextLength < 3 || add_catInput->TextLength < 3 || add_genInput->TextLength < 3 ||
			 add_errorLabel5->Visible == true || add_errorLabel5->Visible == true ||
			add_errorLabel7->Visible == true || add_errorLabel8->Visible == true)
			this->add_confirmButton->BackColor = System::Drawing::Color::Red;
		else {
			int day = stoi(marshal_as<string>(add_dayInput->Text));
			int month = stoi(marshal_as<string>(add_monthInput->Text));
			int year = stoi(marshal_as<string>(add_yearInput->Text));
			if (isGoodDate(day, month, year)) {
				add_errorLabel4->Visible = false;
				this->add_confirmButton->BackColor = System::Drawing::Color::DarkGray;
				String^ contentName = add_nameInput->Text, ^contentCategory = add_catInput->Text, ^contentGenre = add_genInput->Text,
					^contentDate = add_dayInput->Text + "." + add_monthInput->Text + "." + add_yearInput->Text;
				writeToDataBase(contentName, contentCategory, contentGenre, contentDate, "Content");
				MessageBox::Show("Successfully added content.");
				addPanel->Visible = false;
				contentPanel->Visible = true;
			}
			else {
				this->add_confirmButton->BackColor = System::Drawing::Color::Red;
				add_errorLabel4->Visible = true;
			}
		}
	}
	private: System::Void add_nameInput_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if (add_nameInput->TextLength < 3)
			add_errorLabel1->Visible = true;
		else
			add_errorLabel1->Visible = false;
	}
	private: System::Void add_catInput_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if (add_catInput->TextLength < 3)
			add_errorLabel2->Visible = true;
		else
			add_errorLabel2->Visible = false;
	}
	private: System::Void add_genInput_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if (add_genInput->TextLength < 3)
			add_errorLabel3->Visible = true;
		else
			add_errorLabel3->Visible = false;
	}
	private: System::Void add_dayInput_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		try {
			if (add_dayInput->TextLength != 2)
				add_errorLabel8->Visible = true;
			else {
				add_errorLabel8->Visible = false;
				stoi(marshal_as<string>(add_dayInput->Text));
			}
		}
		catch (invalid_argument) {
			add_errorLabel8->Visible = true;
		}
	}
	private: System::Void add_monthInput_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		try {
			if (add_monthInput->TextLength != 2)
				add_errorLabel7->Visible = true;
			else {
				add_errorLabel7->Visible = false;
				stoi(marshal_as<string>(add_monthInput->Text));
			}
		}
		catch (invalid_argument) {
			add_errorLabel7->Visible = true;
		}
	}
	private: System::Void add_yearInput_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		try {
			if (add_yearInput->TextLength != 4)
				add_errorLabel5->Visible = true;
			else {
				add_errorLabel5->Visible = false;
				stoi(marshal_as<string>(add_yearInput->Text));
			}
		}
		catch (invalid_argument) {
			add_errorLabel5->Visible = true;
		}
	}
	private: System::Void addEventButton_Click(System::Object^  sender, System::EventArgs^  e) {
		contentPanel->Visible = false;
		addPanel->Visible = true;
	}
	private: System::Void delEventButton_Click(System::Object^  sender, System::EventArgs^  e) {
		contentPanel->Visible = false;
		deletePanel->Visible = true;
	}
	private: System::Void add_backButton_Click(System::Object^  sender, System::EventArgs^  e) {
		contentPanel->Visible = true;
		addPanel->Visible = false;
	}
	private: System::Void del_confirmButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (del_nameInput->TextLength < 3 || del_dayInput->TextLength != 2 ||
			del_monthInput->TextLength != 2 || del_yearInput->TextLength != 4)
			this->del_confirmButton->BackColor = System::Drawing::Color::Red;
		else {
			this->del_confirmButton->BackColor = System::Drawing::Color::Red;
			string date = marshal_as<string>(del_dayInput->Text) + "." + marshal_as<string>(del_monthInput->Text) + "." + marshal_as<string>(del_yearInput->Text);
			if (deleteEvent(marshal_as<string>(del_nameInput->Text), marshal_as<string>(del_catComboBox->Text), marshal_as<string>(del_genComboBox->Text), date))
				MessageBox::Show("Succssessfuly deleted the " + del_catComboBox->Text + ": " + del_nameInput->Text + '.');
			else
				MessageBox::Show("Nothing found.");
			addPanel->Visible = false;
			contentPanel->Visible = true;
		}
	}
	private: System::Void del_backButton_Click(System::Object^  sender, System::EventArgs^  e) {
		contentPanel->Visible = true;
		deletePanel->Visible = false;
	}
	private: System::Void del_nameInput_TextChanged(System::Object^  sender, System::EventArgs^  e) {}
	private: System::Void backButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Visible = false;
		obj->Visible = true;
	}
	private: System::Void searchButton_Click(System::Object^  sender, System::EventArgs^  e) {
		contentPanel->Visible = false;
		searchPanel->Visible = true;
	}
	private: System::Void search_confirmButton_Click(System::Object^  sender, System::EventArgs^  e) {
		bool flag = false;
		if (search_nameInput->TextLength < 3)
			search_warningLabel->Visible = true;
		else if (search_nameInput->TextLength >= 3) {
			search_warningLabel->Visible = false;
			String^ searchName = search_nameInput->Text;
			flag = true;
			writeToUserSearch(findContentByName(marshal_as<string>(searchName), "Event"));
			this->Hide();
			SearchResult^ result = gcnew SearchResult(this);
			result->Show();
		}
		if (flag == false) {
			search_warningLabel->Visible = false;
			writeToUserSearch(findContentByCatAndGen(marshal_as<string>(search_genComboBox->Text), marshal_as<string>(search_catComboBox->Text), "Event"));
			this->Hide();
			SearchResult^ result = gcnew SearchResult(this);
			result->Show();
		}
	}
	private: System::Void search_nameInput_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if (search_nameInput->TextLength < 3)
			search_warningLabel->Visible = true;
		else
			search_warningLabel->Visible = false;
	}
	private: System::Void search_backButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (globalCurrentUserPermission == ADMIN || globalCurrentUserPermission == CONPROMOTER) {
			searchPanel->Visible = false;
			contentPanel->Visible = true;
		}
		else {
			this->Visible = false;
			obj->Visible = true;
		}
	}
	private: System::Void search_showAllButton_Click(System::Object^  sender, System::EventArgs^  e) {
		string print = findAllContent();
		writeToUserSearch(print);
		this->Visible = false;
		SearchResult^ result = gcnew SearchResult(this);
		result->Show();

	}
	};
}
