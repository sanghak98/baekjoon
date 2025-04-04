#include <stdio.h>
int main(void)
{
    int i;
    int N;
    int A[1000001];
    int min;
    int max;
    
    scanf("%d", &N);
    
    for ( i=0; i<N; i++ )
    {
        scanf("%d", &A[i]);
    }
    
    max = A[0];
    min = A[0];
        
    for ( i=0; i<N; i++ )
    {
    
        if ( A[i] > max )
        {
            max = A[i];
        }
        
        if ( A[i] < min )
        {
            min = A[i];
        }
        
    }
    
    printf("%d %d", min, max);
    return 0;
}