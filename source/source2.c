#include <stdio.h>
int main()
{
	int i = 2;
	for ( ; ; i++ )
	{
		if ( i % 2 == 0 )
		{
			continue;
		}
		else
		{
			printf("helloworld", i);
			break;
		}
	}
    return 0;
}
