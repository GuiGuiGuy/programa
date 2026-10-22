#include<stdio.h>
int main(void)
{
	int p1,p2;
	do {
		printf("Diz um numero da lista: ");
		scanf_s("%d", &p1);
		printf("Diz um numero da lista: ");
		scanf_s("%d", &p2);
	} while (p1 != 0 || p2 == 0);
	
}