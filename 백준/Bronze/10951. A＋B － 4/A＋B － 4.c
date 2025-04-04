#include <stdio.h>
int main(void)
{
    int i = 0;
    int j;
    int A, B;
    int sum[101];
    
    for (i = 0; scanf("%d %d", &A, &B) != EOF; i++)
    {
        sum[i] = A + B;
    }
    
    for (j=0; j<i; j++)
    {
        printf("%d\n", sum[j]);
    }
    
    return 0;
}