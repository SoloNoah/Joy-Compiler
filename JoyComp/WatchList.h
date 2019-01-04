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

	extern string globalUsername;

	/// <summary>
	/// Summary for WatchList
	/// </summary>
	public ref class WatchList : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		WatchList(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		WatchList(Form^ other)
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
		~WatchList()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:



	private: System::Windows::Forms::Button^  backButton;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  nameLabel;
	private: System::Windows::Forms::Label^  catLabel;
	private: System::Windows::Forms::Label^  genLabel;
	private: System::Windows::Forms::Label^  dateLabel;



	private: System::Windows::Forms::Label^  faqLabel;
	private: System::Windows::Forms::ListBox^  nameListBox;
	private: System::Windows::Forms::ListBox^  genListBox;
	private: System::Windows::Forms::ListBox^  catListBox;
	private: System::Windows::Forms::ListBox^  dateListBox;
	private: System::Windows::Forms::Button^  button1;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->catLabel = (gcnew System::Windows::Forms::Label());
			this->genLabel = (gcnew System::Windows::Forms::Label());
			this->dateLabel = (gcnew System::Windows::Forms::Label());
			this->faqLabel = (gcnew System::Windows::Forms::Label());
			this->nameListBox = (gcnew System::Windows::Forms::ListBox());
			this->genListBox = (gcnew System::Windows::Forms::ListBox());
			this->catListBox = (gcnew System::Windows::Forms::ListBox());
			this->dateListBox = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// backButton
			// 
			this->backButton->BackColor = System::Drawing::Color::DarkGray;
			this->backButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backButton->Location = System::Drawing::Point(12, 301);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(80, 32);
			this->backButton->TabIndex = 15;
			this->backButton->Text = L"Back";
			this->backButton->UseVisualStyleBackColor = false;
			this->backButton->Click += gcnew System::EventHandler(this, &WatchList::backButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Info;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Location = System::Drawing::Point(117, 282);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(319, 51);
			this->label1->TabIndex = 18;
			this->label1->Text = L"If you want to remove an event:\r\n[1] Pick the name of the event you want to delet"
				L"e.\r\n[2] Click \'Remove\'";
			// 
			// nameLabel
			// 
			this->nameLabel->AutoSize = true;
			this->nameLabel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nameLabel->Location = System::Drawing::Point(12, 92);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(49, 17);
			this->nameLabel->TabIndex = 19;
			this->nameLabel->Text = L"Name:";
			// 
			// catLabel
			// 
			this->catLabel->AutoSize = true;
			this->catLabel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->catLabel->Location = System::Drawing::Point(141, 92);
			this->catLabel->Name = L"catLabel";
			this->catLabel->Size = System::Drawing::Size(69, 17);
			this->catLabel->TabIndex = 20;
			this->catLabel->Text = L"Category:";
			// 
			// genLabel
			// 
			this->genLabel->AutoSize = true;
			this->genLabel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->genLabel->Location = System::Drawing::Point(273, 92);
			this->genLabel->Name = L"genLabel";
			this->genLabel->Size = System::Drawing::Size(52, 17);
			this->genLabel->TabIndex = 21;
			this->genLabel->Text = L"Genre:";
			// 
			// dateLabel
			// 
			this->dateLabel->AutoSize = true;
			this->dateLabel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->dateLabel->Location = System::Drawing::Point(405, 92);
			this->dateLabel->Name = L"dateLabel";
			this->dateLabel->Size = System::Drawing::Size(42, 17);
			this->dateLabel->TabIndex = 22;
			this->dateLabel->Text = L"Date:";
			// 
			// faqLabel
			// 
			this->faqLabel->AutoSize = true;
			this->faqLabel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->faqLabel->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->faqLabel->Location = System::Drawing::Point(108, 9);
			this->faqLabel->Name = L"faqLabel";
			this->faqLabel->Size = System::Drawing::Size(305, 69);
			this->faqLabel->TabIndex = 35;
			this->faqLabel->Text = L"Watch List";
			// 
			// nameListBox
			// 
			this->nameListBox->BackColor = System::Drawing::SystemColors::Control;
			this->nameListBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->nameListBox->FormattingEnabled = true;
			this->nameListBox->ItemHeight = 16;
			this->nameListBox->Location = System::Drawing::Point(12, 117);
			this->nameListBox->Name = L"nameListBox";
			this->nameListBox->Size = System::Drawing::Size(134, 160);
			this->nameListBox->TabIndex = 37;
			this->nameListBox->SelectedIndexChanged += gcnew System::EventHandler(this, &WatchList::nameTextBox_SelectedIndexChanged);
			// 
			// genListBox
			// 
			this->genListBox->BackColor = System::Drawing::SystemColors::Control;
			this->genListBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->genListBox->FormattingEnabled = true;
			this->genListBox->ItemHeight = 16;
			this->genListBox->Location = System::Drawing::Point(144, 117);
			this->genListBox->Name = L"genListBox";
			this->genListBox->Size = System::Drawing::Size(134, 160);
			this->genListBox->TabIndex = 38;
			// 
			// catListBox
			// 
			this->catListBox->BackColor = System::Drawing::SystemColors::Control;
			this->catListBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->catListBox->FormattingEnabled = true;
			this->catListBox->ItemHeight = 16;
			this->catListBox->Location = System::Drawing::Point(276, 117);
			this->catListBox->Name = L"catListBox";
			this->catListBox->Size = System::Drawing::Size(136, 160);
			this->catListBox->TabIndex = 39;
			// 
			// dateListBox
			// 
			this->dateListBox->BackColor = System::Drawing::SystemColors::Control;
			this->dateListBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dateListBox->FormattingEnabled = true;
			this->dateListBox->ItemHeight = 16;
			this->dateListBox->Location = System::Drawing::Point(408, 117);
			this->dateListBox->Name = L"dateListBox";
			this->dateListBox->Size = System::Drawing::Size(135, 160);
			this->dateListBox->TabIndex = 40;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkGray;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(463, 301);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 32);
			this->button1->TabIndex = 41;
			this->button1->Text = L"Remove";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &WatchList::button1_Click_1);
			// 
			// WatchList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(559, 344);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dateListBox);
			this->Controls->Add(this->catListBox);
			this->Controls->Add(this->genListBox);
			this->Controls->Add(this->nameListBox);
			this->Controls->Add(this->faqLabel);
			this->Controls->Add(this->dateLabel);
			this->Controls->Add(this->genLabel);
			this->Controls->Add(this->catLabel);
			this->Controls->Add(this->nameLabel);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->backButton);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"WatchList";
			this->Text = L"WatchList";
			this->Load += gcnew System::EventHandler(this, &WatchList::WatchList_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void outputTextBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void backButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Visible = false;
		obj->Visible = true;
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void WatchList_Load(System::Object^  sender, System::EventArgs^  e) {
		string identifier = globalUsername + "Watchlist.txt";
		char* fileName = new char[identifier.length()];
		strcpy(fileName, identifier.c_str());
		fileName[identifier.length()] = '\0';
		ifstream file(fileName);
		file.seekg(0, file.end);
		int length = file.tellg();
		if (length != 0) {
			file.close();
			extern string globalUsername;
			string text = printAllFile(globalUsername + "Watchlist"), temp;
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
	private: System::Void tableLayoutPanel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
	private: System::Void nameTextBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		if (nameListBox->SelectedIndex >= 0) {
			string holder;
			int val = nameListBox->SelectedIndex + 1, counter = 0;
			ifstream file(globalUsername + "Watchlist.txt", ios::app);
			while (counter < val) {
				getline(file, holder);
				counter++;
			}
			file.close();
			deleteLine(holder, globalUsername + "Watchlist");
			MessageBox::Show("Event has been removed your watchlist!");
			this->Visible = false;
			obj->Visible = true;
		}
		else
			MessageBox::Show("You need to pick an item from your watchlist.");
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
};
}
