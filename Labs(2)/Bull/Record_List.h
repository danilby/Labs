#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "S_Game.h"
#include <iostream>
namespace Bull {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class Record_List : public System::Windows::Forms::Form
	{
	public:
		Record_List(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Record_List()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ listBox1;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(27, 12);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(146, 212);
			this->listBox1->TabIndex = 0;
			// 
			// Record_List
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(201, 247);
			this->Controls->Add(this->listBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"Record_List";
			this->Text = L"Таблица рекордов";
			this->Load += gcnew System::EventHandler(this, &Record_List::Record_List_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void CreateList(FILE* f);
	private: System::Void Record_List_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Feel_List();
	private: System::Void Clear_List();
	};
}
