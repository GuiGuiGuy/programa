#include<stdio.h>
int main(void)
{
	int qual;
	char *carros[3] = { "BMW","Mercedes","ferrari" };
	char sim;
	do
	{
		printf("Qual carro queres (0a2):");
		scanf_s("%d", &qual);
		if (qual < 0 || qual > 2)
		{
			printf("Numero invalido\n");
		}
		else
			printf("%s",carros[qual]);
			printf("Quares comtinuar S ou N\n");
			getchar();
			scanf_s("%c", &sim);
	} while (sim != 'N');
	return 0;
}