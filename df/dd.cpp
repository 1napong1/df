#include<stdio.h>
int main() {
	int a = 1, i, j;
	for (1;a != 0 && a > 0;1)
	{
		scanf_s("%d", &a);
		for (i = 1;a >= i;i++)
		{
			printf("*");
		}
		printf("\n\n");
	}
}