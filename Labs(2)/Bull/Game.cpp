#include "Game.h"
extern int g_difficult;
bool g_flag_new_game = false;

void NewGame(int& count) {
	if (g_flag_new_game)
		count = 0;
}
char* Convert_String_to_char(System::String^ str) {
	return (char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(str);
}
System::Void Bull::Game::button1_Click(System::Object^ sender, System::EventArgs^ e){
	textBox1->Text += System::Convert::ToString(1);
	button1->Enabled = false;
	button1->Text = "X";
}
System::Void Bull::Game::button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += System::Convert::ToString(2);
	button2->Enabled = false;
	button2->Text = "X";
}
System::Void Bull::Game::button3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += System::Convert::ToString(3);
	button3->Enabled = false;
	button3->Text = "X";
}
System::Void Bull::Game::button4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += System::Convert::ToString(4);
	button4->Enabled = false;
	button4->Text = "X";
}
System::Void Bull::Game::button5_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += System::Convert::ToString(5);
	button5->Enabled = false;
	button5->Text = "X";
}
System::Void Bull::Game::button6_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += System::Convert::ToString(6);
	button6->Enabled = false;
	button6->Text = "X";
}
System::Void Bull::Game::button7_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += System::Convert::ToString(7);
	button7->Enabled = false;
	button7->Text = "X";
}
System::Void Bull::Game::button8_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += System::Convert::ToString(8);
	button8->Enabled = false;
	button8->Text = "X";
}
System::Void Bull::Game::button9_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += System::Convert::ToString(9);
	button9->Enabled = false;
	button9->Text = "X";
}
System::Void Bull::Game::button0_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += System::Convert::ToString(0);
	button0->Enabled = false;
	button0->Text = "X";
}
System::Void Bull::Game::ResetButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	textBox1->Text = "";
	Button_Enable();
}
void SaveRecord(const int count, System::String^ s_name) {
	FILE* f;
	char* name = Convert_String_to_char(s_name);
	fopen_s(&f, "Save.txt", "a+t");
	fprintf(f, "\n%-10s %d", name, count);
	fclose(f);
}
System::Void Bull::Game::WinGame(const int count) {
	WinForm^ win = gcnew WinForm;
	DifficultForm^ dif = gcnew DifficultForm;
	richTextBox1->Text = "         ÏÎÁÅÄÀ!!!";
	listBox1->Items->Add(" ");
	listBox1->Items->Add("Êîë-âî ïîïûòîê = " + count);
	win->label1->Text = "Âñåãî ïîïûòîê: " + count;
	win->ShowDialog();
	SaveRecord(count, win->textBox1->Text);
	auto result = MessageBox::Show(
		"Íà÷àòü íîâóþ èãðó?",
		"Ïîçäðàâëÿþ! Âû îòãàäàëè!",
		MessageBoxButtons::YesNo,
		MessageBoxIcon::Question);
	if (result == System::Windows::Forms::DialogResult::No) {
		Application::Exit();
	}
	else {
		g_flag_new_game = true;
		dif->Show();
		this->Hide();
	}
}
System::Void Bull::Game::InputButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	int bulls, cows, player, bot;
	static int count;
	bool zero = false;
	if (âêëþ÷èòü0ÂÈãðóToolStripMenuItem->Checked) {
		zero = true;
	}
	NewGame(count);
	player = Convert::ToInt32(textBox1->Text);
	PlayBullCow(count, bot, player, g_difficult, bulls, cows, zero, g_flag_new_game);
	g_flag_new_game = false;
	Debut_player_text->Text = System::Convert::ToString(player); //----
	Debug_bot_text->Text = System::Convert::ToString(bot);		//----
	listBox1->Items->Add(textBox1->Text + ", Á = " + bulls + ", Ê = " + cows);
	textBox1->Text = "";
	Button_Enable();
	richTextBox1->Text = "Áûêè = " + bulls + " Êîðîâû = " + cows;
	if (bulls == g_difficult) {
		WinGame(count);
	}
}
System::Void Bull::Game::textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	Button_Disable(g_difficult);
}
System::Void Bull::Game::Game_Load(System::Object^ sender, System::EventArgs^ e)
{
	System::Media::SoundPlayer^ simpleSound = gcnew System::Media::SoundPlayer("d:\\temp\\sound1.wav");
	simpleSound->Play();
	âêëþ÷èòüÌóçûêóToolStripMenuItem->Checked = true;
	ResetGame();
}
System::Void Bull::Game::âûéòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}
System::Void Bull::Game::èçìåíèòüÑëîæíîñòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	DifficultForm^ dif = gcnew DifficultForm;
	g_flag_new_game = true;
	dif->Show();
	this->Hide();
}
System::Void Bull::Game::íà÷àòüÑíà÷àëàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	ResetGame();
}
System::Void Bull::Game::âêëþ÷èòü0ÂÈãðóToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	ResetGame();
	if (!âêëþ÷èòü0ÂÈãðóToolStripMenuItem->Checked) {
		button0->Visible = false;
		buttonX->Visible = true;
	}
	else {
		button0->Visible = true;
		buttonX->Visible = false;
	}
}
System::Void Bull::Game::ïîìîùüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Äëÿ ââîäà öèôð êëèêàéòå íà ïàíåëü ââîäà, äëÿ àíàëèçà ïðîøëûõ ÷èñåë èñïîëüçóéòå ñïèñîê \"Èñòîðèÿ\"\nÃäå Á - áûêè, Ê - êîðîâû"
		, "Ïîìîùü"
		, MessageBoxButtons::OK
		, MessageBoxIcon::Information);
}
System::Void Bull::Game::âêëþ÷èòüÌóçûêóToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::Media::SoundPlayer^ simpleSound = gcnew System::Media::SoundPlayer("d:\\temp\\sound1.wav");
	if (âêëþ÷èòüÌóçûêóToolStripMenuItem->Checked)
		simpleSound->PlayLooping();
	else
		simpleSound->Stop();
}
System::Void Bull::Game::íî÷íàÿÒåìàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Bitmap^ bitmap_day = gcnew Bitmap("d:\\temp\\Day_view.jpg");
	Bitmap^ bitmap_night = gcnew Bitmap("d:\\temp\\nighty_view.png");
	if (íî÷íàÿÒåìàToolStripMenuItem->Checked) {
		èãðàToolStripMenuItem->ForeColor = ForeColor.DeepSkyBlue;
		ïàðàìåòðûToolStripMenuItem->ForeColor = ForeColor.DeepSkyBlue;
		ïîìîùüToolStripMenuItem->ForeColor = ForeColor.DeepSkyBlue;
		label1->BackColor = BackColor.Transparent;
		label2->BackColor = BackColor.Transparent;
		listBox1->BackColor = BackColor.Aquamarine;
		this->BackgroundImage = bitmap_night;
		menuStrip1->BackgroundImage = bitmap_night;
	}
	else {
		èãðàToolStripMenuItem->ForeColor = ForeColor.Black;
		ïàðàìåòðûToolStripMenuItem->ForeColor = ForeColor.Black;
		ïîìîùüToolStripMenuItem->ForeColor = ForeColor.Black;
		label1->BackColor = BackColor.Transparent;
		label2->BackColor = BackColor.Transparent;
		listBox1->BackColor = BackColor.GreenYellow;
		this->BackgroundImage = bitmap_day;
		menuStrip1->BackgroundImage = bitmap_day;
	}
}

