#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Prints the last digit of a randomly generated number
*and whether it is greater than 5, less than 6, or 0.
*
* Return: Always 0.
*/
int main(void)
{
int n;
int i;

srand(time(0));
n = rand() - RAND_MAX / 2;			
/* your code goes there */
i = n % 10;

if (i > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, i);
}
else if (i < 6 && i != 0)                                                                                                                                                              
{                                                                                                                                                                       
	printf("Last digit of %d is %d and is 0\n", n, i);
}
else
{
	printf("Last digit of %d is %d and is less than 6 and not 0", n, i);
}
return (0);
}
