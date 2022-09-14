#include "main.h"
/**
 * _islower - Entry point
 * @c : the integer value it receives
 * Description : checks for lowercase alphabets
 * Return : 1 if c is lowercase, 0 if otherwise
 */
int _islower(int c)
{
	int i = 'a';

		for (i = 'a'; i <= 'z'; i++)
		{
			if (c == i)
			{
				return (1);
			}
		}
	return (0);
}
