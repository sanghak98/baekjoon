#include <stdio.h>
int main(void)
{
    int A, B, C;
    int Final_hour, Final_minute;
    
    scanf("%d %d %d", &A, &B, &C);
    int A_minute = A * 60;
    int A_add_B_minute = A_minute + B;
    int Total_add_minute = A_add_B_minute + C;
    Final_hour = ( Total_add_minute / 60 ) % 24;
    Final_minute = ( Total_add_minute % 60 );
    printf("%d %d", Final_hour, Final_minute);
    return 0;
}