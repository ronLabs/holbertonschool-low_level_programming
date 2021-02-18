#include "holberton.h"
/**
 * _strncat - Function that concatenates two strings
 * @dest: pointer to destination char
 * @src: pointer to source char
 * @n: number of bytes
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int k;

	int length1, length2, totleng;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		j++;
	}
	length1 = i;
	length2 = j;
	totleng = length1 + length2;
	j = 0;
	for (k = length1; k < totleng; k++)
	{
		if(j < n)
		{
		dest[k] = src[j];
		j++;
		}
	}
	dest[k] = '\0';
	return (dest);
}
