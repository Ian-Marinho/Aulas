#include <stdio.h>
int main(){
    int num;
    printf("Digite um número: ");
    scanf("%i", &num);
    if (num % 2 == 0) { // %x é o resto da divisão por x
        printf("Numero é par");
    } else {
        printf("Numero é impar");
    }
    return 0;
}