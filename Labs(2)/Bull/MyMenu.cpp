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

System::Void Bull::MyMenu::оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Представьте, что это информация полезна","Полезная информация",MessageBoxButtons::OK,MessageBoxIcon::Information);
}

System::Void Bull::MyMenu::справкаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Компьютер загадывает вам 4-х значное число (зависит от сложности игры).\nВаша задача угадать число с наименьшим количеством попыток.\nКоровы - цифры которые вы угадали не включая позицию в числе.\nБыки - цифры которые вы угадали вплоть до позиции в числе.\nУдачи!",
		"Правила игры",
		MessageBoxButtons::OK,
		MessageBoxIcon::Information
	);
}

System::Void Bull::MyMenu::выйтиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void Bull::MyMenu::начатьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	DifficultForm^ form = gcnew DifficultForm;
	this->Hide();
	form->Show();
}

System::Void Bull::MyMenu::таблицаРекордовToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Record_List^ rec = gcnew Record_List;
	rec->ShowDialog();
}
