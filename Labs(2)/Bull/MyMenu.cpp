#include "MyMenu.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Bull::MyMenu menu;
	Application::Run(% menu);
}

System::Void Bull::MyMenu::����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("�����������, ��� ��� ���������� �������","�������� ����������",MessageBoxButtons::OK,MessageBoxIcon::Information);
}

System::Void Bull::MyMenu::�������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("��������� ���������� ��� 4-� ������� ����� (������� �� ��������� ����).\n���� ������ ������� ����� � ���������� ����������� �������.\n������ - ����� ������� �� ������� �� ������� ������� � �����.\n���� - ����� ������� �� ������� ������ �� ������� � �����.\n�����!",
		"������� ����",
		MessageBoxButtons::OK,
		MessageBoxIcon::Information
	);
}

System::Void Bull::MyMenu::�����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void Bull::MyMenu::������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	DifficultForm^ form = gcnew DifficultForm;
	this->Hide();
	form->Show();
}

System::Void Bull::MyMenu::���������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Record_List^ rec = gcnew Record_List;
	rec->ShowDialog();
}
