#include<stdio.h>
#include<locale.h>
int main(void)
{
	int p1;
	printf("Nota do aluno: ");
	scanf_s("%d", &p1);
	if (p1 < 9,5)
	{
		printf("Nao passou");
	}
	else
	{
		printf("Passou de ano");
	}
	return 0;
}