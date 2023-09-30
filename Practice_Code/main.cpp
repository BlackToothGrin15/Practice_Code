#include<stdio.h>
#include<conio.h>

void prime(int);
void special(int);

void main()
{
	int n,ch;
	printf("Enter a number:");
	scanf_s("%d", &n);

	printf("\n*****MENU*****\n");
	printf("1. Prime Number\n");
	printf("2. Special Number\n\n");
	
	printf("Enter your choice:");
	scanf_s("%d", &ch);

	if(ch==1)
		prime(n);
	else
		if(ch==2)
			special(n);
}