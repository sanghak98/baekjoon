#include <stdio.h>
int main(void)
{
    int n;
    int out;
    scanf("%d", &n);
    if ( n % 4 == 0 && n % 100 != 0 )
    {
        n = 1;
    }
    else if ( n % 400 == 0 )
    {
        n = 1;
    }
    else
    {
        n = 0;
    }
    printf("%d",n);
    return 0;
}