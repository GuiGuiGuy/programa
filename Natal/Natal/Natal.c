#include<stdio.h>
int main(void)
{
	char* Names[3] = { "Matheus","Dinis","Clara" };
	char* produtos[3] = { "Bolo","Pizza","Batatas" };
	int i, j, Qtd[3][3], QtTotal = 0, Tpes = 0, Tprod = 0;
	for (i = 0; 1 < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%s trouxe quantos %s\n", Names[i], produtos[j]);
			scanf_s("%d", &Qtd[i][j]);
			QtTotal = QtTotal + Qtd[i][j];
		}
	}
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				Tpes = Tpes + Qtd[i][j];
			}
			printf("A quantidade total de trazida por %s e: %i\n", Names[i], Tpes);
			Tpes = 0;
		}
		for (j = 0; j < 3; j++)
		{
			for (i = 0; i < 3; i++)
			{
				Tprod = Tprod + Qtd[i][j];
			}
			printf("A quantidade total de trazida de %s e: %i\n", produtos[i], Tprod);
			Tprod = 0;
		}
	printf("A quantidade total de produtos e: %i\n", QtTotal);
	return 0;
}