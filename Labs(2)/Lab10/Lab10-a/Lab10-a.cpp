#include <iostream>
using namespace std;
int Area(int a, int b = -1) {
	if (b == -1) { return a * a; }
	return a * b;
}
int main()
{
	setlocale(LC_ALL, "ru");
	int a, b, n;
	while (true) {
		cout << "Вычислить:(1)Площадь квадрата  (2)Площадь прямоугольника\n --> ";
		cin >> n;
		if (n == 1) {
			cout << "Введите а --> ";
			cin >> a;
			if (a < 1) {
				cout << "Error" << endl;break;
			}
			cout << "Площадь квадрата: " << Area(a) << endl;
		}
		else if (n == 2) {
			cout << "Введите а,b --> ";
			cin >> a >> b;
			if (a < 1 || b < 1) {
				cout << "Error" << endl;
				break;
			}
			if (a == b) {
				cout << "Площадь квадрата: " << Area(a) << endl;
				continue;
			}
			cout << "Площадь прямоугольника: " << Area(a, b) << endl;
		}
		else cout << "ERRO4R" << endl;
	}
}