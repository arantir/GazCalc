#pragma once

namespace Sample {

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
	private: System::Windows::Forms::TextBox^  textBox1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(149, 47);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(149, 124);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox2_KeyPress);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(161, 194);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Посчитать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(99, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Литров";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 127);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(126, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Стоимость за литр(руб)";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(39, 194);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Выход";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(274, 242);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->MaximumSize = System::Drawing::Size(290, 280);
			this->MinimumSize = System::Drawing::Size(290, 280);
			this->Name = L"Form1";
			this->Text = L"Бензиновый калькулятор";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if ((e->KeyChar>='0')&&(e->KeyChar<='9'))
				 {
					 return;
				 }
				 if (e->KeyChar=='.')
				 {
				   e->KeyChar=',';
				 }
				 if (e->KeyChar==',')
				 {
					 if ( textBox1->Text->IndexOf(',') != -1 )
					 {
						 e->Handled=true;
					 }
					 return;
				 }
				 if (Char::IsControl(e->KeyChar))
				 {
					 if (e->KeyChar==(char)Keys::Enter)
						 button1->Focus();
					 return;
				 }
				 else
					 e->Handled = true;
			 }
private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if ((e->KeyChar>='0')&&(e->KeyChar<='9'))
				 {
					 return;
				 }
				 if (e->KeyChar=='.')
				 {
				   e->KeyChar=',';
				 }
				 if (e->KeyChar==',')
				 {
					 if ( textBox2->Text->IndexOf(',') != -1 )
					 {
						 e->Handled=true;
					 }
					 return;
				 }
				 if (Char::IsControl(e->KeyChar))
				 {
					 if (e->KeyChar==(char)Keys::Enter)
						 button1->Focus();
					 return;
				 }
				 else
					 e->Handled = true;
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Итоговая стоимость: " + Convert::ToString(Convert::ToDouble(textBox1->Text)*Convert::ToDouble(textBox2->Text)) + "р");
		 }
};
}

