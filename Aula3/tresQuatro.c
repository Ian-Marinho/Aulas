#include <stdio.h>
int main(){
    int num;
    scanf("%i", &num);
    if (num % 3 == 0 && num % 4 == 0){
        printf("Numero divisivel por 3 e 4 ao mesmo tempo");
    } else{
        printf("Numero não é divisivel por 3 e 4 ao mesmo tempo");   
    }
    return 0;
}