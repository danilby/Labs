#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
class Firms {
	char _name[20];
	char _number_of_products;
	long long _volume;
	float _part;
public:
	void set(const char* name, char nop, long long volume, float part) {
		strcpy(_name, name);
		_number_of_products = nop;
		_volume = volume;
		_part = part;
	}
	void get(char* name,char &nop, long long &volume, float &part) {
		strcpy(name, _name);
		nop = _number_of_products;
		volume = _volume;
		part = _part;
	}
	void show() {
		cout << _name << "  ";
		cout << _number_of_products << "  ";
		cout << _volume << "  ";
		cout << _part << "  ";
		cout << endl;
	}
};
int main(void) {
	setlocale(LC_ALL, "ru");
	int size;
	char name[20];
	char nop;
	long long volume;
	float part;
	cout << "Сколько фирм вы хотите создать -->";
	cin >> size;
	Firms *firm = new Firms[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Введите name, num_of_products, volume, part: ";
		cin >> name;
		cin >> nop;
		cin >> volume;
		cin >> part;
		firm[i].set(name, nop, volume, part);
	}
	cout << "-------------------------" << endl;
	cout << "SHOW: " << endl;
	for (int i = 0; i < size; i++)
	{
		firm[i].show();
	}
	cout << "GET: " << endl;
	for (int i = 0; i < size; i++)
	{
		firm[i].get(name, nop, volume, part);
		cout << name << " ";
		cout << nop << " ";
		cout << volume << " ";
		cout << part << " ";
		cout << endl;
	}
	delete[] firm;
}