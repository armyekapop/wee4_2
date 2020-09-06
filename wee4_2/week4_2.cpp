#include<stdio.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int a = n;
		for (int j = 0; j <= i; j++)
		{
			printf("* ");
		}
		for (int j = (2 * a - i) - 2; j > i + 1; j--)
		{
			printf("  ");
			a--;
		}
		for (int l = 0; l <= i; l++)
		{
			if (i == n - 1 && l == 0)
			{
				continue;
			}
			printf("* ");
		}
		printf("\n");
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			printf("* ");
		}
		for (int j = 2 * i + 1; j > 0; j--)
		{
			printf("  ");
		}
		for (int l = n - 1; l > i; l--)
		{
			if (i == n - 1 && l == 0)
			{
				continue;
			}
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}