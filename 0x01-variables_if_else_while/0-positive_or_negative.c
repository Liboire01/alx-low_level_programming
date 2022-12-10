#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * main print - prints a sign of the number positifs or negatifs
 * Description: if the number is greater than 0: is positive
 * if the number is less than 0: is negative
 * if the number is 0: is zero
 * Return: Always 0
 */

/* betty style doc for function main goes there */
int main(void) 
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);

	return (0);
}
