#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main- Print base 10 numbers
 * @void: empty parameter list for main
 *
 * description: prints numbers 1-9
 *
 * return: 0 for success
 */


int main(void) /*main: print base 10 numbers*/
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
