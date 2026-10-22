#include<stdio.h>
#include<locale.h>
int main(void)
{
	int p1, p2, p3;
	printf("Diz o primeiro numero: ");
	scanf_s("%d", &p1);
	printf("Diz o segundo numero: ");
	scanf_s("%d", &p2);
	printf("Diz o terceiro numero: ");
	scanf_s("%d", &p3);
	if (p1 > p2 && p3<p1)
	{
		printf("O primeiro numero e o maior");
	}
	else
	{
		if (p2 > p3)
		{
			printf("O segundo e o maior");
		}
		else
		{
			printf("O terceiro e o maior");
		}
	}
	return 0;
}