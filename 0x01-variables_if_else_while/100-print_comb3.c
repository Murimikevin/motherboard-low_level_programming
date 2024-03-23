#include <stdlib.h>
#include <time.h>
int main(void)
{
	int x = 0;

	for (x = 0; x < 100; x++)
	{
		putchar((x / 10) + '0');
		putchar((x % 10) + '0');
		if (x != 99)
		{
			putchar(',');
		}
	}
	putchar('\n');

	return (0);
}
