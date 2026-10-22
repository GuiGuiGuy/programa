#include<stdio.h>
int main(void)
{
	int p1, p2;
		do {
			printf("Diz um numero:");
			scanf_s("%d", &p1);
			p2 = p1 % 2;
			if (p1 == 0)
			{
				printf("Numero invalido\n");
			}
			else if (p2 == 0)
			{
				printf("Numero e par\n");
			}
			else
			{
				printf("Numero e impar\n");
			}
		} while (p1 != 0);
		return 0;
}