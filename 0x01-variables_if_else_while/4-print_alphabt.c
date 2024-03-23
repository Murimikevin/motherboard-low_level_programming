#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	/*Save the character a e and q */
	char a = 'a';
	char e = 'e';
	char q = 'q';
	/* Use the for loop + append */
	for (a = 'a'; a <= 'z'; a++)
	/* grepping e and q */
	{
		if (a != e && a != q)
			putchar(a);
	}
	putchar('\n')
	return (0);

}

