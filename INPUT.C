#include<stdio.h>

void main()
{
	int a, b;
	clrscr();

	printf("Enter value for a and b:");
	scanf("%d", &a); // Read User Input , %d - Format Specifier
	//& - address of operator
	scanf("%d", &b);

//        c = a + b;
	printf("Addition is: %d", (a + b));

	getch();
}