System::Void Bull::Game::Button_Disable(int difficult)
{
	if (textBox1->TextLength > difficult - 1) {
		button0->Enabled = false;
		button0->Text = "X";
		button1->Enabled = false;
		button1->Text = "X";
		button2->Enabled = false;
		button2->Text = "X";
		button3->Enabled = false;
		button3->Text = "X";
		button4->Enabled = false;
		button4->Text = "X";
		button5->Enabled = false;
		button5->Text = "X";
		button6->Enabled = false;
		button6->Text = "X";
		button7->Enabled = false;
		button7->Text = "X";
		button8->Enabled = false;
		button8->Text = "X";
		button9->Enabled = false;
		button9->Text = "X";
		InputButton->Enabled = true;
	}
}
System::Void Bull::Game::Button_Enable() { 
	button0->Enabled = true;
	button0->Text = "0";
	button1->Enabled = true;
	button1->Text = "1";
	button2->Enabled = true;
	button2->Text = "2";
	button3->Enabled = true;
	button3->Text = "3";
	button4->Enabled = true;
	button4->Text = "4";
	button5->Enabled = true;
	button5->Text = "5";
	button6->Enabled = true;
	button6->Text = "6";
	button7->Enabled = true;
	button7->Text = "7";
	button8->Enabled = true;
	button8->Text = "8";
	button9->Enabled = true;
	button9->Text = "9";
	InputButton->Enabled = false;
}

System::Void Bull::Game::ResetGame()
{
	g_flag_new_game = true; 
	textBox1->Text = "";
	Button_Enable();
	richTextBox1->Text = "      Ââåäèòå ÷èñëî";
	listBox1->Items->Clear();
}