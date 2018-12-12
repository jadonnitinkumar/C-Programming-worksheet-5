#include <stdio.h>
int main()
{
	three:
	goto one;
	printf("1");
	one:
	goto two;
	printf("2");
    goto one;
	two:
	printf("3");
	goto three;
	return 0;
}
