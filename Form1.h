#pragma once

#include "MyForm2.h"

double chips = 0;
double chips_amount = 0;
double choclate = 0;
double choclate_amount = 0;
double candy = 0;
double candy_amount = 0;
double drink = 0;
double drink_amount = 0;
double total = 0;
double bill = 0;
using namespace CppCLR_WinFormsProject1;
namespace CppCLRWinFormsProject 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;





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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(141, 129);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(28, 22);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"20";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(235, 128);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(28, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(36, 132);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 17);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Chips";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(407, 132);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(14, 16);
			this->label2->TabIndex = 8;
			this->label2->Text = L"0";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(269, 129);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(28, 22);
			this->textBox2->TabIndex = 9;
			this->textBox2->Text = L"0";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(304, 128);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(28, 23);
			this->button2->TabIndex = 11;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::chip_ded);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(304, 203);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(28, 23);
			this->button3->TabIndex = 17;
			this->button3->Text = L"-";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(269, 204);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(28, 22);
			this->textBox3->TabIndex = 16;
			this->textBox3->Text = L"0";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(407, 207);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(14, 16);
			this->label3->TabIndex = 15;
			this->label3->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(36, 207);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 17);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Candy";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(235, 203);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(28, 23);
			this->button4->TabIndex = 13;
			this->button4->Text = L"+";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(141, 204);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(28, 22);
			this->textBox4->TabIndex = 12;
			this->textBox4->Text = L"10";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(304, 275);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(28, 23);
			this->button5->TabIndex = 23;
			this->button5->Text = L"-";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(269, 276);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(28, 22);
			this->textBox5->TabIndex = 22;
			this->textBox5->Text = L"0";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(407, 279);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(14, 16);
			this->label5->TabIndex = 21;
			this->label5->Text = L"0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(36, 279);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 17);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Choclate";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(235, 275);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(28, 23);
			this->button6->TabIndex = 19;
			this->button6->Text = L"+";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(141, 276);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(28, 22);
			this->textBox6->TabIndex = 18;
			this->textBox6->Text = L"50";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(304, 346);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(28, 23);
			this->button7->TabIndex = 29;
			this->button7->Text = L"-";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(269, 347);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(28, 22);
			this->textBox7->TabIndex = 28;
			this->textBox7->Text = L"0";
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(407, 350);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(14, 16);
			this->label7->TabIndex = 27;
			this->label7->Text = L"0";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(36, 350);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(41, 17);
			this->label8->TabIndex = 26;
			this->label8->Text = L"Drink";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(235, 346);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(28, 23);
			this->button8->TabIndex = 25;
			this->button8->Text = L"+";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(141, 347);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(28, 22);
			this->textBox8->TabIndex = 24;
			this->textBox8->Text = L"40";
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(40, 475);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(79, 17);
			this->label9->TabIndex = 30;
			this->label9->Text = L"No of Items";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(40, 527);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(55, 17);
			this->label10->TabIndex = 32;
			this->label10->Text = L"Amount";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(156, 475);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(14, 16);
			this->label11->TabIndex = 33;
			this->label11->Text = L"0";
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(39, 435);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 34;
			this->button9->Text = L"Total";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(156, 527);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(14, 16);
			this->label12->TabIndex = 35;
			this->label12->Text = L"0";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(118, 21);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(245, 35);
			this->label13->TabIndex = 36;
			this->label13->Text = L"Vanding Machine";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(395, 89);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(51, 22);
			this->label14->TabIndex = 37;
			this->label14->Text = L"Total";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(244, 89);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(86, 22);
			this->label15->TabIndex = 38;
			this->label15->Text = L"Add item";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(138, 89);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(84, 22);
			this->label16->TabIndex = 39;
			this->label16->Text = L"Price (Rs)";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(31, 89);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(54, 22);
			this->label17->TabIndex = 40;
			this->label17->Text = L"Items";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(36, 416);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(116, 15);
			this->label18->TabIndex = 41;
			this->label18->Text = L"Press total to get bill";
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(235, 520);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(91, 23);
			this->button10->TabIndex = 42;
			this->button10->Text = L"Reset";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(235, 435);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(91, 51);
			this->button11->TabIndex = 43;
			this->button11->Text = L"Generate recipt";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(43, 167);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(71, 26);
			this->button12->TabIndex = 44;
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(466, 576);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->MinimumSize = System::Drawing::Size(484, 623);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//chips++
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	chips++;
	textBox2->Text = System::Convert::ToString(chips);
	chips_amount = System::Convert::ToInt16(textBox1->Text) * System::Convert::ToInt16(textBox2->Text);
	label2->Text = System::Convert::ToString(chips_amount);
}

	   //chips--
