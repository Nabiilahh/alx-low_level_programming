#include "main.h"
/**
 * _memset - fills a block of memory with constant byte
 * @s: starting adress
 * @b: constant byte
 * @n: number of bytes
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[1] = b;
	}
	return (s);
}
