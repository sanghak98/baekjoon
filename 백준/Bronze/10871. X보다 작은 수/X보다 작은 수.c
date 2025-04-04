#include <stdio.h>
int main(void)
{
    int i;
    int N;
    int X;
    int A[10001];
    
    scanf("%d", &N);
    scanf("%d", &X);
    
    for ( i=0; i<N; i++)
    {
        scanf("%d", &A[i]);;
        if ( A[i] < X )
        {
            printf("%d ", A[i]);
        }
    }
    
    return 0;
    
}