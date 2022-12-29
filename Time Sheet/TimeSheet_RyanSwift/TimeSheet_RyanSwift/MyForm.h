#pragma once

#include <string>
#include <iomanip>
#include <exception>
#include <sstream>



namespace $safeprojectname$ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ nameTextBox;
	protected:

	private: System::Windows::Forms::Label^ titleLabel;
	private: System::Windows::Forms::Label^ nameLabel;
	private: System::Windows::Forms::TextBox^ wageTextBox;
	protected:



	private: System::Windows::Forms::Label^ wageLabel;
	private: System::Windows::Forms::Label^ day1Label;
	private: System::Windows::Forms::Label^ day2Label;
	private: System::Windows::Forms::Label^ morningInLabel;
	private: System::Windows::Forms::Label^ lunchOutLabel;
	private: System::Windows::Forms::Label^ lunchInLabel;
	private: System::Windows::Forms::Label^ eveningOutLabel;
	private: System::Windows::Forms::TextBox^ morningD1TextBox;
	private: System::Windows::Forms::TextBox^ lunchOutD1TextBox;
	private: System::Windows::Forms::TextBox^ lunchInD1TextBox;
	private: System::Windows::Forms::TextBox^ eveningD1TextBox;















	private: System::Windows::Forms::TextBox^ morningD2TextBox;
	private: System::Windows::Forms::TextBox^ lunchOutD2TextBox;
	private: System::Windows::Forms::TextBox^ lunchInD2TextBox;
	private: System::Windows::Forms::TextBox^ eveningD2TextBox;
	private: System::Windows::Forms::Label^ totalMinsLabel;
	private: System::Windows::Forms::TextBox^ totalMinsTextBox;








	private: System::Windows::Forms::Label^ totalSalaryLabel;
	private: System::Windows::Forms::TextBox^ totalSalaryTextBox;


	private: System::Windows::Forms::Button^ submitButton;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ printToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ printPreviewToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Drawing::Printing::PrintDocument^ printDocument1;
	private: System::Windows::Forms::PrintDialog^ printDialog1;
	private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->nameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->titleLabel = (gcnew System::Windows::Forms::Label());
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->wageTextBox = (gcnew System::Windows::Forms::TextBox());
			this->wageLabel = (gcnew System::Windows::Forms::Label());
			this->day1Label = (gcnew System::Windows::Forms::Label());
			this->day2Label = (gcnew System::Windows::Forms::Label());
			this->morningInLabel = (gcnew System::Windows::Forms::Label());
			this->lunchOutLabel = (gcnew System::Windows::Forms::Label());
			this->lunchInLabel = (gcnew System::Windows::Forms::Label());
			this->eveningOutLabel = (gcnew System::Windows::Forms::Label());
			this->morningD1TextBox = (gcnew System::Windows::Forms::TextBox());
			this->lunchOutD1TextBox = (gcnew System::Windows::Forms::TextBox());
			this->lunchInD1TextBox = (gcnew System::Windows::Forms::TextBox());
			this->eveningD1TextBox = (gcnew System::Windows::Forms::TextBox());
			this->morningD2TextBox = (gcnew System::Windows::Forms::TextBox());
			this->lunchOutD2TextBox = (gcnew System::Windows::Forms::TextBox());
			this->lunchInD2TextBox = (gcnew System::Windows::Forms::TextBox());
			this->eveningD2TextBox = (gcnew System::Windows::Forms::TextBox());
			this->totalMinsLabel = (gcnew System::Windows::Forms::Label());
			this->totalMinsTextBox = (gcnew System::Windows::Forms::TextBox());
			this->totalSalaryLabel = (gcnew System::Windows::Forms::Label());
			this->totalSalaryTextBox = (gcnew System::Windows::Forms::TextBox());
			this->submitButton = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->printToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->printPreviewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// nameTextBox
			// 
			this->nameTextBox->Location = System::Drawing::Point(198, 93);
			this->nameTextBox->Name = L"nameTextBox";
			this->nameTextBox->Size = System::Drawing::Size(100, 20);
			this->nameTextBox->TabIndex = 0;
			this->nameTextBox->Text = L"John Smith";
			// 
			// titleLabel
			// 
			this->titleLabel->AutoSize = true;
			this->titleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titleLabel->Location = System::Drawing::Point(280, 33);
			this->titleLabel->Name = L"titleLabel";
			this->titleLabel->Size = System::Drawing::Size(131, 25);
			this->titleLabel->TabIndex = 1;
			this->titleLabel->Text = L"Time Sheet";
			// 
			// nameLabel
			// 
			this->nameLabel->AutoSize = true;
			this->nameLabel->Location = System::Drawing::Point(135, 93);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(38, 13);
			this->nameLabel->TabIndex = 2;
			this->nameLabel->Text = L"Name:";
			// 
			// wageTextBox
			// 
			this->wageTextBox->Location = System::Drawing::Point(497, 93);
			this->wageTextBox->Name = L"wageTextBox";
			this->wageTextBox->Size = System::Drawing::Size(100, 20);
			this->wageTextBox->TabIndex = 3;
			this->wageTextBox->Text = L"10.66";
			// 
			// wageLabel
			// 
			this->wageLabel->AutoSize = true;
			this->wageLabel->Location = System::Drawing::Point(379, 93);
			this->wageLabel->Name = L"wageLabel";
			this->wageLabel->Size = System::Drawing::Size(72, 13);
			this->wageLabel->TabIndex = 4;
			this->wageLabel->Text = L"Hourly Wage:";
			// 
			// day1Label
			// 
			this->day1Label->AutoSize = true;
			this->day1Label->Location = System::Drawing::Point(177, 164);
			this->day1Label->Name = L"day1Label";
			this->day1Label->Size = System::Drawing::Size(35, 13);
			this->day1Label->TabIndex = 5;
			this->day1Label->Text = L"Day 1";
			// 
			// day2Label
			// 
			this->day2Label->AutoSize = true;
			this->day2Label->Location = System::Drawing::Point(522, 164);
			this->day2Label->Name = L"day2Label";
			this->day2Label->Size = System::Drawing::Size(35, 13);
			this->day2Label->TabIndex = 6;
			this->day2Label->Text = L"Day 2";
			// 
			// morningInLabel
			// 
			this->morningInLabel->AutoSize = true;
			this->morningInLabel->Location = System::Drawing::Point(332, 211);
			this->morningInLabel->Name = L"morningInLabel";
			this->morningInLabel->Size = System::Drawing::Size(57, 13);
			this->morningInLabel->TabIndex = 7;
			this->morningInLabel->Text = L"Morning In";
			// 
			// lunchOutLabel
			// 
			this->lunchOutLabel->AutoSize = true;
			this->lunchOutLabel->Location = System::Drawing::Point(332, 261);
			this->lunchOutLabel->Name = L"lunchOutLabel";
			this->lunchOutLabel->Size = System::Drawing::Size(57, 13);
			this->lunchOutLabel->TabIndex = 8;
			this->lunchOutLabel->Text = L"Lunch Out";
			// 
			// lunchInLabel
			// 
			this->lunchInLabel->AutoSize = true;
			this->lunchInLabel->Location = System::Drawing::Point(332, 328);
			this->lunchInLabel->Name = L"lunchInLabel";
			this->lunchInLabel->Size = System::Drawing::Size(49, 13);
			this->lunchInLabel->TabIndex = 9;
			this->lunchInLabel->Text = L"Lunch In";
			// 
			// eveningOutLabel
			// 
			this->eveningOutLabel->AutoSize = true;
			this->eveningOutLabel->Location = System::Drawing::Point(332, 388);
			this->eveningOutLabel->Name = L"eveningOutLabel";
			this->eveningOutLabel->Size = System::Drawing::Size(66, 13);
			this->eveningOutLabel->TabIndex = 10;
			this->eveningOutLabel->Text = L"Evening Out";
			// 
			// morningD1TextBox
			// 
			this->morningD1TextBox->Location = System::Drawing::Point(150, 208);
			this->morningD1TextBox->Name = L"morningD1TextBox";
			this->morningD1TextBox->Size = System::Drawing::Size(100, 20);
			this->morningD1TextBox->TabIndex = 15;
			this->morningD1TextBox->Text = L"08:00";
			// 
			// lunchOutD1TextBox
			// 
			this->lunchOutD1TextBox->Location = System::Drawing::Point(150, 261);
			this->lunchOutD1TextBox->Name = L"lunchOutD1TextBox";
			this->lunchOutD1TextBox->Size = System::Drawing::Size(100, 20);
			this->lunchOutD1TextBox->TabIndex = 16;
			this->lunchOutD1TextBox->Text = L"12:00";
			// 
			// lunchInD1TextBox
			// 
			this->lunchInD1TextBox->Location = System::Drawing::Point(150, 328);
			this->lunchInD1TextBox->Name = L"lunchInD1TextBox";
			this->lunchInD1TextBox->Size = System::Drawing::Size(100, 20);
			this->lunchInD1TextBox->TabIndex = 17;
			this->lunchInD1TextBox->Text = L"12:30";
			// 
			// eveningD1TextBox
			// 
			this->eveningD1TextBox->Location = System::Drawing::Point(150, 388);
			this->eveningD1TextBox->Name = L"eveningD1TextBox";
			this->eveningD1TextBox->Size = System::Drawing::Size(100, 20);
			this->eveningD1TextBox->TabIndex = 18;
			this->eveningD1TextBox->Text = L"16:00";
			// 
			// morningD2TextBox
			// 
			this->morningD2TextBox->Location = System::Drawing::Point(497, 208);
			this->morningD2TextBox->Name = L"morningD2TextBox";
			this->morningD2TextBox->Size = System::Drawing::Size(100, 20);
			this->morningD2TextBox->TabIndex = 19;
			this->morningD2TextBox->Text = L"08:00";
			// 
			// lunchOutD2TextBox
			// 
			this->lunchOutD2TextBox->Location = System::Drawing::Point(497, 261);
			this->lunchOutD2TextBox->Name = L"lunchOutD2TextBox";
			this->lunchOutD2TextBox->Size = System::Drawing::Size(100, 20);
			this->lunchOutD2TextBox->TabIndex = 20;
			this->lunchOutD2TextBox->Text = L"12:00";
			// 
			// lunchInD2TextBox
			// 
			this->lunchInD2TextBox->Location = System::Drawing::Point(497, 328);
			this->lunchInD2TextBox->Name = L"lunchInD2TextBox";
			this->lunchInD2TextBox->Size = System::Drawing::Size(100, 20);
			this->lunchInD2TextBox->TabIndex = 21;
			this->lunchInD2TextBox->Text = L"12:30";
			// 
			// eveningD2TextBox
			// 
			this->eveningD2TextBox->Location = System::Drawing::Point(497, 388);
			this->eveningD2TextBox->Name = L"eveningD2TextBox";
			this->eveningD2TextBox->Size = System::Drawing::Size(100, 20);
			this->eveningD2TextBox->TabIndex = 22;
			this->eveningD2TextBox->Text = L"16:00";
			// 
			// totalMinsLabel
			// 
			this->totalMinsLabel->AutoSize = true;
			this->totalMinsLabel->Location = System::Drawing::Point(177, 461);
			this->totalMinsLabel->Name = L"totalMinsLabel";
			this->totalMinsLabel->Size = System::Drawing::Size(121, 13);
			this->totalMinsLabel->TabIndex = 23;
			this->totalMinsLabel->Text = L"Total Minutes for Week:";
			// 
			// totalMinsTextBox
			// 
			this->totalMinsTextBox->Location = System::Drawing::Point(180, 488);
			this->totalMinsTextBox->Name = L"totalMinsTextBox";
			this->totalMinsTextBox->ReadOnly = true;
			this->totalMinsTextBox->Size = System::Drawing::Size(100, 20);
			this->totalMinsTextBox->TabIndex = 24;
			// 
			// totalSalaryLabel
			// 
			this->totalSalaryLabel->AutoSize = true;
			this->totalSalaryLabel->Location = System::Drawing::Point(412, 461);
			this->totalSalaryLabel->Name = L"totalSalaryLabel";
			this->totalSalaryLabel->Size = System::Drawing::Size(113, 13);
			this->totalSalaryLabel->TabIndex = 25;
			this->totalSalaryLabel->Text = L"Total Salary for Week:";
			// 
			// totalSalaryTextBox
			// 
			this->totalSalaryTextBox->Location = System::Drawing::Point(415, 488);
			this->totalSalaryTextBox->Name = L"totalSalaryTextBox";
			this->totalSalaryTextBox->ReadOnly = true;
			this->totalSalaryTextBox->Size = System::Drawing::Size(100, 20);
			this->totalSalaryTextBox->TabIndex = 26;
			// 
			// submitButton
			// 
			this->submitButton->Location = System::Drawing::Point(285, 560);
			this->submitButton->Name = L"submitButton";
			this->submitButton->Size = System::Drawing::Size(104, 42);
			this->submitButton->TabIndex = 27;
			this->submitButton->Text = L"Submit";
			this->submitButton->UseVisualStyleBackColor = true;
			this->submitButton->Click += gcnew System::EventHandler(this, &MyForm::submitButton_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(698, 24);
			this->menuStrip1->TabIndex = 28;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->newToolStripMenuItem,
					this->openToolStripMenuItem, this->saveToolStripMenuItem, this->saveAsToolStripMenuItem, this->printToolStripMenuItem, this->printPreviewToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->newToolStripMenuItem->Text = L"New";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::newToolStripMenuItem_Click);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->saveAsToolStripMenuItem->Text = L"Save as";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveAsToolStripMenuItem_Click);
			// 
			// printToolStripMenuItem
			// 
			this->printToolStripMenuItem->Name = L"printToolStripMenuItem";
			this->printToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->printToolStripMenuItem->Text = L"Print";
			this->printToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::printToolStripMenuItem_Click);
			// 
			// printPreviewToolStripMenuItem
			// 
			this->printPreviewToolStripMenuItem->Name = L"printPreviewToolStripMenuItem";
			this->printPreviewToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->printPreviewToolStripMenuItem->Text = L"Print Preview";
			this->printPreviewToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::printPreviewToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &MyForm::printDocument1_PrintPage);
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Enabled = true;
			//this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(698, 640);
			this->Controls->Add(this->submitButton);
			this->Controls->Add(this->totalSalaryTextBox);
			this->Controls->Add(this->totalSalaryLabel);
			this->Controls->Add(this->totalMinsTextBox);
			this->Controls->Add(this->totalMinsLabel);
			this->Controls->Add(this->eveningD2TextBox);
			this->Controls->Add(this->lunchInD2TextBox);
			this->Controls->Add(this->lunchOutD2TextBox);
			this->Controls->Add(this->morningD2TextBox);
			this->Controls->Add(this->eveningD1TextBox);
			this->Controls->Add(this->lunchInD1TextBox);
			this->Controls->Add(this->lunchOutD1TextBox);
			this->Controls->Add(this->morningD1TextBox);
			this->Controls->Add(this->eveningOutLabel);
			this->Controls->Add(this->lunchInLabel);
			this->Controls->Add(this->lunchOutLabel);
			this->Controls->Add(this->morningInLabel);
			this->Controls->Add(this->day2Label);
			this->Controls->Add(this->day1Label);
			this->Controls->Add(this->wageLabel);
			this->Controls->Add(this->wageTextBox);
			this->Controls->Add(this->nameLabel);
			this->Controls->Add(this->titleLabel);
			this->Controls->Add(this->nameTextBox);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Time Sheet";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void submitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		//using namespace std;

		try {

			DateTime amStartTimeDay1, amStartTimeDay2, amEndTimeDay1, amEndTimeDay2, pmStartTimeDay1, pmStartTimeDay2, pmEndTimeDay1, pmEndTimeDay2;

			amStartTimeDay1 = Convert::ToDateTime(this->morningD1TextBox->Text);
			amStartTimeDay2 = Convert::ToDateTime(this->morningD2TextBox->Text);
			amEndTimeDay1 = Convert::ToDateTime(this->lunchOutD1TextBox->Text);
			amEndTimeDay2 = Convert::ToDateTime(this->lunchOutD2TextBox->Text);
			pmStartTimeDay1 = Convert::ToDateTime(this->lunchInD1TextBox->Text);
			pmStartTimeDay2 = Convert::ToDateTime(this->lunchInD2TextBox->Text);
			pmEndTimeDay1 = Convert::ToDateTime(this->eveningD1TextBox->Text);
			pmEndTimeDay2 = Convert::ToDateTime(this->eveningD2TextBox->Text);

			TimeSpan amD1, amD2, pmD1, pmD2;

			amD1 = amEndTimeDay1 - amStartTimeDay1;
			pmD1 = pmEndTimeDay1 - pmStartTimeDay1;
			amD2 = amEndTimeDay2 - amStartTimeDay2;
			pmD2 = pmEndTimeDay2 - pmStartTimeDay2;

			int totalMinutes = ((amD1.Hours * 60) + amD1.Minutes) + ((pmD1.Hours * 60) + pmD1.Minutes) + ((amD2.Hours * 60) + amD2.Minutes)
				+ ((pmD2.Hours * 60) + pmD2.Minutes);

			this->totalMinsTextBox->Text = Convert::ToString(totalMinutes);

			double wage = Convert::ToDouble(this->wageTextBox->Text);

			double salary = wage * (totalMinutes / 60.0);



			System::String^ str = String::Format("{0:0.00}", salary);
			this->totalSalaryTextBox->Text = "$" + str;




		}

		catch (DivideByZeroException^ exc)
		{
			MessageBox::Show("You cannot divide by zero");
		}

		catch (FormatException^ exc)
		{
			MessageBox::Show("Invalid Format");
		}

		catch (...)
		{
			MessageBox::Show("There is a problem");
		}








	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Form::Close();
	}
	private: System::Void newToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->morningD1TextBox->Text = "";
		this->morningD2TextBox->Text = "";
		this->lunchOutD1TextBox->Text = "";
		this->lunchOutD2TextBox->Text = "";
		this->lunchInD1TextBox->Text = "";
		this->lunchInD2TextBox->Text = "";
		this->eveningD1TextBox->Text = "";
		this->eveningD2TextBox->Text = "";
		this->totalMinsTextBox->Text = "";
		this->wageTextBox->Text = "";
		this->totalSalaryTextBox->Text = "";
		this->nameTextBox->Text = "";
	}
	private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
		Pen^ p = gcnew Pen(System::Drawing::Color::Black, 12);
		Brush^ b = gcnew SolidBrush(Color::Black);
		//e->Graphics->DrawLine(p, 22, 22);
		System::Drawing::Font^ f = gcnew System::Drawing::Font("Arial", 12, FontStyle::Italic);

		e->Graphics->DrawString(submitButton->Text, f, b, submitButton->Location);
		e->Graphics->DrawString(totalSalaryTextBox->Text, f, b, totalSalaryTextBox->Location);
		e->Graphics->DrawString(totalSalaryLabel->Text, f, b, totalSalaryLabel->Location);
		e->Graphics->DrawString(totalMinsTextBox->Text, f, b, totalMinsTextBox->Location);
		e->Graphics->DrawString(totalMinsLabel->Text, f, b, totalMinsLabel->Location);
		e->Graphics->DrawString(eveningD2TextBox->Text, f, b, eveningD2TextBox->Location);
		e->Graphics->DrawString(lunchInD2TextBox->Text, f, b, lunchInD2TextBox->Location);
		e->Graphics->DrawString(lunchOutD2TextBox->Text, f, b, lunchOutD2TextBox->Location);
		e->Graphics->DrawString(morningD2TextBox->Text, f, b, morningD2TextBox->Location);
		e->Graphics->DrawString(eveningD1TextBox->Text, f, b, eveningD1TextBox->Location);
		e->Graphics->DrawString(lunchInD1TextBox->Text, f, b, lunchInD1TextBox->Location);
		e->Graphics->DrawString(lunchOutD1TextBox->Text, f, b, lunchOutD1TextBox->Location);
		e->Graphics->DrawString(morningD1TextBox->Text, f, b, morningD1TextBox->Location);
		e->Graphics->DrawString(eveningOutLabel->Text, f, b, eveningOutLabel->Location);
		e->Graphics->DrawString(lunchInLabel->Text, f, b, lunchInLabel->Location);
		e->Graphics->DrawString(lunchOutLabel->Text, f, b, lunchOutLabel->Location);
		e->Graphics->DrawString(morningInLabel->Text, f, b, morningInLabel->Location);
		e->Graphics->DrawString(day2Label->Text, f, b, day2Label->Location);
		e->Graphics->DrawString(day1Label->Text, f, b, day1Label->Location);
		e->Graphics->DrawString(wageLabel->Text, f, b, wageLabel->Location);
		e->Graphics->DrawString(wageTextBox->Text, f, b, wageTextBox->Location);
		e->Graphics->DrawString(nameLabel->Text, f, b, nameLabel->Location);
		e->Graphics->DrawString(titleLabel->Text, f, b, titleLabel->Location);
		e->Graphics->DrawString(nameTextBox->Text, f, b, nameTextBox->Location);

	}

	private: System::Void printToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->printDialog1->Document = this->printDocument1;
		if (printDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			printDocument1->Print();
		}
	}
	private: System::Void printPreviewToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->printPreviewDialog1->Document = this->printDocument1;
		if (printPreviewDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			printDocument1->Print();
		}
	}

	private: System::Void saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		saveFileDialog1->Title = "Time Sheet - Save As";
		saveFileDialog1->FileName = "";
		saveFileDialog1->DefaultExt = ".txt";
		saveFileDialog1->Filter = "Text Files |*.txt";

		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			FileStream^ fileName = gcnew FileStream(saveFileDialog1->FileName, FileMode::Create);

			StreamWriter^ outputObject = gcnew StreamWriter(fileName);

			outputObject->WriteLine(this->morningD1TextBox->Text);
			outputObject->WriteLine(this->morningD2TextBox->Text);
			outputObject->WriteLine(this->lunchOutD1TextBox->Text);
			outputObject->WriteLine(this->lunchOutD2TextBox->Text);
			outputObject->WriteLine(this->lunchInD1TextBox->Text);
			outputObject->WriteLine(this->lunchInD2TextBox->Text);
			outputObject->WriteLine(this->eveningD1TextBox->Text);
			outputObject->WriteLine(this->eveningD2TextBox->Text);
			outputObject->WriteLine(this->totalMinsTextBox->Text);
			outputObject->WriteLine(this->wageTextBox->Text);
			outputObject->WriteLine(this->totalSalaryTextBox->Text);
			outputObject->WriteLine(this->nameTextBox->Text);

			outputObject->Close();

			
		}

	}
	private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		openFileDialog1->Title = "Time Sheet - Open";
		openFileDialog1->FileName = "";
		openFileDialog1->DefaultExt = ".txt";
		openFileDialog1->Filter = "Text Files |*.txt";

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			FileStream^ fileName = gcnew FileStream(openFileDialog1->FileName, FileMode::OpenOrCreate);

			StreamReader^ inputObject = gcnew StreamReader(fileName);

			this->morningD1TextBox->Text = inputObject->ReadLine();
			this->morningD2TextBox->Text = inputObject->ReadLine();
			this->lunchOutD1TextBox->Text = inputObject->ReadLine();
			this->lunchOutD2TextBox->Text = inputObject->ReadLine();
			this->lunchInD1TextBox->Text = inputObject->ReadLine();
			this->lunchInD2TextBox->Text = inputObject->ReadLine();
			this->eveningD1TextBox->Text = inputObject->ReadLine();
			this->eveningD2TextBox->Text = inputObject->ReadLine();
			this->totalMinsTextBox->Text = inputObject->ReadLine();
			this->wageTextBox->Text = inputObject->ReadLine();
			this->totalSalaryTextBox->Text = inputObject->ReadLine();
			this->nameTextBox->Text = inputObject->ReadLine();

			inputObject->Close();
		}
	}
	private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

			
		if (File::Exists(saveFileDialog1->FileName) == true)
		{
			FileStream^ fileName = gcnew FileStream(openFileDialog1->FileName, FileMode::Create);

			//StreamReader^ inputObject = gcnew StreamReader(fileName);

			StreamWriter^ outputObject = gcnew StreamWriter(fileName);

			outputObject->WriteLine(this->morningD1TextBox->Text);
			outputObject->WriteLine(this->morningD2TextBox->Text);
			outputObject->WriteLine(this->lunchOutD1TextBox->Text);
			outputObject->WriteLine(this->lunchOutD2TextBox->Text);
			outputObject->WriteLine(this->lunchInD1TextBox->Text);
			outputObject->WriteLine(this->lunchInD2TextBox->Text);
			outputObject->WriteLine(this->eveningD1TextBox->Text);
			outputObject->WriteLine(this->eveningD2TextBox->Text);
			outputObject->WriteLine(this->totalMinsTextBox->Text);
			outputObject->WriteLine(this->wageTextBox->Text);
			outputObject->WriteLine(this->totalSalaryTextBox->Text);
			outputObject->WriteLine(this->nameTextBox->Text);

			outputObject->Close();
		}
			
		else
		{
			saveFileDialog1->Title = "Time Sheet - Save As";
			saveFileDialog1->FileName = "";
			saveFileDialog1->DefaultExt = ".txt";
			saveFileDialog1->Filter = "Text Files |*.txt";

			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				FileStream^ fileName = gcnew FileStream(saveFileDialog1->FileName, FileMode::Create);

				String^ path = Path::GetFullPath(saveFileDialog1->FileName);

				StreamWriter^ outputObject = gcnew StreamWriter(fileName);

				outputObject->WriteLine(this->morningD1TextBox->Text);
				outputObject->WriteLine(this->morningD2TextBox->Text);
				outputObject->WriteLine(this->lunchOutD1TextBox->Text);
				outputObject->WriteLine(this->lunchOutD2TextBox->Text);
				outputObject->WriteLine(this->lunchInD1TextBox->Text);
				outputObject->WriteLine(this->lunchInD2TextBox->Text);
				outputObject->WriteLine(this->eveningD1TextBox->Text);
				outputObject->WriteLine(this->eveningD2TextBox->Text);
				outputObject->WriteLine(this->totalMinsTextBox->Text);
				outputObject->WriteLine(this->wageTextBox->Text);
				outputObject->WriteLine(this->totalSalaryTextBox->Text);
				outputObject->WriteLine(this->nameTextBox->Text);

				outputObject->Close();

				
			}
		}
			

		
	}
	
};
}
