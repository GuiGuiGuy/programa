#include<stdio.h>
int main(void) 
{
	char p;
	int p1, p2;
	printf("Queres Somar(S),Subtrair(Su),Multiplicar(M) ou Dividir(D): ");
	scanf_s("%c", &p);
	printf("Um Numero: ");
	scanf_s("%d", &p1);
	printf("Um Numero: ");
	scanf_s("%d", &p2);
	if (p == 'S') 
	{
		printf("%d+%d=%d", p1, p2, p1 + p2);
	}
	if (p == 'SU')
	{
		printf("%d-%d=%d", p1, p2, p1 - p2);
	}
	if (p == 'M')
	{
		printf("%dx%d=%d", p1, p2, p1 * p2);
	}
	if (p == 'D')
	{
		printf("%d:%d=%d", p1, p2, p1 / p2);
	}
}