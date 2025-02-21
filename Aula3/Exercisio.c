#include <stdio.h>
int main (){
    int a,b, c;
    scanf("%i %i %i", &a, &b, &c);
    int maior = a;
    if (b > maior){
        maior = b;
    } else if (c > maior){
        maior = c;
    }
    printf("O maior valor é %i", maior);
    if (a >b && a >c){
        a = maior;
    }
    return 0;
}
