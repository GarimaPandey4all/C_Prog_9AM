#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Enter any value for a and b:");
    scanf("%d %d", &a, &b);

    printf("And Bitwise: %d\n", (a & b));
    printf("OR Bitwise: %d\n", (a | b));
    printf("X-OR Bitwise: %d\n", (a ^ b));
    printf("Not Bitwise: %d\n", (~a));
    printf("Left Shift Bitwise: %d\n", (a<<1));
    printf("Right Shift Bitwise: %d\n", (a>>1));

    return 0;
}
