#pragma once
#include "MyMenu.h"
#include "Game.h"
namespace Bull {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class DifficultForm : public System::Windows::Forms::Form
	{
	public:
		DifficultForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~DifficultForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_eazy;
	private: System::Windows::Forms::Button^ button_medium;
	private: System::Windows::Forms::Button^ button_hard;
	protected:

	protected:


	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ èãğàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âåğíóòüñÿÂÃëàâíîåÌåíşToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûéòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñïğàâêàToolStripMenuItem;

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DifficultForm::typeid));
			this->button_eazy = (gcnew System::Windows::Forms::Button());
			this->button_medium = (gcnew System::Windows::Forms::Button());
			this->button_hard = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->èãğàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âåğíóòüñÿÂÃëàâíîåÌåíşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûéòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñïğàâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button_eazy
			// 
			this->button_eazy->AutoEllipsis = true;
			this->button_eazy->BackColor = System::Drawing::Color::Lime;
			this->button_eazy->Location = System::Drawing::Point(61, 40);
			this->button_eazy->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button_eazy->Name = L"button_eazy";
			this->button_eazy->Size = System::Drawing::Size(109, 34);
			this->button_eazy->TabIndex = 0;
			this->button_eazy->Text = L"Ëåãêàÿ ";
			this->button_eazy->UseVisualStyleBackColor = false;
			this->button_eazy->Click += gcnew System::EventHandler(this, &DifficultForm::button_eazy_Click);
			// 
			// button_medium
			// 
			this->button_medium->BackColor = System::Drawing::Color::Yellow;
			this->button_medium->Location = System::Drawing::Point(61, 88);
			this->button_medium->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button_medium->Name = L"button_medium";
			this->button_medium->Size = System::Drawing::Size(109, 34);
			this->button_medium->TabIndex = 1;
			this->button_medium->Text = L"Ñğåäíÿÿ";
			this->button_medium->UseVisualStyleBackColor = false;
			this->button_medium->Click += gcnew System::EventHandler(this, &DifficultForm::button_medium_Click);
			// 
			// button_hard
			// 
			this->button_hard->BackColor = System::Drawing::Color::Red;
			this->button_hard->Location = System::Drawing::Point(61, 137);
			this->button_hard->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button_hard->Name = L"button_hard";
			this->button_hard->Size = System::Drawing::Size(109, 34);
			this->button_hard->TabIndex = 2;
			this->button_hard->Text = L"Ñëîæíàÿ";
			this->button_hard->UseVisualStyleBackColor = false;
			this->button_hard->Click += gcnew System::EventHandler(this, &DifficultForm::button_hard_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"menuStrip1.BackgroundImage")));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->èãğàToolStripMenuItem,
					this->ñïğàâêàToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(224, 30);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// èãğàToolStripMenuItem
			// 
			this->èãğàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->âåğíóòüñÿÂÃëàâíîåÌåíşToolStripMenuItem,
					this->âûéòèToolStripMenuItem
			});
			this->èãğàToolStripMenuItem->Name = L"èãğàToolStripMenuItem";
			this->èãğàToolStripMenuItem->Size = System::Drawing::Size(57, 26);
			this->èãğàToolStripMenuItem->Text = L"Èãğà";
			// 
			// âåğíóòüñÿÂÃëàâíîåÌåíşToolStripMenuItem
			// 
			this->âåğíóòüñÿÂÃëàâíîåÌåíşToolStripMenuItem->Name = L"âåğíóòüñÿÂÃëàâíîåÌåíşToolStripMenuItem";
			this->âåğíóòüñÿÂÃëàâíîåÌåíşToolStripMenuItem->Size = System::Drawing::Size(279, 26);
			this->âåğíóòüñÿÂÃëàâíîåÌåíşToolStripMenuItem->Text = L"Âåğíóòüñÿ â ãëàâíîå ìåíş";
			this->âåğíóòüñÿÂÃëàâíîåÌåíşToolStripMenuItem->Click += gcnew System::EventHandler(this, &DifficultForm::âåğíóòüñÿÂÃëàâíîåÌåíşToolStripMenuItem_Click);
			// 
			// âûéòèToolStripMenuItem
			// 
			this->âûéòèToolStripMenuItem->Name = L"âûéòèToolStripMenuItem";
			this->âûéòèToolStripMenuItem->Size = System::Drawing::Size(279, 26);
			this->âûéòèToolStripMenuItem->Text = L"Âûéòè";
			this->âûéòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &DifficultForm::âûéòèToolStripMenuItem_Click);
			// 
			// ñïğàâêàToolStripMenuItem
			// 
			this->ñïğàâêàToolStripMenuItem->Name = L"ñïğàâêàToolStripMenuItem";
			this->ñïğàâêàToolStripMenuItem->Size = System::Drawing::Size(81, 26);
			this->ñïğàâêàToolStripMenuItem->Text = L"Ñïğàâêà";
			this->ñïğàâêàToolStripMenuItem->Click += gcnew System::EventHandler(this, &DifficultForm::ñïğàâêàToolStripMenuItem_Click);
			// 
			// DifficultForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(224, 187);
			this->Controls->Add(this->button_hard);
			this->Controls->Add(this->button_medium);
			this->Controls->Add(this->button_eazy);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->Name = L"DifficultForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Âûáîğ ñëîæíîñòè";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_eazy_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void âûéòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void âåğíóòüñÿÂÃëàâíîåÌåíşToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ñïğàâêàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_medium_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_hard_Click(System::Object^ sender, System::EventArgs^ e);
};
}