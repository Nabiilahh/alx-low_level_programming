#include "main.h"
/**
 * _abs - Entry point
 * @n: n is an integer
 * Description: prints the absolute value of an intger
 * Return: Always (0)
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
