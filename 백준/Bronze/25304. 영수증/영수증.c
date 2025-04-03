#include <stdio.h>
int main(void)
{
    int i;
    int X;
    int N;
    int a, b;
    int sum;
    int total = 0;
    scanf("%d %d", &X, &N);
    
    for ( i = 0; i <N; i++ )
    {
        scanf("%d %d", &a, &b);
        sum = a * b;
        total = total + sum;
    }
    if ( total == X )
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}