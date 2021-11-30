#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - main function
 *Return: 0
 */
int main(void)
{
	char *line = NULL;
	size_t len = 0;
	size_t nread;

	line = malloc(sizeof(char) * 1024);
	if (line == NULL)
		return (0);

	nread = getline(&line, &len, stdin);
	if ((int)nread == -1)
	{
		perror("Read Error");
		free(line);
	}
	_strtok(line);
	return (0);
}
