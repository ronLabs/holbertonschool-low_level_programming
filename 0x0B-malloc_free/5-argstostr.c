#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: element's number of the functions
 * @av: arguments values
 * Return: a pointer to a char
 */
char *argstostr(int ac, char **av)
{
	int i, j, l = 0, k;
	char *new_str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			l++;
	}
	l = l + ac;
	new_str = malloc(sizeof(char) * (l + 1));
	k = 0;
	if (new_str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			new_str[k] = av[i][j];
			k++;
		}
		if (new_str[k] == '\0')
			new_str[k++] = '\n';
	}
	return (new_str);
}
