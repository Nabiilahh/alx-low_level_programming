#include "main.h"
/**
 * *malloc_checked - allocates memory using malloc
 * @b: integer
 * Return: pointer to allocated memory
*/
void *malloc_checked(unsigned int b)
{
	int *s = malloc(b);

	if (s == 0)
		exit(98);
	return (s);

}
