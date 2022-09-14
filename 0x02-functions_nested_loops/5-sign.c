#include "main.h"
/**
 * print_sign - Entry point
 * @n : carrier variable
 * Description : prints the sign of a number
 *Return: 0 Always
 */
int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else ( n == 0)
	{
		_putchar('0');
		return (0);
	}
	}
