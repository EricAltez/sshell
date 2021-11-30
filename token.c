#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
/**
 *token - divide given string in tokens
 *@line: given string
 *Return: array of strings
 */
char **token(char *line)
{
	int i = 0;
	char *tok = NULL;
	char **tokarray = NULL;

	tokarray = malloc(1024);
	if (!tokarray)
	{
		free(tokarray);
		exit(3);
	}
	tok = strtok(line, " ");
	while (tok != NULL)
	{
		tokarray[i] = tok;
		tok = strtok(NULL, " ");
		i++;
	}
	tokarray[i] = NULL;
	for (i = 0; tokarray[i] != NULL; i++)
	{
		printf("%s\n", tokarray[i]);
	}
return (tokarray);
}
