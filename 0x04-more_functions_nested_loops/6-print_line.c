#include "main.h"
/**
 * print_line - prints a line
 * Description: Draws a straight line on the terminal
 * @n: variable n
 * Return: Always (0)
 */
void print_line(int n)
{
	int a = 0;

	while (a < n && n > 0)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
