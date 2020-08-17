#include<stdio.h>
int main()
{
	int x, y, z;
	scanf_s("%d", &x);
	for (y = 1; y <= x; y++)
	{
		printf("*");
	}
	printf("\n");
	for (y = 1; y <= x - 2; y++)
	{
		printf("*");
		for (z = 1; z <= x - 2; z++)
		{
			printf(" ");
		}
		printf("*\n");
	}
	for (y = 1; y <= x; y++)
	{
		printf("*");
	}
	return 0;
}