#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	char estado;
	
	printf("Digite um estado de uma pessoa: ");
	scanf(" %c", &estado);
	
	switch(estado){
		case 'A':
			printf("\nA pessoa é Amazonense\n");
			break;
		case 'R':
			printf("\nA pessoa é Carioca\n");
			break;
		case 'P':
			printf("\nA pessoa é Paraense\n");
			break;
		case 'C':
			printf("\nA pessoa é Acreano\n");
			break;
		default:
			printf("\nSigla Inválida\n");
			break;
	}
	return 0;
}