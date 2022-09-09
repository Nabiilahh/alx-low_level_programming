#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints all single digits from o to base 10
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		printf("%d", a);
	}
	putchar('\n');
	return (0);
}
