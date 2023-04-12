#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    
    float s = 0.0;
    int i;
    
    for (i = 0; i < 100; i++) {
        s += (70.0 - i) / (7.0 + i*7.0);
    }
    
    printf("Valor da série com 100 termos: %f\n", s);
    
    return 0;
}