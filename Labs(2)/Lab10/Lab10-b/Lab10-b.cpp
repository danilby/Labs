#include <iostream>
#define SWAP(a, b) int temp = a; a = b; b = temp; 
#define PRINT_REF
class SwapValue {
	int a;
	int b;
	int c;
public:
	void Swap(int* a, int* b, int* c);
	void Swap(int& a, int& b, int& c);
};
void SwapValue::Swap(int* a, int* b, int* c) {
	if (*a > *b && *b > *c) {
		SWAP(*a, *c);
	}
	else if (*a > *c && *c > *b) {
		SWAP(*a, *b);
	}
	else if (*b > *a && *a > *c) {
		SWAP(*b, *c);
	}
	else if (*b > *c && *c > *a) {
		SWAP(*b, *a);
	}
	else if (*c > *a && *a > *b) {
		SWAP(*c, *b);
	}
	else {
		SWAP(*c, *a);
	}
}
void SwapValue::Swap(int& a, int& b, int& c) {
	if (a > b && b > c) {
		SWAP(a, c);
	}
	else if (a > c && c > b) {
		SWAP(a, b);
	}
	else if (b > a && a > c) {
		SWAP(b, c);
	}
	else if (b > c && c > a) {
		SWAP(b, a);
	}
	else if (c > a && a > b) {
		SWAP(c, b);
	}
	else {
		SWAP(c, a);
	}
}

int main()
{
	setlocale(LC_ALL, "ru");
	SwapValue obj;
	int a, b, c;
	while (1)
	{
		std::cout << "Введите 3 разных числа (a , b , c)  -->  ";
		std::cin >> a >> b >> c;
#ifndef PRINT_REF
		obj.Swap(&a, &b, &c);
#else
		obj.Swap(a, b, c);
#endif // !PRINT_REF

		std::cout << "a = " << a << "   b = " << b << "   c = " << c << std::endl << std::endl;
	}
}