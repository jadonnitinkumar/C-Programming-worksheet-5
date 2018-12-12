#include <stdio.h>
int main()
{
	int i = 5;
    for ( ; i ; ++i )
    {
        printf("%d", i);
        if ( i % 5 != 0 )
        {
            continue;
            break;
        }
        else
        {
            break;
            continue;
        }
    }
    return 0;
}
