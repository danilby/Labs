#include "math.h"
#include <iostream>
#include "windows.h"
int main()
{
 SetConsoleCP(1251);
 SetConsoleOutputCP(1251);
	short n, k = 5 ;
	double x, y;
	short h;
	for ( n = 0; n < k; n++)
	{
		printf(" |  x  |  y  |\n");
		printf(" |-----|-----|\n");
		for ( x = 0; x < 4; x+=0.25)
		{
			if (x > 1 && x < 3)
				y = fabs(2 * (x - 2)) - 1;
			else
				y = 1;
			printf(" |%5.2lf|%5.2lf|", x + n * 4, y);
 			h = (y + 1) * 10;
			if ((y + 1) * 10 - h > 0.5)
				h++;
			for (; h > 0; h--)
				printf(" ");
			printf("*\n");
		}
		printf("Чтобы продолжит нажмите Enter\n");
		getchar();
	}
}
