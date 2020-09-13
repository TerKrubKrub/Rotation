#include <stdio.h>
int main()
{
	int x[150][150];
	int m, n, i, j;
	scanf_s("%d %d", &m, &n);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf_s("%d", &x[i][j]);
		}
	}
	for (j = n - 1; j >= 0; j--)
	{
		for (i = 0; i < m; i++)
		{
			printf("%d ", x[i][j]);
		}
		printf("\n");
	}
	return 0;
}