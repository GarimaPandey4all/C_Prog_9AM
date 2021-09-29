#include <stdio.h>
#include <stdlib.h>

// 1 byte = 8 bits

/*
    int - 2 or 4 bytes

    2 - 16 bit compiler
    4 - 32 bit compiler

*/

int main()
{
    int a = 10; // 2 or 4 bytes
    float b = 45.8f; // 4 bytes
    char c = 'M'; // 1 byte
    double d = 89.67; //   8 bytes

    printf("A is: %d\n", a);
    printf("B is: %.2f\n", b);
    printf("C is: %c\n", c);
    printf("D is: %lf\n", d);

    printf("Size of int is: %d\n", sizeof(a));
    printf("Size of float is: %d\n", sizeof(float));
    printf("Size of char is: %d\n", sizeof(char));
    printf("Size of double is: %d\n", sizeof(d));

    return 0;
}
