#include "holberton.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @s: pointer to char
 * Return: char
 */

char *rot13(char *s)
{
	int i = 0;
	int j = 0;
	char *abc = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char *r13 = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	while (s[i] != '\0')
	{
		while (abc[j] != '\0')
		{
			if (s[i] == abc[j])
			{
				s[i]  = r13[j];
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (s);
}
