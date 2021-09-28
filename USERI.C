#include<stdio.h>

void main()
{
	int a, b;
	clrscr();
	printf("Enter any value for a and b:");
	scanf("%d %d", &a, &b); // Read User Input
	// %d - Format Specifier
	// & - address of operator

	printf("Addition is: %d", (a + b));

	getch();
}