#include<stdio.h>
int main(void) 
{
	int i;
	printf("Diz um numero: ");
	scanf_s("%d", &i);
	for (;i>=0;i--)
	{
		printf("%d\n", i);
	}
	return 0;
}