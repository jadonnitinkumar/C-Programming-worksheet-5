#include <stdio.h>
int main()
{
    goto one;
    printf("1");
	one:
	goto two;
	printf("2");
    goto one;
    two:
	printf("3");
	return 0;
}
