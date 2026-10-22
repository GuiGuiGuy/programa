#include<stdio.h>
int main(void)
{
	int p1,p2,p3;
	printf("Diz um numero: ");
	scanf_s("%d", &p1);
	p2 = p1 % 3;
	p3 = p1 % 5;
	if (p1 == 0) {
		printf("Numero invalido");
	}
	else if (p2 == 0&& p3==0) {
		printf("Sao ambos");
	}
	else if (p2 == 0) {
		printf("E de 3");
	}
	else if (p2 > 0 || p2 < 0 && p3 == 0) {
		printf("Nao e de 3 mas e de 5");
	}
	else if (p3 > 0 || p3 < 0) {
		printf("Nao e de 5 mas e 3");
	}
	else
	{
		printf("Nao e de nenhum");
	}
	return 0;
}