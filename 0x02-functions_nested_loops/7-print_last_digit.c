#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * Description - prints the last digit of a number
 * @n : n is an integer
 * Return : Always (0)
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
