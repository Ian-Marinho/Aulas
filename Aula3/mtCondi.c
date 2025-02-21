#include <stdio.h>
int main (){
    int num1, num2, calculo;
    printf("Escreva dois numeros\n");
    scanf("%i %i", &num1, &num2);
    if (num1 > 45 || num2 >45){
        calculo = num1 + num2;
        printf("%i",calculo);
    } else if (num1 > 20 && num2 >20){
        if (num1>num2){
            calculo = num1-num2;
             printf("%i",calculo);
        } else {
            calculo = num2 - num1;
            printf("%i", calculo);
        }
    } if ((num1 <10 && num2 != 0 )||(num2 <10 && num2 != 0)){
        calculo = num1/num2;
        printf("%i",calculo);
    } else {
        printf("Nome");
    }
    return 0;
}