#include "main.h"
/**
 * print_number - prints an integer n
 * Description: an integer n is to be printed
 * @n: integer to be printed
 * Return: Always (0)
 */
void print_numbers(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}
	else
	{
		n1 = n;
	}
	if (n1 / 10)
	{
		print_number(n1 / 10);
	}
		_putchar((n1 % 10) + '0');
}
