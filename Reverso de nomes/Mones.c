#include<stdio.h>
int main(void)
{
	char* nomes[5] = {"Dinis","Ze","Goncalo","Joao","GUI"};
	int i,j;
	for (i = 4; i >= 0 ; i--) {
		
		printf("%s\n", nomes[i]);
	}
	return 0;
}