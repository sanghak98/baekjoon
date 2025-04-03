#include <stdio.h>
int main(void)
{
    int i;
    int T;
    int A, B;
    scanf("%d", &T);
    
    for(i=1;i<T+1;i++)
    {
        scanf("%d %d", &A, &B);
        printf("Case #%d: %d\n", i, A+B);
    }
    return 0;
}