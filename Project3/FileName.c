#include<stdio.h>
int main(void)
{
	int p1,p2;
	do {
		printf("Diz um numero :");
		scanf_s("%i", &p1);
		do {
			p2 = p1 % 2;
			if (p2 != 1)
			{
				printf("O numero e impar\n");
			}
			if (p2 = 0)
			{
				printf("O numero e par\n");
			}
		} while (p2 != 0 || p2 != 1);
	} while (p1 != 0);
	printf("O numero e 0 entao sai do programa");
	return 0;
}