#pragma once

#include <ctime>
#include <string>
#include <cstdlib>






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

		int randomNumber; // Target guess
		int prevDelta = 0; // Gap between target and previous guess, initialized to 0 as check
		
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			srand(time(0)); //change seed value each game
			randomNumber = (rand() % 10) + 1; //initialize random number
			



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
	private: System::Windows::Forms::Label^ promptLabel;
	private: System::Windows::Forms::Button^ submitButton;
	private: System::Windows::Forms::Button^ restartButton;
	protected:

	protected:



	private: System::Windows::Forms::TextBox^ inputBox;
	private: System::Windows::Forms::Label^ guessLabel;



	private: System::Windows::Forms::Label^ updateLabel;

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
			this->promptLabel = (gcnew System::Windows::Forms::Label());
			this->submitButton = (gcnew System::Windows::Forms::Button());
			this->restartButton = (gcnew System::Windows::Forms::Button());
			this->inputBox = (gcnew System::Windows::Forms::TextBox());
			this->guessLabel = (gcnew System::Windows::Forms::Label());
			this->updateLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// promptLabel
			// 
			this->promptLabel->AutoSize = true;
			this->promptLabel->BackColor = System::Drawing::SystemColors::Control;
			this->promptLabel->ForeColor = System::Drawing::SystemColors::ControlText;
			this->promptLabel->Location = System::Drawing::Point(79, 37);
			this->promptLabel->Name = L"promptLabel";
			this->promptLabel->Size = System::Drawing::Size(308, 13);
			this->promptLabel->TabIndex = 0;
			this->promptLabel->Text = L"I have a number between 1 and 10- can you guess my number\?";
			// 
			// submitButton
			// 
			this->submitButton->Location = System::Drawing::Point(193, 198);
			this->submitButton->Name = L"submitButton";
			this->submitButton->Size = System::Drawing::Size(75, 23);
			this->submitButton->TabIndex = 2;
			this->submitButton->Text = L"Submit";
			this->submitButton->UseVisualStyleBackColor = true;
			this->submitButton->Click += gcnew System::EventHandler(this, &MyForm::submitButton_Click);
			// 
			// restartButton
			// 
			this->restartButton->Location = System::Drawing::Point(193, 238);
			this->restartButton->Name = L"restartButton";
			this->restartButton->Size = System::Drawing::Size(75, 23);
			this->restartButton->TabIndex = 3;
			this->restartButton->Text = L"Play Again!";
			this->restartButton->UseVisualStyleBackColor = true;
			this->restartButton->Visible = false;
			this->restartButton->Click += gcnew System::EventHandler(this, &MyForm::restartButton_Click);
			// 
			// inputBox
			// 
			this->inputBox->Location = System::Drawing::Point(182, 149);
			this->inputBox->Name = L"inputBox";
			this->inputBox->Size = System::Drawing::Size(100, 20);
			this->inputBox->TabIndex = 5;
			// 
			// guessLabel
			// 
			this->guessLabel->AutoSize = true;
			this->guessLabel->Location = System::Drawing::Point(162, 117);
			this->guessLabel->Name = L"guessLabel";
			this->guessLabel->Size = System::Drawing::Size(142, 13);
			this->guessLabel->TabIndex = 6;
			this->guessLabel->Text = L"Please enter your first guess ";
			// 
			// updateLabel
			// 
			this->updateLabel->AutoSize = true;
			this->updateLabel->Location = System::Drawing::Point(210, 80);
			this->updateLabel->Name = L"updateLabel";
			this->updateLabel->Size = System::Drawing::Size(35, 13);
			this->updateLabel->TabIndex = 7;
			this->updateLabel->Text = L"label1";
			this->updateLabel->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(459, 296);
			this->Controls->Add(this->updateLabel);
			this->Controls->Add(this->guessLabel);
			this->Controls->Add(this->inputBox);
			this->Controls->Add(this->restartButton);
			this->Controls->Add(this->submitButton);
			this->Controls->Add(this->promptLabel);
			this->Name = L"MyForm";
			this->Text = L"Guess The Number";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void submitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		double myNumber;
		myNumber = Convert::ToDouble(this->inputBox->Text);

		// Change text in guess label after first guess
		this->guessLabel->Text = L"Please enter your next guess ";


		// Correct Guess
		if (myNumber == randomNumber)
		{
			this->updateLabel->Visible = true;
			this->updateLabel->Text = L"Correct!";
			this->updateLabel->ForeColor = System::Drawing::Color::Transparent;
			this->updateLabel->BackColor = System::Drawing::Color::Green;

			this->inputBox->ReadOnly = true;
			this->restartButton->Visible = true;
			this->promptLabel->Visible = false;
			this->submitButton->Visible = false;
			this->guessLabel->Visible = false;

		}

		// If it's the first guess, red/close = within 2, and blue/far = 3 or further.
		// If it's not the first guess, set color based on whether the current guess
		// is closer than the previous guess.

		if (prevDelta == 0) { // if true, then it's the first guess

			// High First Guess
			if (myNumber > randomNumber) {
				int currentDelta = myNumber - randomNumber; // gap between target and current guess
				this->updateLabel->Visible = true;
				this->updateLabel->Text = L"Too High";
				this->updateLabel->ForeColor = System::Drawing::Color::Transparent;

				// Close High First Guess
				if ((currentDelta) < 3) {
					this->updateLabel->BackColor = System::Drawing::Color::Red; // red for close guess
				}
				// Far High First Guess
				else if (currentDelta > prevDelta) {
					this->updateLabel->BackColor = System::Drawing::Color::Blue; // blue for far guess	
				}
				prevDelta = currentDelta; // Store delta to track progress
			}
			// Low First Guess
			else if (myNumber < randomNumber) {
				int currentDelta = randomNumber - myNumber;
				this->updateLabel->Visible = true;
				this->updateLabel->Text = L"Too Low";
				this->updateLabel->ForeColor = System::Drawing::Color::Transparent;

				// Close Low First Guess
				if ((currentDelta) < 3) {
					this->updateLabel->BackColor = System::Drawing::Color::Red; // red for close guess
				}
				// Far Low First Guess
				else if (currentDelta > prevDelta) {
					this->updateLabel->BackColor = System::Drawing::Color::Blue; // blue for far guess
				}
				prevDelta = currentDelta; // Store delta to track progress
			}
		}
		else // Not the first guess, so compare current guess to previous guess
		{
			// High Guess
			if (myNumber > randomNumber) {
				int currentDelta = myNumber - randomNumber; // gap between target and current guess
				this->updateLabel->Visible = true;
				this->updateLabel->Text = L"Too High";
				this->updateLabel->ForeColor = System::Drawing::Color::Transparent;
			
				// Closer High Guess
				if (currentDelta < prevDelta) {
					this->updateLabel->BackColor = System::Drawing::Color::Red; // red for close guess
				}
				// Further High Guess
				else if (currentDelta > prevDelta)
					this->updateLabel->BackColor = System::Drawing::Color::Blue; // blue for far guess

				prevDelta = currentDelta; // Store delta to track progress
			}
			// Low Guess
			else if (myNumber < randomNumber) {
				int currentDelta = randomNumber - myNumber;
				this->updateLabel->Visible = true;
				this->updateLabel->Text = L"Too Low";
				this->updateLabel->ForeColor = System::Drawing::Color::Transparent;

				// Closer Low Guess
				if (currentDelta < prevDelta)
					this->updateLabel->BackColor = System::Drawing::Color::Red; // red for close guess
				// Further Low Guess
				else if (currentDelta > prevDelta)
					this->updateLabel->BackColor = System::Drawing::Color::Blue; // blue for far guess

				prevDelta = currentDelta; // Store delta to track progress
			}
		}
	}
private: System::Void restartButton_Click(System::Object^ sender, System::EventArgs^ e) {
	// InitializeComponent();
	srand(time(0)); //change seed value each game
	randomNumber = (rand() % 10) + 1; //initialize random number

	this->restartButton->Visible = false;
	this->guessLabel->Text = L"Please enter your first guess ";
	this->updateLabel->Visible = false;
	this->inputBox->ReadOnly = false;
	this->restartButton->Visible = false;
	this->promptLabel->Visible = true;
	this->submitButton->Visible = true;
	this->guessLabel->Visible = true;
}
};
}
