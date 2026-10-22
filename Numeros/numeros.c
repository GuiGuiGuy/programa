#include<stdio.h>
#include<locale.h>
int main(void)
{
	int p1, p2, p3;
	printf("Diz o numero primeiro: ");
	scanf_s("%d", &p1); printf("Diz o numero segundo: ");
	scanf_s("%d", &p2); printf("Diz o numero terceiro: ");
	scanf_s("%d", &p3);
	if (p1 > p2)
	{
		if (p1 > p3)
		{
			printf("O primeiro é o mair");
		}
		else
		{
			printf("Vaoms descobrir o numero mair:");
		}
	}
	else
	{
		if (p2 > p3)
		{
			printf("O maior é o segundo:");
		}
		else
		{
			if (p1 < p3)
			{
				printf("O maior é o Terceiro:");
			}
			else
			{
				printf("O maior é o primeiro:");
			}
		}
	}
	return 0;
}