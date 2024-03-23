#include <stdlib.h>
#include <time.h>
int main(void)
{
	/*Save the number x */
	int x = '0';
	char y = 'a';
	/* Use the for loop  */
	for (x = '0'; x <= '9'; x++)
		putchar(x);
	for (y = 'a'; y <= 'f'; y++)
		putchar(y);
	putchar("\n");
	return (0);
}

