#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
char *_getline(void)
{
	int bytes_read;
	size_t size = 10;
	char *string;

	printf("$ ");
	string = (char *) malloc(size);
	bytes_read = getline(&string, &size, stdin);
	if (bytes_read == -1)
	{
		printf("ERROR");
	}
	else
	{
		printf("your str: ");
		puts(string);
		printf("size: %d", bytes_read);
	}
return (string);
}
