#pragma once
#include "DifficultForm.h"
#include "Record_List.h"
namespace Bull {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyMenu
	/// </summary>
	public ref class MyMenu : public System::Windows::Forms::Form
	{
	public:
		MyMenu(void)
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
		~MyMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ïàğàìåòğûToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îÏğîãğàììåToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ ñïğàâêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ íà÷àòüToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ âûéòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ òàáëèöàĞåêîğäîâToolStripMenuItem;

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyMenu::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ïàğàìåòğûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íà÷àòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûéòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñïğàâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->òàáëèöàĞåêîğäîâToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îÏğîãğàììåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::Info;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ïàğàìåòğûToolStripMenuItem,
					this->ñïğàâêàToolStripMenuItem, this->òàáëèöàĞåêîğäîâToolStripMenuItem, this->îÏğîãğàììåToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(680, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ïàğàìåòğûToolStripMenuItem
			// 
			this->ïàğàìåòğûToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->íà÷àòüToolStripMenuItem,
					this->âûéòèToolStripMenuItem
			});
			this->ïàğàìåòğûToolStripMenuItem->Name = L"ïàğàìåòğûToolStripMenuItem";
			this->ïàğàìåòğûToolStripMenuItem->Size = System::Drawing::Size(57, 24);
			this->ïàğàìåòğûToolStripMenuItem->Text = L"Èãğà";
			// 
			// íà÷àòüToolStripMenuItem
			// 
			this->íà÷àòüToolStripMenuItem->Name = L"íà÷àòüToolStripMenuItem";
			this->íà÷àòüToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->íà÷àòüToolStripMenuItem->Text = L"Íà÷àòü èãğó";
			this->íà÷àòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyMenu::íà÷àòüToolStripMenuItem_Click);
			// 
			// âûéòèToolStripMenuItem
			// 
			this->âûéòèToolStripMenuItem->Name = L"âûéòèToolStripMenuItem";
			this->âûéòèToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->âûéòèToolStripMenuItem->Text = L"Âûéòè";
			this->âûéòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyMenu::âûéòèToolStripMenuItem_Click);
			// 
			// ñïğàâêàToolStripMenuItem
			// 
			this->ñïğàâêàToolStripMenuItem->Name = L"ñïğàâêàToolStripMenuItem";
			this->ñïğàâêàToolStripMenuItem->Size = System::Drawing::Size(81, 24);
			this->ñïğàâêàToolStripMenuItem->Text = L"Ñïğàâêà";
			this->ñïğàâêàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyMenu::ñïğàâêàToolStripMenuItem_Click);
			// 
			// òàáëèöàĞåêîğäîâToolStripMenuItem
			// 
			this->òàáëèöàĞåêîğäîâToolStripMenuItem->Name = L"òàáëèöàĞåêîğäîâToolStripMenuItem";
			this->òàáëèöàĞåêîğäîâToolStripMenuItem->Size = System::Drawing::Size(157, 24);
			this->òàáëèöàĞåêîğäîâToolStripMenuItem->Text = L" Òàáëèöà ğåêîğäîâ";
			this->òàáëèöàĞåêîğäîâToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyMenu::òàáëèöàĞåêîğäîâToolStripMenuItem_Click);
			// 
			// îÏğîãğàììåToolStripMenuItem
			// 
			this->îÏğîãğàììåToolStripMenuItem->Name = L"îÏğîãğàììåToolStripMenuItem";
			this->îÏğîãğàììåToolStripMenuItem->Size = System::Drawing::Size(118, 24);
			this->îÏğîãğàììåToolStripMenuItem->Text = L"Î ïğîãğàììå";
			this->îÏğîãğàììåToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyMenu::îÏğîãğàììåToolStripMenuItem_Click);
			// 
			// MyMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(680, 297);
			this->Controls->Add(this->menuStrip1);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(698, 344);
			this->MinimumSize = System::Drawing::Size(698, 344);
			this->Name = L"MyMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Áûêè è êîğîâû";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void îÏğîãğàììåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ñïğàâêàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void âûéòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void íà÷àòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void òàáëèöàĞåêîğäîâToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}