#include "main.h"
/**
 * _isalpha - Entry point
 * Description - checks if a leter is upper or lowercase
 * Return : 0 or 1
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
