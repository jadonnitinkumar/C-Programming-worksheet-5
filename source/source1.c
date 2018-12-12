#include <stdio.h>
int main()
{
    two:
    goto one;
	printf("one");
    goto two;
	one:
	printf("two");
    return 0;
}
