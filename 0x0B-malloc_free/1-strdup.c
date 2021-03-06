#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available or if str = NULL
 **/

char *_strdup(char *str)
{
	int i, a;
	char *s;

	i = 0;
	a = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	s = malloc(sizeof(char) * i + 1);
	if (s != NULL)
	{
		if (str[a])
		{
			for (a = 0; a < i; a++)
			{
				s[a] = str[a];
			}
		}
		return (s);
	}
	return (NULL);
}
