#pragma once
#include "Circulo.h"
#include "Cuadrado.h"
#include "Triangulo.h"
#include "Rectangulo.h"
#include "Figura.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	private:
	private: System::Windows::Forms::Label^ labelSalida;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownCuadrado;
	private: System::Windows::Forms::Button^ buttonCuadrado;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownLado3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownLado2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownLado1;
	private: System::Windows::Forms::Button^ buttonTriangulo;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownLadoCorto;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownLadoLargo;
	private: System::Windows::Forms::Button^ buttonRectangulo;



		   List<Figura^>^ listaDeFiguras;

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
			this->listaDeFiguras = gcnew System::Collections::Generic::List<Figura^>();
			this->textBoxRadio = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->labelSalida = (gcnew System::Windows::Forms::Label());
			this->numericUpDownCuadrado = (gcnew System::Windows::Forms::NumericUpDown());
			this->buttonCuadrado = (gcnew System::Windows::Forms::Button());
			this->numericUpDownLado3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownLado2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownLado1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->buttonTriangulo = (gcnew System::Windows::Forms::Button());
			this->numericUpDownLadoCorto = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownLadoLargo = (gcnew System::Windows::Forms::NumericUpDown());
			this->buttonRectangulo = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownCuadrado))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownLado3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownLado2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownLado1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownLadoCorto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownLadoLargo))->BeginInit();
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
			this->button1->Size = System::Drawing::Size(90, 37);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Circulo";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// labelSalida
			// 
			this->labelSalida->AutoSize = true;
			this->labelSalida->Location = System::Drawing::Point(45, 248);
			this->labelSalida->Name = L"labelSalida";
			this->labelSalida->Size = System::Drawing::Size(51, 20);
			this->labelSalida->TabIndex = 2;
			this->labelSalida->Text = L"label1";
			this->labelSalida->Click += gcnew System::EventHandler(this, &Form1::labelSalida_Click);
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
			this->buttonCuadrado->Location = System::Drawing::Point(235, 78);
			this->buttonCuadrado->Name = L"buttonCuadrado";
			this->buttonCuadrado->Size = System::Drawing::Size(90, 38);
			this->buttonCuadrado->TabIndex = 4;
			this->buttonCuadrado->Text = L"Cuadrado";
			this->buttonCuadrado->UseVisualStyleBackColor = true;
			this->buttonCuadrado->Click += gcnew System::EventHandler(this, &Form1::buttonCuadrado_Click);
			// 
			// numericUpDownLado3
			// 
			this->numericUpDownLado3->Location = System::Drawing::Point(433, 139);
			this->numericUpDownLado3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
			this->numericUpDownLado3->Name = L"numericUpDownLado3";
			this->numericUpDownLado3->Size = System::Drawing::Size(120, 26);
			this->numericUpDownLado3->TabIndex = 5;
			this->numericUpDownLado3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
			// 
			// numericUpDownLado2
			// 
			this->numericUpDownLado2->Location = System::Drawing::Point(235, 139);
			this->numericUpDownLado2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDownLado2->Name = L"numericUpDownLado2";
			this->numericUpDownLado2->Size = System::Drawing::Size(120, 26);
			this->numericUpDownLado2->TabIndex = 6;
			this->numericUpDownLado2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// numericUpDownLado1
			// 
			this->numericUpDownLado1->Location = System::Drawing::Point(49, 139);
			this->numericUpDownLado1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownLado1->Name = L"numericUpDownLado1";
			this->numericUpDownLado1->Size = System::Drawing::Size(120, 26);
			this->numericUpDownLado1->TabIndex = 7;
			this->numericUpDownLado1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// buttonTriangulo
			// 
			this->buttonTriangulo->Location = System::Drawing::Point(601, 128);
			this->buttonTriangulo->Name = L"buttonTriangulo";
			this->buttonTriangulo->Size = System::Drawing::Size(97, 37);
			this->buttonTriangulo->TabIndex = 8;
			this->buttonTriangulo->Text = L"Triangulo";
			this->buttonTriangulo->UseVisualStyleBackColor = true;
			this->buttonTriangulo->Click += gcnew System::EventHandler(this, &Form1::buttonTriangulo_Click);
			// 
			// numericUpDownLadoCorto
			// 
			this->numericUpDownLadoCorto->Location = System::Drawing::Point(49, 186);
			this->numericUpDownLadoCorto->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownLadoCorto->Name = L"numericUpDownLadoCorto";
			this->numericUpDownLadoCorto->Size = System::Drawing::Size(120, 26);
			this->numericUpDownLadoCorto->TabIndex = 9;
			this->numericUpDownLadoCorto->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDownLadoLargo
			// 
			this->numericUpDownLadoLargo->Location = System::Drawing::Point(235, 186);
			this->numericUpDownLadoLargo->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownLadoLargo->Name = L"numericUpDownLadoLargo";
			this->numericUpDownLadoLargo->Size = System::Drawing::Size(120, 26);
			this->numericUpDownLadoLargo->TabIndex = 10;
			this->numericUpDownLadoLargo->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// buttonRectangulo
			// 
			this->buttonRectangulo->Location = System::Drawing::Point(433, 177);
			this->buttonRectangulo->Name = L"buttonRectangulo";
			this->buttonRectangulo->Size = System::Drawing::Size(139, 35);
			this->buttonRectangulo->TabIndex = 11;
			this->buttonRectangulo->Text = L"Rectangulo";
			this->buttonRectangulo->UseVisualStyleBackColor = true;
			this->buttonRectangulo->Click += gcnew System::EventHandler(this, &Form1::buttonRectangulo_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(959, 300);
			this->Controls->Add(this->buttonRectangulo);
			this->Controls->Add(this->numericUpDownLadoLargo);
			this->Controls->Add(this->numericUpDownLadoCorto);
			this->Controls->Add(this->buttonTriangulo);
			this->Controls->Add(this->numericUpDownLado1);
			this->Controls->Add(this->numericUpDownLado2);
			this->Controls->Add(this->numericUpDownLado3);
			this->Controls->Add(this->buttonCuadrado);
			this->Controls->Add(this->numericUpDownCuadrado);
			this->Controls->Add(this->labelSalida);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBoxRadio);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownCuadrado))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownLado3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownLado2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownLado1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownLadoCorto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownLadoLargo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void MuestraColeccion()
		{
			float superficieTotal = 0;
			float perimetroTotal = 0;
			for each (Figura^ var in this->listaDeFiguras)
			{
				superficieTotal += var->dameSuperficie();
				perimetroTotal += var->damePerimetro();
			}
			String^ TextoSalida = "SuperficieTotal: " + superficieTotal + " Perimetro: " + perimetroTotal;
			this->labelSalida->Text = TextoSalida;


		}
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ texto = textBoxRadio->Text;
		int oper1 = Convert::ToInt32(texto);
		Circulo^ MiCirculo = gcnew Circulo(oper1, 2, -100);
		this->listaDeFiguras->Add(MiCirculo);
		this->MuestraColeccion();
	}
	private: System::Void buttonCuadrado_Click(System::Object^ sender, System::EventArgs^ e) {
		int oper1 = (int)this->numericUpDownCuadrado->Value;
		Cuadrado^ MiCuadrado = gcnew Cuadrado(oper1, 2, -100);
		this->listaDeFiguras->Add(MiCuadrado);
		this->MuestraColeccion();
	}
	private: System::Void buttonTriangulo_Click(System::Object^ sender, System::EventArgs^ e) {
	int lado1 = (int)this->numericUpDownLado1->Value;
	int lado2 = (int)this->numericUpDownLado2->Value;
	int lado3 = (int)this->numericUpDownLado3->Value;
	Triangulo^ MiTriangulo = gcnew Triangulo(lado1,lado2,lado3, 2, -100);
	this->listaDeFiguras->Add(MiTriangulo);
	this->MuestraColeccion();
}
private: System::Void labelSalida_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttonRectangulo_Click(System::Object^ sender, System::EventArgs^ e) {
	int ladoCorto = (int)this->numericUpDownLadoCorto->Value;
	int ladoLargo = (int)this->numericUpDownLadoLargo->Value;
	Rectangulo^ MiRectangulo = gcnew Rectangulo(ladoCorto, ladoLargo, 2, -100);
	this->listaDeFiguras->Add(MiRectangulo);
	this->MuestraColeccion();
}
};
}
