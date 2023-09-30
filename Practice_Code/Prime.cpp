#include<stdio.h>
#include<conio.h>

void prime(int n)
{
	int f = 0;

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