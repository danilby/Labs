#include "Record_List.h"
Player* begin;

System::String^ Convert_char_To_String(char *ch) {
	char* chr = new char();
	chr = ch;
	System::String^ str;
	for (int i = 0; i < chr[i] != '\0'; i++)
	{
		str += wchar_t(ch[i]);
	}
	return str;
}
void SortList()
{	
	Player* left = begin;
	Player* right = begin->next;
	Player* temp = new Player;
	while (left->next) {
		while (right) {
			if (left->count > right->count) {
				strcpy(temp->nick, left->nick);
				strcpy(left->nick, right->nick);
				strcpy(right->nick, temp->nick);
				temp->count = left->count;
				left->count = right->count;
				right->count = temp->count;
			}
			right = right->next;
		}
		left = left->next;
		right = left->next;
	}
}
System::Void Bull::Record_List::CreateList(FILE *f)
{
	Player* current, * previous;
	previous = current = begin = new Player;
	fscanf(f, "%s %d", &current->nick, &current->count);
	while (!feof(f)) {
		current = new Player;
		fscanf(f, "%s %d", &current->nick, &current->count);
		previous->next = current;
		previous = current;
	}
	current->next = nullptr;
}
System::Void Bull::Record_List::Record_List_Load(System::Object^ sender, System::EventArgs^ e)
{
	FILE* f;
	fopen_s(&f, "d:\\Temp\\Save.txt", "r+t");
	if (!f || (fgetc(f) == EOF)) {
		MessageBox::Show("Файла либо не существует, либо он пустой", "ERROR 404", MessageBoxButtons::AbortRetryIgnore, MessageBoxIcon::Error);
		Close();
		return;
	}
	CreateList(f);
	SortList();
	Feel_List();
	Clear_List();
	fclose(f);
	
}

System::Void Bull::Record_List::Feel_List()
{
	Player* current = begin;
	std::string str2;
	String^ str = gcnew String(current->nick);
	int i = 0;
	listBox1->Items->Add("   Ник   Попытки");
	listBox1->Items->Add(" ");
	while (current) {
		str = Convert_char_To_String(current->nick);
		listBox1->Items->Add(++i + ". " + str + " - " + current->count);
		current = current->next;
	}
}

System::Void Bull::Record_List::Clear_List()
{
	Player* current = begin;
	while (current) {
		begin = begin->next;
		delete current;
		current = begin;
	}
}
