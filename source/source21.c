#include <stdio.h>
int main()
{
	int i = 5;
	goto one;
	break;
	one:
	printf("%d",i);
	--i;
    return 0;
}
