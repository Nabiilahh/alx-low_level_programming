#include "main.h"
/**
 * string_toupper - changes all lowercase letters to uppercase
 * @s: input string
 * @str: pointer
 * Return: string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] <= 'z' && str[i] >= 'a')
			str[i] -= 32;
	}
	return (str);
}
