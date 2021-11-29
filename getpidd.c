#include <stdio.h>
#include <unistd.h>
int main(void)
{
int pidd = getppid();

printf("the pidd is: %d\n", pidd);

return (0);
}
