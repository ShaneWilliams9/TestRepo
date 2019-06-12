#pragma once
#include <stdio.h>
#include <sstream>
#include <cmath>
namespace Assignment6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	const double PI = 3.14159265;

	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
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
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(113, 195);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"0";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::Button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(32, 65);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"1";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::Button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(113, 65);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"2";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::Button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(194, 65);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"3";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm2::Button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(32, 109);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 4;
			this->button5->Text = L"4";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm2::Button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(113, 109);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 5;
			this->button6->Text = L"5";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm2::Button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(193, 109);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 6;
			this->button7->Text = L"6";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm2::Button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(32, 155);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 7;
			this->button8->Text = L"7";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm2::Button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(113, 155);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 8;
			this->button9->Text = L"8";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm2::Button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(194, 155);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 9;
			this->button10->Text = L"9";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm2::Button10_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(113, 13);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(155, 20);
			this->textBox1->TabIndex = 10;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm2::TextBox1_TextChanged);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(45, 248);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(50, 21);
			this->button11->TabIndex = 11;
			this->button11->Text = L"SIN";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm2::Button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(101, 247);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(45, 22);
			this->button12->TabIndex = 12;
			this->button12->Text = L"COS";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm2::Button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(203, 246);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(72, 23);
			this->button13->TabIndex = 13;
			this->button13->Text = L"POWER2";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm2::Button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(152, 245);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(45, 24);
			this->button14->TabIndex = 14;
			this->button14->Text = L"INV";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm2::Button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(113, 281);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 23);
			this->button15->TabIndex = 15;
			this->button15->Text = L"CLEAR";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm2::Button15_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(303, 316);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm2";
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

// "0" Button
private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("0");
}

// "1" Button
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("1");
}

// "2" Button
private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("2");
}
			
// "3" Button
private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("3");
}

// "4" Button
private: System::Void Button5_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("4");
}

// "5" Button
private: System::Void Button6_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("5");
}

// "6" Button
private: System::Void Button7_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("6");
}

// "7" Button
private: System::Void Button8_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("7");
}

// "8" Button
private: System::Void Button9_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("8");
}

// "9" Button
private: System::Void Button10_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("9");
}

// Clear Button
private: System::Void Button15_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Clear();
}
private: System::Void TextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

// SIN Button
private: System::Void Button11_Click(System::Object^ sender, System::EventArgs^ e) {
	double num = Convert::ToInt32(textBox1->Text);
	double result = sin(num * PI / 180.0);
	textBox1->Clear();
	textBox1->AppendText(result.ToString());
}	

// COS Button
private: System::Void Button12_Click(System::Object^ sender, System::EventArgs^ e) {
	double num = Convert::ToInt32(textBox1->Text);
	double result = cos(num * PI / 180.0);
	textBox1->Clear();
	textBox1->AppendText(result.ToString());
}

// INV Button
private: System::Void Button14_Click(System::Object^ sender, System::EventArgs^ e) {
	int num = Convert::ToInt32(textBox1->Text);

}

// POWER2 Button
private: System::Void Button13_Click(System::Object^ sender, System::EventArgs^ e) {
	double num = Convert::ToInt32(textBox1->Text);
	double result = num * num;
	textBox1->Clear();
	textBox1->AppendText(result.ToString());
}
};
}
