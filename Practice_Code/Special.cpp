#include<stdio.h>
#include<conio.h>

void special(int x)
{
	int f = 0;

	for (int i = 1; i < x; i++)
	{
		if (x % i == 0)
			f += i;
	}

	if (f == x)
		printf("Number is special");
	else
		printf("Number isn't special");
}