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
System::Void Bull::DifficultForm::�����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void Bull::DifficultForm::���������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyMenu^ form = gcnew MyMenu;
	this->Hide();
	form->Show();
}

System::Void Bull::DifficultForm::�������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("�������� ��������� ����\n������ - 3 �����\n������� - 4 �����\n������� - 5 �����","��������� ����");
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