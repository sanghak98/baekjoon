#include <stdio.h>
int main(void)
{
	int i;
	int n[9];
	int max;
	int count = 1;

	for (i = 0; i < 9; i++)
	{
		scanf("%d", &n[i]);
	}

	max = n[0];

	for (i = 1; i < 9; i++)
	{
		if (n[i] > max)
		{
			max = n[i];
			count = i + 1;
		}
	}

	printf("%d\n", max);
	printf("%d", count);

	return 0;
}