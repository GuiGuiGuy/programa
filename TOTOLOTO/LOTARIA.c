#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	srand(time(NULL));
	int num[5] = { rand() % 50 + 1,rand() % 50 + 1,rand() % 50 + 1,rand() % 50 + 1,rand() % 50 + 1, };
	int i,de[5];
	int quantosacertou=0;
	for (i = 0; i < 5; i++) {
		printf("%d ", num[i]);
	}
	for (i = 0; i < 5; i++) {
		printf("Diz um numero entra 1 a 50 :\n");
		scanf_s("%d", &de[i]);
		if (num[i] != de[i])
		{
			printf("Voce errou, o numero era %d\n", num[i]);
		}
		else
		{
			printf("Voce acertou!\n");
			quantosacertou++;
		}
	}
	printf("Voce acertou %d\n", quantosacertou);
	if (num[1] == de[1] && num[2] == de[2] && num[3] == de[3] && num[4] == de[4] && num[5] == de[5]) {
		printf("Voce ganhou o 1 milhao de bitcoins");
	}
}