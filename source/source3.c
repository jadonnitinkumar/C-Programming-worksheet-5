#include <stdio.h>
int main()
{
	int i = 2;
	for ( ; ; )
    {
		if ( i % 2 == 0 )
		{
			continue;
		}
		else
        {
			break;
		}
		printf("helloworld",i);
	}
    return 0;
}
