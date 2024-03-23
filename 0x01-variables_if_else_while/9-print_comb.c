#include <stdlib.h>
#include <time.h>
int main(void)
{
	/*Save the number x */
	int x = '0';
	/* Use the for loop  */
	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
		if (x != '9')
		{
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
