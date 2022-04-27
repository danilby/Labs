#pragma once
#include "DifficultForm.h"
#include "PlayBull.h"
#include <iomanip>
#include <string>
#include "WinForm.h"
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
	public ref class Game : public System::Windows::Forms::Form
	{
	public:
		Game(void)
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
		~Game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button0;
	private: System::Windows::Forms::Button^ InputButton;
	private: System::Windows::Forms::Button^ ResetButton;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::ListBox^ listBox1;
	private:

	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ èãğàToolStripMenuItem;

	private: System::Windows::Forms::Label^ Debug_Label;
	private: System::Windows::Forms::TextBox^ Debut_player_text;
	private: System::Windows::Forms::TextBox^ Debug_bot_text;


	private: System::Windows::Forms::Label^ Player_num_debug;
	private: System::Windows::Forms::Label^ Bot_Number;
	private: System::Windows::Forms::ToolStripMenuItem^ èçìåíèòüÑëîæíîñòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûéòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïàğàìåòğûToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ íà÷àòüÑíà÷àëàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âêëş÷èòü0ÂÈãğóToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïîìîùüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âêëş÷èòüÌóçûêóToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ íî÷íàÿÒåìàToolStripMenuItem;
	private: System::Windows::Forms::Button^ buttonX;







	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Game::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->InputButton = (gcnew System::Windows::Forms::Button());
			this->ResetButton = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->èãğàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íà÷àòüÑíà÷àëàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->èçìåíèòüÑëîæíîñòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûéòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïàğàìåòğûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âêëş÷èòü0ÂÈãğóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âêëş÷èòüÌóçûêóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íî÷íàÿÒåìàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîìîùüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Debug_Label = (gcnew System::Windows::Forms::Label());
			this->Debut_player_text = (gcnew System::Windows::Forms::TextBox());
			this->Debug_bot_text = (gcnew System::Windows::Forms::TextBox());
			this->Player_num_debug = (gcnew System::Windows::Forms::Label());
			this->Bot_Number = (gcnew System::Windows::Forms::Label());
			this->buttonX = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(364, 160);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(39, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Game::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(409, 160);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(39, 30);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Game::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(455, 160);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(39, 30);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Game::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(364, 197);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(39, 30);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Game::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(409, 197);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(39, 30);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Game::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(455, 197);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(39, 30);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Game::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(364, 233);
			this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(39, 30);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Game::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(409, 233);
			this->button8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(39, 30);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Game::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(455, 233);
			this->button9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(39, 30);
			this->button9->TabIndex = 8;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Game::button9_Click);
			// 
			// button0
			// 
			this->button0->Location = System::Drawing::Point(455, 268);
			this->button0->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(39, 30);
			this->button0->TabIndex = 9;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Visible = false;
			this->button0->Click += gcnew System::EventHandler(this, &Game::button0_Click);
			// 
			// InputButton
			// 
			this->InputButton->Enabled = false;
			this->InputButton->Location = System::Drawing::Point(364, 268);
			this->InputButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->InputButton->Name = L"InputButton";
			this->InputButton->Size = System::Drawing::Size(84, 30);
			this->InputButton->TabIndex = 10;
			this->InputButton->Text = L"Ââåñòè";
			this->InputButton->UseVisualStyleBackColor = true;
			this->InputButton->Click += gcnew System::EventHandler(this, &Game::InputButton_Click);
			// 
			// ResetButton
			// 
			this->ResetButton->Location = System::Drawing::Point(364, 304);
			this->ResetButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ResetButton->Name = L"ResetButton";
			this->ResetButton->Size = System::Drawing::Size(129, 30);
			this->ResetButton->TabIndex = 11;
			this->ResetButton->Text = L"Ñáğîñ";
			this->ResetButton->UseVisualStyleBackColor = true;
			this->ResetButton->Click += gcnew System::EventHandler(this, &Game::ResetButton_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox1->Location = System::Drawing::Point(364, 133);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(129, 22);
			this->textBox1->TabIndex = 12;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Game::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(380, 102);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 18);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Âàøå ÷èñëî";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(188, 102);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 18);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Èñòîğèÿ";
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::GreenYellow;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(149, 133);
			this->listBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(160, 212);
			this->listBox1->TabIndex = 16;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->richTextBox1->Location = System::Drawing::Point(252, 52);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->richTextBox1->Size = System::Drawing::Size(151, 22);
			this->richTextBox1->TabIndex = 17;
			this->richTextBox1->Text = L"ÿ òåêñò";
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"menuStrip1.BackgroundImage")));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->èãğàToolStripMenuItem,
					this->ïàğàìåòğûToolStripMenuItem, this->ïîìîùüToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(600, 28);
			this->menuStrip1->TabIndex = 18;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// èãğàToolStripMenuItem
			// 
			this->èãğàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->íà÷àòüÑíà÷àëàToolStripMenuItem,
					this->èçìåíèòüÑëîæíîñòüToolStripMenuItem, this->âûéòèToolStripMenuItem
			});
			this->èãğàToolStripMenuItem->ForeColor = System::Drawing::Color::Black;
			this->èãğàToolStripMenuItem->Name = L"èãğàToolStripMenuItem";
			this->èãğàToolStripMenuItem->Size = System::Drawing::Size(57, 24);
			this->èãğàToolStripMenuItem->Text = L"Èãğà";
			// 
			// íà÷àòüÑíà÷àëàToolStripMenuItem
			// 
			this->íà÷àòüÑíà÷àëàToolStripMenuItem->Name = L"íà÷àòüÑíà÷àëàToolStripMenuItem";
			this->íà÷àòüÑíà÷àëàToolStripMenuItem->Size = System::Drawing::Size(239, 26);
			this->íà÷àòüÑíà÷àëàToolStripMenuItem->Text = L"Íà÷àòü ñíà÷àëà";
			this->íà÷àòüÑíà÷àëàToolStripMenuItem->Click += gcnew System::EventHandler(this, &Game::íà÷àòüÑíà÷àëàToolStripMenuItem_Click);
			// 
			// èçìåíèòüÑëîæíîñòüToolStripMenuItem
			// 
			this->èçìåíèòüÑëîæíîñòüToolStripMenuItem->Name = L"èçìåíèòüÑëîæíîñòüToolStripMenuItem";
			this->èçìåíèòüÑëîæíîñòüToolStripMenuItem->Size = System::Drawing::Size(239, 26);
			this->èçìåíèòüÑëîæíîñòüToolStripMenuItem->Text = L"Èçìåíèòü ñëîæíîñòü";
			this->èçìåíèòüÑëîæíîñòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &Game::èçìåíèòüÑëîæíîñòüToolStripMenuItem_Click);
			// 
			// âûéòèToolStripMenuItem
			// 
			this->âûéòèToolStripMenuItem->Name = L"âûéòèToolStripMenuItem";
			this->âûéòèToolStripMenuItem->Size = System::Drawing::Size(239, 26);
			this->âûéòèToolStripMenuItem->Text = L"Âûéòè";
			this->âûéòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &Game::âûéòèToolStripMenuItem_Click);
			// 
			// ïàğàìåòğûToolStripMenuItem
			// 
			this->ïàğàìåòğûToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->âêëş÷èòü0ÂÈãğóToolStripMenuItem,
					this->âêëş÷èòüÌóçûêóToolStripMenuItem, this->íî÷íàÿÒåìàToolStripMenuItem
			});
			this->ïàğàìåòğûToolStripMenuItem->ForeColor = System::Drawing::Color::Black;
			this->ïàğàìåòğûToolStripMenuItem->Name = L"ïàğàìåòğûToolStripMenuItem";
			this->ïàğàìåòğûToolStripMenuItem->Size = System::Drawing::Size(104, 24);
			this->ïàğàìåòğûToolStripMenuItem->Text = L"Ïàğàìåòğû";
			// 
			// âêëş÷èòü0ÂÈãğóToolStripMenuItem
			// 
			this->âêëş÷èòü0ÂÈãğóToolStripMenuItem->CheckOnClick = true;
			this->âêëş÷èòü0ÂÈãğóToolStripMenuItem->Name = L"âêëş÷èòü0ÂÈãğóToolStripMenuItem";
			this->âêëş÷èòü0ÂÈãğóToolStripMenuItem->Size = System::Drawing::Size(218, 26);
			this->âêëş÷èòü0ÂÈãğóToolStripMenuItem->Text = L"Âêëş÷èòü 0 â èãğó";
			this->âêëş÷èòü0ÂÈãğóToolStripMenuItem->Click += gcnew System::EventHandler(this, &Game::âêëş÷èòü0ÂÈãğóToolStripMenuItem_Click);
			// 
			// âêëş÷èòüÌóçûêóToolStripMenuItem
			// 
			this->âêëş÷èòüÌóçûêóToolStripMenuItem->CheckOnClick = true;
			this->âêëş÷èòüÌóçûêóToolStripMenuItem->Name = L"âêëş÷èòüÌóçûêóToolStripMenuItem";
			this->âêëş÷èòüÌóçûêóToolStripMenuItem->Size = System::Drawing::Size(218, 26);
			this->âêëş÷èòüÌóçûêóToolStripMenuItem->Text = L"Âêëş÷èòü ìóçûêó";
			this->âêëş÷èòüÌóçûêóToolStripMenuItem->Click += gcnew System::EventHandler(this, &Game::âêëş÷èòüÌóçûêóToolStripMenuItem_Click);
			// 
			// íî÷íàÿÒåìàToolStripMenuItem
			// 
			this->íî÷íàÿÒåìàToolStripMenuItem->CheckOnClick = true;
			this->íî÷íàÿÒåìàToolStripMenuItem->Name = L"íî÷íàÿÒåìàToolStripMenuItem";
			this->íî÷íàÿÒåìàToolStripMenuItem->Size = System::Drawing::Size(218, 26);
			this->íî÷íàÿÒåìàToolStripMenuItem->Text = L"Íî÷íàÿ òåìà";
			this->íî÷íàÿÒåìàToolStripMenuItem->Click += gcnew System::EventHandler(this, &Game::íî÷íàÿÒåìàToolStripMenuItem_Click);
			// 
			// ïîìîùüToolStripMenuItem
			// 
			this->ïîìîùüToolStripMenuItem->ForeColor = System::Drawing::Color::Black;
			this->ïîìîùüToolStripMenuItem->Name = L"ïîìîùüToolStripMenuItem";
			this->ïîìîùüToolStripMenuItem->Size = System::Drawing::Size(83, 24);
			this->ïîìîùüToolStripMenuItem->Text = L"Ïîìîùü";
			this->ïîìîùüToolStripMenuItem->Click += gcnew System::EventHandler(this, &Game::ïîìîùüToolStripMenuItem_Click);
			// 
			// Debug_Label
			// 
			this->Debug_Label->AutoSize = true;
			this->Debug_Label->Location = System::Drawing::Point(658, 102);
			this->Debug_Label->Name = L"Debug_Label";
			this->Debug_Label->Size = System::Drawing::Size(50, 17);
			this->Debug_Label->TabIndex = 19;
			this->Debug_Label->Text = L"Debug";
			// 
			// Debut_player_text
			// 
			this->Debut_player_text->Location = System::Drawing::Point(630, 177);
			this->Debut_player_text->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Debut_player_text->Name = L"Debut_player_text";
			this->Debut_player_text->Size = System::Drawing::Size(100, 22);
			this->Debut_player_text->TabIndex = 20;
			// 
			// Debug_bot_text
			// 
			this->Debug_bot_text->Location = System::Drawing::Point(630, 266);
			this->Debug_bot_text->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Debug_bot_text->Name = L"Debug_bot_text";
			this->Debug_bot_text->Size = System::Drawing::Size(100, 22);
			this->Debug_bot_text->TabIndex = 21;
			// 
			// Player_num_debug
			// 
			this->Player_num_debug->AutoSize = true;
			this->Player_num_debug->Location = System::Drawing::Point(627, 148);
			this->Player_num_debug->Name = L"Player_num_debug";
			this->Player_num_debug->Size = System::Drawing::Size(106, 17);
			this->Player_num_debug->TabIndex = 22;
			this->Player_num_debug->Text = L"Player_Number";
			// 
			// Bot_Number
			// 
			this->Bot_Number->AutoSize = true;
			this->Bot_Number->Location = System::Drawing::Point(630, 238);
			this->Bot_Number->Name = L"Bot_Number";
			this->Bot_Number->Size = System::Drawing::Size(87, 17);
			this->Bot_Number->TabIndex = 23;
			this->Bot_Number->Text = L"Bot_Number";
			// 
			// buttonX
			// 
			this->buttonX->Enabled = false;
			this->buttonX->Location = System::Drawing::Point(455, 267);
			this->buttonX->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonX->Name = L"buttonX";
			this->buttonX->Size = System::Drawing::Size(39, 30);
			this->buttonX->TabIndex = 24;
			this->buttonX->Text = L"X";
			this->buttonX->UseVisualStyleBackColor = true;
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(600, 414);
			this->Controls->Add(this->buttonX);
			this->Controls->Add(this->Bot_Number);
			this->Controls->Add(this->Player_num_debug);
			this->Controls->Add(this->Debug_bot_text);
			this->Controls->Add(this->Debut_player_text);
			this->Controls->Add(this->Debug_Label);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->ResetButton);
			this->Controls->Add(this->InputButton);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->MinimumSize = System::Drawing::Size(618, 461);
			this->Name = L"Game";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Bulls and Cows";
			this->Load += gcnew System::EventHandler(this, &Game::Game_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void Button_Disable(int difficult);
private: System::Void Button_Enable();
private: System::Void ResetGame();
private: System::Void WinGame(const int count);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button0_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ResetButton_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void InputButton_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Game_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void âûéòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void èçìåíèòüÑëîæíîñòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void íà÷àòüÑíà÷àëàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void âêëş÷èòü0ÂÈãğóToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ïîìîùüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void âêëş÷èòüÌóçûêóToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void íî÷íàÿÒåìàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}