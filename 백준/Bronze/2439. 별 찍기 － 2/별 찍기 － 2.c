#include <stdio.h>
int main(void)
{
    int i, j, k;
    int N;
    scanf("%d", &N);
    
    for(i=1;i<=N;i++)
    {
        for(j=0;j<N-i;j++)
        {
            printf(" ");
        }
        for(k=0;k<i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}