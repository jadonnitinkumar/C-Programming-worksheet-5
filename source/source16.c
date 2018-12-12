#include <stdio.h>
int main()
{
	int count = 5;
	while (count >= 5)
	{
		for ( int i = 1 ; i < count ; i++ , count-- )
		{
			printf("%d", count);
		}
	}
	return 0;
}
