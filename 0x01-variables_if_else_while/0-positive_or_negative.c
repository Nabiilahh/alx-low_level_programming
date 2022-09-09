#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - determmine if number is positive or negetive
 * Description: program will assign a random number to be variable n
 * Return: Always 0
 */
int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n", n);
	elso if (n < 0)
		printf("%d is negetive\n", n);
	else
		printf("%d is positive\n", n);
	return (0);
}
