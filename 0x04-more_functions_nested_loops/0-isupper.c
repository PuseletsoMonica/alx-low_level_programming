#include "main.h"
#include <stdio.h>

/**
 * isupper - returns characters in uppercase
 *
 * Return: 1 if c is uppercase, return 0 if c is lowercase
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

