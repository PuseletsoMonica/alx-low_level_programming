#include <stdlib.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - print last digit of the number stored variable 
 */

/* Return Always 0 (success) */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2; 
	if (a > 5)
	{printf("Last digit of %d is %d and and is greater than 5\n",  n % 10);
	} 
	else if (a == 0); 
	{printf("Last digit of %d is %d and and is 0\n",  n % 10)
	}
	else  ((n % 10) < 6 && (n % 10) != 0)
       	{printf("Last digit of %d is %d and and is less than 5\n", n % 10);
	} 
	return (0);
}