private: System::Void chip_ded(System::Object^ sender, System::EventArgs^ e) {
	if (chips > 0)
	{
		chips--;
		textBox2->Text = System::Convert::ToString(chips);
		chips_amount = System::Convert::ToInt16(label2->Text) - System::Convert::ToInt16(textBox1->Text);
		label2->Text = System::Convert::ToString(chips_amount);
	}
}
	   //candy++
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	candy++;
	textBox3->Text = System::Convert::ToString(candy);
	candy_amount = System::Convert::ToInt16(textBox3->Text) * System::Convert::ToInt16(textBox4->Text);
	label3->Text = System::Convert::ToString(candy_amount);
}

	   //candy--
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (candy > 0)
	{
		candy--;
		textBox3->Text = System::Convert::ToString(candy);
		candy_amount = System::Convert::ToInt16(label3->Text) - System::Convert::ToInt16(textBox4->Text);
		label3->Text = System::Convert::ToString(candy_amount);
	}
}

	   //choclate++
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	choclate++;
	textBox5->Text = System::Convert::ToString(choclate);
	choclate_amount = System::Convert::ToInt16(textBox5->Text) * System::Convert::ToInt16(textBox6->Text);
	label5->Text = System::Convert::ToString(choclate_amount);

}
	   //choclate--
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (choclate > 0)
	{
		choclate--;
		textBox5->Text = System::Convert::ToString(choclate);
		choclate_amount = System::Convert::ToInt16(label5->Text) - System::Convert::ToInt16(textBox6->Text);
		label5->Text = System::Convert::ToString(choclate_amount);
	}
}

	   //drink++

private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	drink++;
	textBox7->Text = System::Convert::ToString(drink);
	drink_amount = System::Convert::ToInt16(textBox7->Text) * System::Convert::ToInt16(textBox8->Text);
	label7->Text = System::Convert::ToString(drink_amount);
}
	   //drink--

private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (drink > 0)
	{
		drink--;
		textBox7->Text = System::Convert::ToString(drink);
		drink_amount = System::Convert::ToInt16(label7->Text) - System::Convert::ToInt16(textBox8->Text);
		label7->Text = System::Convert::ToString(drink_amount);
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	total = System::Convert::ToInt16(textBox2->Text) + System::Convert::ToInt16(textBox3->Text) +
		System::Convert::ToInt16(textBox5->Text) + System::Convert::ToInt16(textBox7->Text);
	label11->Text = System::Convert::ToString(total);
	bill= System::Convert::ToInt16(label2->Text) + System::Convert::ToInt16(label3->Text) +
		System::Convert::ToInt16(label5->Text) + System::Convert::ToInt16(label7->Text);
	label12->Text = System::Convert::ToString(bill) + " Rs";
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {

	label11->Text = System::Convert::ToString(0);
	label12->Text = System::Convert::ToString(0) + " Rs";
	textBox2->Text = System::Convert::ToString(0);
	textBox3->Text = System::Convert::ToString(0);
	textBox5->Text = System::Convert::ToString(0);
	textBox7->Text = System::Convert::ToString(0);
	label2->Text = System::Convert::ToString(0);
	label3->Text = System::Convert::ToString(0);
	label5->Text = System::Convert::ToString(0);
	label7->Text = System::Convert::ToString(0);
	chips = 0;
	chips_amount = 0;
	choclate = 0;
	choclate_amount = 0;
	candy = 0;
	candy_amount = 0;
	drink = 0;
	drink_amount = 0;
	total = 0;
	bill = 0;
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm2^ f = gcnew MyForm2(label1->Text, label4->Text, label6->Text, label8->Text, textBox2->Text,
		textBox3->Text, textBox5->Text, textBox7->Text, label2->Text, label3->Text, label5->Text,
		label7->Text, label11->Text, label12->Text);
	f->Show();

}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
