#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include<stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int m;
	m=n % 10;

	if (m>5);

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (m>5)
                printf("last digit of %d is %d and is greater than 5", n,m);
        else if (m == 0)
                printf("last digit of %d is %d andis zero" n,m);
        else if (m 6 && m != 0)
                printf("last digit of %d is %d and is less than 6 and not 0", n,m);
        printf("\n");

	return (0);
}