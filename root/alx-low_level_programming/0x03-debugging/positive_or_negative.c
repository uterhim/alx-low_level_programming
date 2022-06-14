#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void positive_or_negative(int n)
{
/**	srand(time(0));
 *
 * 	n = rand() - RAND_MAX / 2;
 */ 	

	if(n>0)
	{
		printf("%i is posetive \n", n);
	}
	else if(n<0)
	{
		printf("%i is negative\n", n);
	}
	else
	{
		printf("%i is zero\n", n);
	}
}

