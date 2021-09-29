#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variable = vary or change = container = store the data
    // constant = fixed data

    int a = 30;
    const float pi = 3.14f;

    printf("%d\n", a); // \n - new line or enter

    a = a + 50;

    printf("%d\n", a);

    //pi = 45.6f; // error

    printf("%f", pi);

    return 0;
}
