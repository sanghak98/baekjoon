#include <stdio.h>
int main(void)
{
    int A, B, C;
    int reward;
    scanf("%d %d %d", &A, &B, &C);
    if ( A == B || B == C || A == C )
    {
        if ( A == B && B == C )
        {
            reward = 10000 + A * 1000;
        }
        else if ( A == B && B != C )
        {
            reward = 1000 + A * 100;
        }
        else if ( B == C && C != A )
        {
            reward = 1000 + B * 100;
        }
        else if ( C == A && A != B )
        {
            reward = 1000 + C * 100;
        }
    }
    else
    {
        int max = A;
        if ( B > max ) max = B;
        if ( C > max ) max = C;
        
        reward = max * 100;
    }
    printf("%d", reward);
    return 0;
}