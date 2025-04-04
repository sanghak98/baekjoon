#include <stdio.h>
int main(void)
{
    int i = 0;
    int j;
    int A, B;
    int sum[101];
    for (;;)
    {
        scanf("%d %d", &A, &B);
        
        if ( A == 0 && B == 0 )
        {
            break;
        }
        
        sum[i] = A + B;
        i++;
     
    }
    for ( j = 0; j < i; j ++)
    {
        printf("%d\n", sum[j]);
    }
    return 0;
}