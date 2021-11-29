#include <stdio.h>
#include <unistd.h>
int main(void)
{
	int pid = getpid();

	printf("the pid is: %d\n", pid);
	return (0);
}
