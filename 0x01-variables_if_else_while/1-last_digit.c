#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry Point
 *
 *Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int pq;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	pq = n % 10;
	if (pq > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, pq);
	}
	else if (pq == 0)
	{
		printf("Last digit of %d is %d and is 0", n, pq);
	}
	else if (pq < 6 && pq != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, pq);
	}
	printf("\n");

	return (0);
}
