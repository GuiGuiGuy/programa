#include<stdio.h>
int main(void)
{
	int vetor[10],i,nega=0,total=0;
	char to;
	for (i = 0; i < 10; i++)
	{
		printf("Diz um numero:");
		scanf_s("%d", &vetor[i]);
		if (vetor[i] < 0) 
		{
			nega++;
			total += vetor[i];
		}
	}
	printf("Tu queres saber quantos foram dos negativos ou a soma (N ou T)\n");
	getchar();
	scanf_s("%c", &to);
	if (to == 'N')
	{
		printf("Foram: %d\n", nega);
	}
	else
	{
		printf("Soma: %d", total);
	}
	return 0;
}