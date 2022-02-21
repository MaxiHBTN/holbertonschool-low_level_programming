#include "main.h"

/**
 *  *_strchr - locates a character in a string.
 * @s: string
 * @c: character
 * Return: string if there is a match or null if it is not.
 **/

char *_strchr(char *s, char c)
{
	int i;
	char *t;

	i = 0;

	if (c != '\0')
	{
		while (s[i])
		{
			if (s[i] == c)
			{
				t = &s[i];
			return (t);
			}
			i++;
		}
	}
	return ('\0');
}
