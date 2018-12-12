#include <stdio.h>
int main()
{
    int i = 2;
	one:
	two:
	for ( ; ; i++ )
    {
		if ( i % 2 == 0 )
        {
			goto one;
			printf("%d", i);
		}
		else
        {
			break;
            goto two;
			printf("%d", i);
		}
	}
	return 0;
}
