#include <stdio.h>
int main()
{
	int count = 9;
	while (count >= 9)
    {
		for ( int i = 1 ; i < count ; i++ , count-- )
        {
			printf("%d",count);
		}
	}
    return 0;
}
