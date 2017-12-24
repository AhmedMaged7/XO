#pragma once
#include <string>
#include <windows.h>
#include <iostream>
#include <fstream>
#include "Header.h"

using namespace std;
namespace XO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
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
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(78, 69);
			this->button1->TabIndex = 0;
			this->button1->Text = L" ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(12, 99);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(78, 69);
			this->button2->TabIndex = 1;
			this->button2->Text = L" ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(8, 186);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(78, 69);
			this->button3->TabIndex = 2;
			this->button3->Text = L" ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(102, 186);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(78, 69);
			this->button4->TabIndex = 5;
			this->button4->Text = L" ";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(102, 99);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(78, 69);
			this->button5->TabIndex = 4;
			this->button5->Text = L" ";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(102, 12);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(78, 69);
			this->button6->TabIndex = 3;
			this->button6->Text = L" ";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Blue;
			this->button7->Location = System::Drawing::Point(197, 186);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(78, 69);
			this->button7->TabIndex = 8;
			this->button7->Text = L" ";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(197, 99);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(78, 69);
			this->button8->TabIndex = 7;
			this->button8->Text = L" ";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(197, 12);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(78, 69);
			this->button9->TabIndex = 6;
			this->button9->Text = L" ";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(50, 273);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 31);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Turn:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(139, 273);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 39);
			this->label2->TabIndex = 10;
			this->label2->Text = L"X";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(298, 332);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(314, 371);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(314, 371);
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"XO";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

		void checkwin() {
			int flag = 0;
			int win;
			if (button1->Text == "X" && button2->Text == "X" && button3->Text == "X") {
				win = 1;
				flag = 1;
			}
			if (button7->Text == "X" && button8->Text == "X" && button9->Text == "X") {
				win = 1;
				flag = 1;
			}
			if (button4->Text == "X" && button5->Text == "X" && button6->Text == "X") {
				win = 1;
				flag = 1;
			}
			if (button1->Text == "X" && button6->Text == "X" && button9->Text == "X") {
				win = 1;
				flag = 1;
			}
			if (button2->Text == "X" && button5->Text == "X" && button8->Text == "X") {
				win = 1;
				flag = 1;
			}
			if (button7->Text == "X" && button4->Text == "X" && button7->Text == "X") {
				win = 1;
				flag = 1;
			}
			if (button1->Text == "X" && button5->Text == "X" && button7->Text == "X") {
				win = 1;
				flag = 1;
			}
			if (button3->Text == "X" && button5->Text == "X" && button9->Text == "X") {
				win = 1;
				flag = 1;
			}

			if (button1->Text == "O" && button2->Text == "O" && button3->Text == "O") {
				win = 2;
				flag = 1;
			}
			if (button7->Text == "O" && button8->Text == "O" && button9->Text == "O") {
				win = 2;
				flag = 1;
			}
			if (button4->Text == "O" && button5->Text == "O" && button6->Text == "O") {
				win = 2;
				flag = 1;
			}
			if (button1->Text == "O" && button6->Text == "O" && button9->Text == "O") {
				win = 2;
				flag = 1;
			}
			if (button2->Text == "O" && button5->Text == "O" && button8->Text == "O") {
				win = 2;
				flag = 1;
			}
			if (button7->Text == "O" && button4->Text == "O" && button7->Text == "O") {
				win = 2;
				flag = 1;
			}
			if (button1->Text == "O" && button5->Text == "O" && button7->Text == "O") {
				win = 2;
				flag = 1;
			}
			if (button3->Text == "O" && button5->Text == "O" && button9->Text == "O") {
				win = 2;
				flag = 1;
			}
			if (flag == 1) {
				label1->Visible = false;
				label2->Visible = false;
				button1->Enabled = false;
				button2->Enabled = false;
				button3->Enabled = false;
				button4->Enabled = false;
				button5->Enabled = false;
				button6->Enabled = false;
				button7->Enabled = false;
				button8->Enabled = false;
				button9->Enabled = false;
				if (win == 1) {
					MessageBox::Show("X Wins!");
				}
				else if (win == 2){
					MessageBox::Show("O Wins!");
					}
			}

		}


		player * p1 = new player(1);
		int turn;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		turn = p1->getN();
		button1->Enabled = false;
		if (turn == 1) {
			button1->Text = "X";
			p1->setN(2);
			label2->Text = "O";
		}
		else
		{
			button1->Text = "O";
			p1->setN(1);
			label2->Text = "X";


		}
		checkwin();

	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		turn = p1->getN();
		button2->Enabled = false;
		if (turn == 1) {
			button2->Text = "X";
			p1->setN(2);
			label2->Text = "O";
		}
		else
		{
			button2->Text = "O";
			p1->setN(1);
			label2->Text = "X";


		}
		checkwin();
	};
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		turn = p1->getN();
		button3->Enabled = false;
		if (turn == 1) {
			button3->Text = "X";
			p1->setN(2);
			label2->Text = "O";
		}
		else
		{
			button3->Text = "O";
			p1->setN(1);
			label2->Text = "X";


		}
		checkwin();
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		turn = p1->getN();
		button6->Enabled = false;
		if (turn == 1) {
			button6->Text = "X";
			p1->setN(2);
			label2->Text = "O";
		}
		else
		{
			button6->Text = "O";
			p1->setN(1);
			label2->Text = "X";


		}
		checkwin();
	}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	turn = p1->getN();
	button5->Enabled = false;
	if (turn == 1) {
		button5->Text = "X";
		p1->setN(2);
		label2->Text = "O";
	}
	else
	{
		button5->Text = "O";
		p1->setN(1);
		label2->Text = "X";


	}
	checkwin();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	turn = p1->getN();
	button4->Enabled = false;
	if (turn == 1) {
		button4->Text = "X";
		p1->setN(2);
		label2->Text = "O";
	}
	else
	{
		button4->Text = "O";
		p1->setN(1);
		label2->Text = "X";


	}
	checkwin();
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	turn = p1->getN();
	button7->Enabled = false;
	if (turn == 1) {
		button7->Text = "X";
		p1->setN(2);
		label2->Text = "O";
	}
	else
	{
		button7->Text = "O";
		p1->setN(1);
		label2->Text = "X";


	}
	checkwin();
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	turn = p1->getN();
	button9->Enabled = false;
	if (turn == 1) {
		button9->Text = "X";
		p1->setN(2);
		label2->Text = "O";
	}
	else
	{
		button9->Text = "O";
		p1->setN(1);
		label2->Text = "X";


	}
	checkwin();
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	turn = p1->getN();
	button8->Enabled = false;
	if (turn == 1) {
		button8->Text = "X";
		p1->setN(2);
		label2->Text = "O";
	}
	else
	{
		button8->Text = "O";
		p1->setN(1);
		label2->Text = "X";


	}
	checkwin();
}
};
}