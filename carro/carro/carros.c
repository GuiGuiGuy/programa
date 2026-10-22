#include<stdio.h>

int main(void)
{
	int p1, p2, p3;
	float o2;
	printf("Diz primeiro numero: "); scanf_s("%d", &p1);
	printf("Diz segumdo numero: "); scanf_s("%d", &p2);
	printf("Diz terceiro numero : "); scanf_s("%d", &p3);
	o2 = p3 / 100;
	printf("E: %.f\n", o2);

	return 0;
}