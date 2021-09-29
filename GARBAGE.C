#include<stdio.h>

void main()
{
	//unsigned short int x = 65536;
	//signed short x = 32768;

	unsigned short x = -4;

	clrscr();

	printf("%d\n", x);  // signed
	printf("%u\n", x);  // unsigned

	getch();
}