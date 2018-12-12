#include <stdio.h>
int main()
{
	int i = 5;
	goto one;
	while (i--)
	one:
	printf("one");
	printf("%d", i);
    return 0;
}
