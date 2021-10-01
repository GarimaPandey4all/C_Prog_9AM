#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Enter any value for a and b:");
    scanf("%d %d", &a, &b);

    printf("Addition is: %d\n", (a + b));
    printf("Subtraction is: %d\n", (a - b));
    printf("Multiplication is: %d\n", (a * b));
    printf("Division is: %d\n", (a / b));
    printf("Modulus is: %d\n", (a % b));

    //a = 5, b = 10

    // ++ - Increment , -- : Decrement

    //a = 4
    printf("Pre-Increment is: %d\n", ++a); // 4 + 1 = 5
    printf("Post-Increment is: %d\n", a++); // 5
    printf("a is: %d\n", a); // 6
    printf("Pre-Decrement is: %d\n", --a); // 5
    printf("Post-Decrement is: %d\n", a--); // 5
    printf("a is: %d\n", a);

    return 0;
}
