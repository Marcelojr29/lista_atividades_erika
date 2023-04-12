#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int t1 = 0, t2= 1;
    int t3; 

    printf("Os 10 primeiros termos da série Fettuccine são:\n");
    printf("%d\n%d\n", t1, t2); 

    for (int i = 3; i <= 10; i++) { 
        t3 = t1 - t2; 
        printf("%d\n", t3); 
        t1 = t2; 
        t2 = t3; 
    }
    return 0;
}