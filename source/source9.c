#include <stdio.h>
int main()
{
    int i = 5;
    for ( ; i++ ; )
    {
        printf("%d", i);
        if ( i % 5 == 0 )
        {
            break;
        }
    }
    return 0;
}
