#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/* betty style doc for function main goes there */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n >= 0)
	{
		printf("%d is positive\n",n);	
	}
	  else
	  {
			 
		printf("%d is Negative\n",n);
	  }

	return (0);
}
