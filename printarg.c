#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
	int arg = 0;
	(void)ac;

	for (arg = 0; av[arg] != NULL; arg++)
	{
	printf("el argumento no %d es: %s\n", arg, av[arg]);
	}



return (0);
}
