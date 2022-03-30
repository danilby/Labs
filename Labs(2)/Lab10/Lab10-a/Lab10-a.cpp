#include <iostream>
using namespace std;
class Figure {
	int a;
	int b;
public:
	int Area(int a = 5, int b = 0) {
		if (a == 0)
			return b * b;
		if (b == 0)
			return a * a;
		return a * b;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");
	Figure f;
	cout << "Figure = " << f.Area();
}