#include <stdio.h>
int main(void)
{
    int i, j;
    int N;
    scanf("%d", &N);
    
    for(i=1;i<=N;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}