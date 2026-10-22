#include<stdio.h>
int main(void)
{
	int i,p1,p2;
	printf("Diz um numero: ");
	scanf_s("%d", &p1);
	for (i = 1; i <= 10;i++)
	{
		p2 = p1 * i;
		printf("%d x %d = %d\n", p1, i,p2);
	}
	return 0;
}