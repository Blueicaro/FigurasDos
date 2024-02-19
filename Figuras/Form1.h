#pragma once
#include "Circulo.h"
#include "Cuadrado.h"

namespace CppCLRWinFormsProject {

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
	private:
		float superficieTotal = 0;
	private: System::Windows::Forms::Label^ labelSalida;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownCuadrado;
	private: System::Windows::Forms::Button^ buttonCuadrado;
		   float perimetroTotal = 0;
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
	private: System::Windows::Forms::TextBox^ textBoxRadio;
	private: System::Windows::Forms::Button^ button1;
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
			this->textBoxRadio = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->labelSalida = (gcnew System::Windows::Forms::Label());
			this->numericUpDownCuadrado = (gcnew System::Windows::Forms::NumericUpDown());
			this->buttonCuadrado = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownCuadrado))->BeginInit();
			this->SuspendLayout();
			// 
			// textBoxRadio
			// 
			this->textBoxRadio->Location = System::Drawing::Point(49, 30);
			this->textBoxRadio->Name = L"textBoxRadio";
			this->textBoxRadio->Size = System::Drawing::Size(160, 26);
			this->textBoxRadio->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(235, 30);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Circulo";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// labelSalida
			// 
			this->labelSalida->AutoSize = true;
			this->labelSalida->Location = System::Drawing::Point(26, 255);
			this->labelSalida->Name = L"labelSalida";
			this->labelSalida->Size = System::Drawing::Size(51, 20);
			this->labelSalida->TabIndex = 2;
			this->labelSalida->Text = L"label1";
			// 
			// numericUpDownCuadrado
			// 
			this->numericUpDownCuadrado->Location = System::Drawing::Point(49, 85);
			this->numericUpDownCuadrado->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownCuadrado->Name = L"numericUpDownCuadrado";
			this->numericUpDownCuadrado->Size = System::Drawing::Size(120, 26);
			this->numericUpDownCuadrado->TabIndex = 3;
			this->numericUpDownCuadrado->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// buttonCuadrado
			// 
			this->buttonCuadrado->Location = System::Drawing::Point(235, 85);
			this->buttonCuadrado->Name = L"buttonCuadrado";
			this->buttonCuadrado->Size = System::Drawing::Size(75, 23);
			this->buttonCuadrado->TabIndex = 4;
			this->buttonCuadrado->Text = L"Cuadrado";
			this->buttonCuadrado->UseVisualStyleBackColor = true;
			this->buttonCuadrado->Click += gcnew System::EventHandler(this, &Form1::buttonCuadrado_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(959, 300);
			this->Controls->Add(this->buttonCuadrado);
			this->Controls->Add(this->numericUpDownCuadrado);
			this->Controls->Add(this->labelSalida);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBoxRadio);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownCuadrado))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ texto = textBoxRadio->Text;
		int oper1 = Convert::ToInt32(texto);
		Circulo^ MiCirculo = gcnew Circulo(oper1, 2, -100);
		this->superficieTotal += MiCirculo->dameSuperficie();
		this->perimetroTotal += MiCirculo->damePerimetro();
		String^ TextoSalida = "SuperficieTotal: " + this->superficieTotal + " Perimetro: " + this->perimetroTotal;
		this->labelSalida->Text = TextoSalida;
	}
	private: System::Void buttonCuadrado_Click(System::Object^ sender, System::EventArgs^ e) {
		int oper1 = (int)this->numericUpDownCuadrado->Value;
		Cuadrado^ MiCuadrado = gcnew Cuadrado(oper1, 2, -100);
		this->superficieTotal += MiCuadrado->dameSuperficie();
		this->perimetroTotal += MiCuadrado->damePerimetro();
		String^ TextoSalida = "SuperficieTotal: " + this->superficieTotal + " Perimetro: " + this->perimetroTotal;
		this->labelSalida->Text = TextoSalida;
	}
};
}
