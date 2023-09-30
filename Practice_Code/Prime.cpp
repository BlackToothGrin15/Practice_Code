#include<stdio.h>
#include<conio.h>

void main()
{
	int n, f = 0;

	printf("Enter a number:");
	scanf_s("%d", &n);
	
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			f++;
	}
	if (f == 2)
		printf("Number is prime");
	else
		printf("Number ain't prime");

}