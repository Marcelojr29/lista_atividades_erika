#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL, "Portuguese");   
    int i;
    for(i = -100; i<= 300; i++){
        printf(" %d", i);
    }
    return 0;
}