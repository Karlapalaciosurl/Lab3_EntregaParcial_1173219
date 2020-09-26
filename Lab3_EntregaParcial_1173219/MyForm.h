#pragma once
#include "clase.h"

namespace Lab3EntregaParcial1173219 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;



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
	private: System::Windows::Forms::Button^ btnjugar;
	protected:

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
			this->btnjugar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnjugar
			// 
			this->btnjugar->Location = System::Drawing::Point(72, 184);
			this->btnjugar->Name = L"btnjugar";
			this->btnjugar->Size = System::Drawing::Size(75, 23);
			this->btnjugar->TabIndex = 0;
			this->btnjugar->Text = L"Jugar";
			this->btnjugar->UseVisualStyleBackColor = true;
			this->btnjugar->Click += gcnew System::EventHandler(this, &MyForm::btnjugar_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->btnjugar);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnjugar_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   
	};
}
