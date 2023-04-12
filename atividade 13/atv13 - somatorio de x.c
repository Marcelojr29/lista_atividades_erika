#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	float x, s = 0;
    int i, sinal = 1;

    printf("Digite um valor para x: ");
    scanf("%f", &x);

    for(i = 25; i >= 1; i--) {
        s += sinal * pow(x, i) / i;
        sinal *= -1; // alterna o sinal a cada termo
    }

    printf("O resultado do somatório é: %.2lf\n", s);

    return 0;
}