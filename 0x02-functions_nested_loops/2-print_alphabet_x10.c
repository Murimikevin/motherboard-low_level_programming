#include "main.h"
void print_alphabet_x10(void)
{
	char a;
	int x;

	x = 0;
	while (x < 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		x++;
	}
}

