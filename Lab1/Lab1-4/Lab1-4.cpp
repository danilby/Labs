#include <iostream>

int main()
{
	int a, b, c;
	a = 13;//Ввод переменных для свапа(через доп. переменную)
	b = 31;
	c = a;
	a = b;
	b = c;

	int x, y;
	x = 2;//Ввод переменных для свапа(без доп. переменной)
	y = 7;
	x = x + y;
	y = x - y;
	x = x - y;

}