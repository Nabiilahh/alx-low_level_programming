#include  "main.h"
/**
 * _strncpy - copies a string
 * @src: source
 * @dest: Destination
 * @n: amount of bytes
 * Return: pointer to destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
