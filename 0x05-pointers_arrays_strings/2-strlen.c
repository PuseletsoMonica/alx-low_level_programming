#include "main.h"
/**
 *_strlen- finds the length of a string.
 *@s:String pointer
 *Return: returns the length of the string.
 */

int _strlen(char *s)
{
	int p = 0;
	/increment up to when the last character is NULL,\0/
	while (*(s + p) != 0)
	{
		p++;
	}
	return (p);
}

