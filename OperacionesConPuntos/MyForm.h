#pragma once
#define _MATH_DEFINES
#include <stdlib.h>
#include <math.h>
#include "Punto.h"

namespace OperacionesConPuntos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button3;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::TextBox^  textBox22;
	private: System::Windows::Forms::TextBox^  textBox23;
	private: System::Windows::Forms::TextBox^  textBox24;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TabPage^  tabPage1;













	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;

	protected:






	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage4->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(221, 214);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(88, 31);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Salir";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->label16);
			this->tabPage4->Controls->Add(this->label17);
			this->tabPage4->Controls->Add(this->label18);
			this->tabPage4->Controls->Add(this->label19);
			this->tabPage4->Controls->Add(this->label20);
			this->tabPage4->Controls->Add(this->button8);
			this->tabPage4->Controls->Add(this->button9);
			this->tabPage4->Controls->Add(this->textBox20);
			this->tabPage4->Controls->Add(this->textBox21);
			this->tabPage4->Controls->Add(this->textBox22);
			this->tabPage4->Controls->Add(this->textBox23);
			this->tabPage4->Controls->Add(this->textBox24);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(308, 182);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Pendiente";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(26, 99);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(14, 13);
			this->label16->TabIndex = 25;
			this->label16->Text = L"C";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(26, 69);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(14, 13);
			this->label17->TabIndex = 24;
			this->label17->Text = L"B";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(26, 43);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(14, 13);
			this->label18->TabIndex = 23;
			this->label18->Text = L"A";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(229, 24);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(14, 13);
			this->label19->TabIndex = 22;
			this->label19->Text = L"Y";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(115, 24);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(14, 13);
			this->label20->TabIndex = 21;
			this->label20->Text = L"X";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(67, 136);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(100, 23);
			this->button8->TabIndex = 20;
			this->button8->Text = L"Calcula";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(183, 136);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(100, 23);
			this->button9->TabIndex = 19;
			this->button9->Text = L"Limpìa";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(67, 40);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(100, 20);
			this->textBox20->TabIndex = 17;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(183, 40);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(100, 20);
			this->textBox21->TabIndex = 16;
			this->textBox21->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox21_TextChanged);
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(67, 73);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(100, 20);
			this->textBox22->TabIndex = 15;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(183, 73);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(100, 20);
			this->textBox23->TabIndex = 14;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(67, 99);
			this->textBox24->Name = L"textBox24";
			this->textBox24->ReadOnly = true;
			this->textBox24->Size = System::Drawing::Size(216, 20);
			this->textBox24->TabIndex = 13;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label11);
			this->tabPage3->Controls->Add(this->label12);
			this->tabPage3->Controls->Add(this->label13);
			this->tabPage3->Controls->Add(this->label14);
			this->tabPage3->Controls->Add(this->label15);
			this->tabPage3->Controls->Add(this->button6);
			this->tabPage3->Controls->Add(this->button7);
			this->tabPage3->Controls->Add(this->textBox14);
			this->tabPage3->Controls->Add(this->textBox15);
			this->tabPage3->Controls->Add(this->textBox16);
			this->tabPage3->Controls->Add(this->textBox17);
			this->tabPage3->Controls->Add(this->textBox18);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(308, 182);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Distancia";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(26, 99);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(14, 13);
			this->label11->TabIndex = 25;
			this->label11->Text = L"C";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(26, 69);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(14, 13);
			this->label12->TabIndex = 24;
			this->label12->Text = L"B";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(26, 43);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(14, 13);
			this->label13->TabIndex = 23;
			this->label13->Text = L"A";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(229, 24);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(14, 13);
			this->label14->TabIndex = 22;
			this->label14->Text = L"Y";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(115, 24);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(14, 13);
			this->label15->TabIndex = 21;
			this->label15->Text = L"X";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(67, 135);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 23);
			this->button6->TabIndex = 20;
			this->button6->Text = L"Calcula";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(183, 135);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 23);
			this->button7->TabIndex = 19;
			this->button7->Text = L"Limpia";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(67, 40);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(100, 20);
			this->textBox14->TabIndex = 17;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(183, 40);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(100, 20);
			this->textBox15->TabIndex = 16;
			this->textBox15->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox15_TextChanged);
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(67, 73);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(100, 20);
			this->textBox16->TabIndex = 15;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(183, 73);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(100, 20);
			this->textBox17->TabIndex = 14;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(67, 99);
			this->textBox18->Name = L"textBox18";
			this->textBox18->ReadOnly = true;
			this->textBox18->Size = System::Drawing::Size(216, 20);
			this->textBox18->TabIndex = 13;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->textBox7);
			this->tabPage2->Controls->Add(this->textBox8);
			this->tabPage2->Controls->Add(this->textBox9);
			this->tabPage2->Controls->Add(this->textBox10);
			this->tabPage2->Controls->Add(this->textBox11);
			this->tabPage2->Controls->Add(this->textBox12);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(308, 182);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Resta";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(26, 99);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(14, 13);
			this->label6->TabIndex = 25;
			this->label6->Text = L"C";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(26, 69);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(14, 13);
			this->label7->TabIndex = 24;
			this->label7->Text = L"B";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(26, 43);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(14, 13);
			this->label8->TabIndex = 23;
			this->label8->Text = L"A";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(229, 24);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(14, 13);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Y";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(115, 24);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(14, 13);
			this->label10->TabIndex = 21;
			this->label10->Text = L"X";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(67, 135);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 23);
			this->button4->TabIndex = 20;
			this->button4->Text = L"Resta";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(183, 135);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 23);
			this->button5->TabIndex = 19;
			this->button5->Text = L"Limpia";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(67, 40);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 18;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(183, 40);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 17;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(67, 66);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 16;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(183, 66);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 15;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(67, 92);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 20);
			this->textBox11->TabIndex = 14;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(183, 92);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 20);
			this->textBox12->TabIndex = 13;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->textBox6);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(308, 182);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Suma";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 99);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(14, 13);
			this->label1->TabIndex = 38;
			this->label1->Text = L"C";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(26, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(14, 13);
			this->label2->TabIndex = 37;
			this->label2->Text = L"B";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(183, 133);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 23);
			this->button2->TabIndex = 32;
			this->button2->Text = L"Limpia";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(26, 43);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(14, 13);
			this->label3->TabIndex = 36;
			this->label3->Text = L"A";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(229, 24);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(14, 13);
			this->label4->TabIndex = 35;
			this->label4->Text = L"Y";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(115, 24);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(14, 13);
			this->label5->TabIndex = 34;
			this->label5->Text = L"X";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(67, 133);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 23);
			this->button1->TabIndex = 33;
			this->button1->Text = L"Suma";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(67, 40);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 31;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(183, 40);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 30;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(67, 66);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 29;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(183, 66);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 28;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(67, 92);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 27;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(183, 92);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 26;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(316, 208);
			this->tabControl1->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(321, 257);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Operaciones";
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox1->Text = "";
	this->textBox2->Text = "";
	this->textBox3->Text = "";
	this->textBox4->Text = "";
	this->textBox5->Text = "";
	this->textBox6->Text = "";
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	exit(0);
}
private: System::Void textBox15_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox21_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox1->Text = "";
	this->textBox2->Text = "";
	this->textBox3->Text = "";
	this->textBox4->Text = "";
	this->textBox5->Text = "";
	this->textBox6->Text = "";
}
};
}
