#include "main.h"
void jack_bauer(void)
{
	int hr, min;

	i = 0;

	while (hour < 24)
	{
		min = 0;
		while (j < 60)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
			min++;
		}
		hr++;
	}
}
