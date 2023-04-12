#include <stdio.h>                                                    
#include <stdlib.h>                                                   
#include <locale.h>     

int main(void)
{                                                          
    setlocale(LC_ALL, "Portuguese");                       
                                                                                
    float nota1, nota2, media;                                   
            
    printf("\nDigite a primeira nota: ");
    scanf(" %f", &nota1);

    printf("\nDigite a segunda nota: ");
    scanf(" %f", &nota2);

    media = (nota1 + nota2)/2;

    printf("A media final eh: %.2f", media);
    
    return 0;

}