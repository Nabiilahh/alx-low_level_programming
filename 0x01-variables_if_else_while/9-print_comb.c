#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints numbers in asending order
 * Return: Always 0
 */
int main(void)
{
	int f;

	for (f = '0'; f <= '9'; f++)
	{
		putchar(f);
		if (f != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
