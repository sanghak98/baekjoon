#include <stdio.h>

int main(void)
{
    int A, B;
    int B_0, B_1, B_2;
    scanf("%d %d", &A, &B);
    B_0 = B % 10;
    B_1 = (B / 10) % 10;
    B_2 = (B / 100);
    printf("%d\n", B_0 * A);
    printf("%d\n", B_1 * A);
    printf("%d\n", B_2 * A);
    printf("%d\n", B_0 * A + B_1 * A * 10 + B_2 * A * 100);
    return 0;
}