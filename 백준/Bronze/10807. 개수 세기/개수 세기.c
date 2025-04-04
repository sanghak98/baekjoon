#include <stdio.h>
int main(void)
{
    int i;
    int count = 0;
    int N;
    int n[101];
    int v;
    
    scanf("%d", &N);
    
    for ( i=0; i<N; i++ )
    {
        scanf("%d", &n[i]);
    }
    
    scanf("%d", &v);
    
    for ( i=0; i<N; i++ )
    {
        if ( n[i] == v )
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}