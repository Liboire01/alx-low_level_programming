#include <stdlib.h>
#include <time.h>
#include <stdlib.h>

/* more headers goes there */

/* main printf -print if last values is greater than 5 or equal 0 or low 6*/

int main(void)

{

	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (last > 5)
	{
	printf("Last digit of %i is %i and is greater than 5\n", n, last);
	}
	else if (last == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, last);
	}
	else if (last < 6)
	{
	printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last);
	}

	return (0);

}
