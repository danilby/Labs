#include "DifficultForm.h"
int g_difficult;
int GetEazyDifficult() {
	return 3;
}
int GetMediumDifficult() {
	return 4;
}
int GetHardDifficult() {
	return 5;
}
void GetDifficult(int(*get_dif)()) {
	g_difficult = get_dif();
}
System::Void Bull::DifficultForm::âûéòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void Bull::DifficultForm::âåðíóòüñÿÂÃëàâíîåÌåíþToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyMenu^ form = gcnew MyMenu;
	this->Hide();
	form->Show();
}

System::Void Bull::DifficultForm::ñïðàâêàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Âûáåðèòå ñëîæíîñòü èãðû\nËåãêàÿ - 3 ÷èñëà\nÑðåäíÿÿ - 4 ÷èñëà\nÑëîæíàÿ - 5 ÷èñåë","Ñëîæíîñòü èãðû");
}

System::Void Bull::DifficultForm::button_eazy_Click(System::Object^ sender, System::EventArgs^ e)
{
	Game^ form = gcnew Game;
	form->Show();
	this->Hide();
	GetDifficult(GetEazyDifficult);
}

System::Void Bull::DifficultForm::button_medium_Click(System::Object^ sender, System::EventArgs^ e)
{
	Game^ form = gcnew Game;
	form->Show();
	this->Hide();
	GetDifficult(GetMediumDifficult);
}

System::Void Bull::DifficultForm::button_hard_Click(System::Object^ sender, System::EventArgs^ e)
{
	Game^ form = gcnew Game;
	form->Show();
	this->Hide();
	GetDifficult(GetHardDifficult);
}