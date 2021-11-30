#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
/**
 *_strtok - tokenise a given string
 *@buf: given string
 *Return: array of strings
 */
char *_strtok(char *buf)
{
	int i = 0;
	char *p = strtok(buf, " ");
	char *array[10];

	while (p != NULL)
	{
		array[i++] = p;
		p = strtok(NULL, " ");
	}
	for (i = 0; i < 10; i++)
		printf("%s\n", array[i]);
return (*array);
}
