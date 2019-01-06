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
	/// Summary for SearchResult
	/// </summary>
	public ref class SearchResult : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		SearchResult(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		SearchResult(Form^ other) {
			obj = other;
			InitializeComponent();

		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SearchResult()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Button^  backButton;
	private: System::Windows::Forms::Button^  button1;



	private: System::Windows::Forms::ListBox^  dateListBox;

	private: System::Windows::Forms::ListBox^  catListBox;

	private: System::Windows::Forms::ListBox^  genListBox;

	private: System::Windows::Forms::ListBox^  nameListBox;

	private: System::Windows::Forms::Label^  faqLabel;
	private: System::Windows::Forms::Label^  dateLabel;
	private: System::Windows::Forms::Label^  genLabel;
	private: System::Windows::Forms::Label^  catLabel;
	private: System::Windows::Forms::Label^  nameLabel;
	private: System::Windows::Forms::Label^  label1;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dateListBox = (gcnew System::Windows::Forms::ListBox());
			this->catListBox = (gcnew System::Windows::Forms::ListBox());
			this->genListBox = (gcnew System::Windows::Forms::ListBox());
			this->nameListBox = (gcnew System::Windows::Forms::ListBox());
			this->faqLabel = (gcnew System::Windows::Forms::Label());
			this->dateLabel = (gcnew System::Windows::Forms::Label());
			this->genLabel = (gcnew System::Windows::Forms::Label());
			this->catLabel = (gcnew System::Windows::Forms::Label());
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// backButton
			// 
			this->backButton->BackColor = System::Drawing::Color::Transparent;
			this->backButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backButton->Location = System::Drawing::Point(12, 300);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(80, 32);
			this->backButton->TabIndex = 2;
			this->backButton->Text = L"Back";
			this->backButton->UseVisualStyleBackColor = false;
			this->backButton->Click += gcnew System::EventHandler(this, &SearchResult::backButton_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(465, 300);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 32);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &SearchResult::button1_Click);
			// 
			// dateListBox
			// 
			this->dateListBox->BackColor = System::Drawing::SystemColors::Control;
			this->dateListBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dateListBox->FormattingEnabled = true;
			this->dateListBox->ItemHeight = 16;
			this->dateListBox->Location = System::Drawing::Point(410, 117);
			this->dateListBox->Name = L"dateListBox";
			this->dateListBox->SelectionMode = System::Windows::Forms::SelectionMode::None;
			this->dateListBox->Size = System::Drawing::Size(135, 160);
			this->dateListBox->TabIndex = 49;
			// 
			// catListBox
			// 
			this->catListBox->BackColor = System::Drawing::SystemColors::Control;
			this->catListBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->catListBox->FormattingEnabled = true;
			this->catListBox->ItemHeight = 16;
			this->catListBox->Location = System::Drawing::Point(278, 117);
			this->catListBox->Name = L"catListBox";
			this->catListBox->SelectionMode = System::Windows::Forms::SelectionMode::None;
			this->catListBox->Size = System::Drawing::Size(136, 160);
			this->catListBox->TabIndex = 48;
			// 
			// genListBox
			// 
			this->genListBox->BackColor = System::Drawing::SystemColors::Control;
			this->genListBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->genListBox->FormattingEnabled = true;
			this->genListBox->ItemHeight = 16;
			this->genListBox->Location = System::Drawing::Point(146, 117);
			this->genListBox->Name = L"genListBox";
			this->genListBox->SelectionMode = System::Windows::Forms::SelectionMode::None;
			this->genListBox->Size = System::Drawing::Size(134, 160);
			this->genListBox->TabIndex = 47;
			// 
			// nameListBox
			// 
			this->nameListBox->BackColor = System::Drawing::SystemColors::Control;
			this->nameListBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->nameListBox->FormattingEnabled = true;
			this->nameListBox->ItemHeight = 16;
			this->nameListBox->Location = System::Drawing::Point(14, 117);
			this->nameListBox->Name = L"nameListBox";
			this->nameListBox->Size = System::Drawing::Size(134, 160);
			this->nameListBox->TabIndex = 46;
			// 
			// faqLabel
			// 
			this->faqLabel->AutoSize = true;
			this->faqLabel->BackColor = System::Drawing::Color::Transparent;
			this->faqLabel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->faqLabel->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->faqLabel->Location = System::Drawing::Point(95, 9);
			this->faqLabel->Name = L"faqLabel";
			this->faqLabel->Size = System::Drawing::Size(368, 69);
			this->faqLabel->TabIndex = 45;
			this->faqLabel->Text = L"Search Result";
			// 
			// dateLabel
			// 
			this->dateLabel->AutoSize = true;
			this->dateLabel->BackColor = System::Drawing::Color::Transparent;
			this->dateLabel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->dateLabel->Location = System::Drawing::Point(407, 92);
			this->dateLabel->Name = L"dateLabel";
			this->dateLabel->Size = System::Drawing::Size(42, 17);
			this->dateLabel->TabIndex = 44;
			this->dateLabel->Text = L"Date:";
			// 
			// genLabel
			// 
			this->genLabel->AutoSize = true;
			this->genLabel->BackColor = System::Drawing::Color::Transparent;
			this->genLabel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->genLabel->Location = System::Drawing::Point(275, 92);
			this->genLabel->Name = L"genLabel";
			this->genLabel->Size = System::Drawing::Size(52, 17);
			this->genLabel->TabIndex = 43;
			this->genLabel->Text = L"Genre:";
			// 
			// catLabel
			// 
			this->catLabel->AutoSize = true;
			this->catLabel->BackColor = System::Drawing::Color::Transparent;
			this->catLabel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->catLabel->Location = System::Drawing::Point(143, 92);
			this->catLabel->Name = L"catLabel";
			this->catLabel->Size = System::Drawing::Size(69, 17);
			this->catLabel->TabIndex = 42;
			this->catLabel->Text = L"Category:";
			// 
			// nameLabel
			// 
			this->nameLabel->AutoSize = true;
			this->nameLabel->BackColor = System::Drawing::Color::Transparent;
			this->nameLabel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nameLabel->Location = System::Drawing::Point(14, 92);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(49, 17);
			this->nameLabel->TabIndex = 41;
			this->nameLabel->Text = L"Name:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Info;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Location = System::Drawing::Point(119, 284);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(319, 51);
			this->label1->TabIndex = 50;
			this->label1->Text = L"If you want to add an event to your watchlist:\r\n[1] Pick the name of the event yo"
				L"u want to delete.\r\n[2] Click \'Add\'";
			// 
			// SearchResult
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(559, 344);
			this->BackgroundImage = Image::FromFile("C:\\Users\\aviel\\Desktop\\Joy_Compiler.git\\JoyComp\\photo.jpg");
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dateListBox);
			this->Controls->Add(this->catListBox);
			this->Controls->Add(this->genListBox);
			this->Controls->Add(this->nameListBox);
			this->Controls->Add(this->faqLabel);
			this->Controls->Add(this->dateLabel);
			this->Controls->Add(this->genLabel);
			this->Controls->Add(this->catLabel);
			this->Controls->Add(this->nameLabel);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->backButton);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"SearchResult";
			this->Text = L"SearchResult";
			this->Load += gcnew System::EventHandler(this, &SearchResult::SearchResult_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void backButton_Click(System::Object^  sender, System::EventArgs^  e) {
		remove("UserSearch.txt");
		this->Visible = false;
		obj->Visible = true;
	}
	private: System::Void userNameInput_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (nameListBox->SelectedIndex >= 0) {
			string holder, temp;
			int val = nameListBox->SelectedIndex, counter = 0;
			ifstream file("UserSearch.txt");
			while (counter < val) {
				getline(file, holder);
				counter++;
			}
			getline(file, holder);
			if (writeToWatchList(holder))
				MessageBox::Show("Event has been added to your watchlist!");
			else
				MessageBox::Show("You cant add similar event.");
		}
		else
			MessageBox::Show("You need to pick an item from your watchlist.");
	}
	private: System::Void SearchResult_Load(System::Object^  sender, System::EventArgs^  e) {
		string text = printAllFile("UserSearch"), temp;
		if (text.length() > 0) {
			String^ printText = gcnew String(text.c_str());
			cout << text;
			int i = 0, counter = 0;
			while (text[i] != '\0') {
				while (counter < 4) {
					if (text[i] != ' ' && text[i] != '\n')
						temp += text[i++];
					else {
						switch (counter) {
						case 0:
							nameListBox->Items->Add(gcnew String(temp.c_str()));
							temp.clear();
							counter++;
							i++;
							break;
						case 1:
							genListBox->Items->Add(gcnew String(temp.c_str()));
							counter++;
							temp.clear();
							i++;
							break;
						case 2:
							catListBox->Items->Add(gcnew String(temp.c_str()));
							counter++;
							temp.clear();
							i++;
							break;
						case 3:
							dateListBox->Items->Add(gcnew String(temp.c_str()));
							temp.clear();
							counter++;
							break;
						}
					}
				}
				i++;
				counter = 0;
			}
		}
	}
};
}
