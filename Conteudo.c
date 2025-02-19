#include <stdio.h> //biblioteca de input e output
#include <stdbool.h> //biblioteca de booleanos
#include <stdlib.h> //biblioteca de funções de alocação de memória (standard)
#include <string.h> //biblioteca de manipulação de strings
#include <ctype.h> //biblioteca de funções de manipulação de caracteres
#include <math.h> //biblioteca de funções matemáticas
#include <time.h> //biblioteca de funções de manipulação de tempo
#include <locale.h> //biblioteca de funções de manipulação de localidade

//função (de adição)
int add(int myNumber) {
    static int total = 0;
    total += myNumber;
    return total;
  }
  
//forma incial
int main() {

    //função de adição (add)
    printf("%d\n", add(1)); // 1
    printf("%d\n", add(2)); // 3

    //declaração de variáveis
    int numero = 10;
    float numero2 = 10.5; //até 7 casas decimais
    double PI = 3.14159265; //até 15 casas decimais
    char letra = 'a'; //um caractere
    char tal = "palavra"; //uma string
    char palavra[10] = "palavra";//uma string
    bool verdadeiro = 1; //verdadeiro
    bool falso = 0; //falso
    const int constante = 10; //constante (valor imutavel)

    //caso especial enum
    enum dias { //dias é a o nome do enum
        domingo, segunda, terca //valores possiveis para enum
    };
    enum dias dia = domingo; //cria variavel do enum


    //impressão de variáveis
    printf("Hoje é %d", dia+1);//imprime o valor do enum especificado
    printf("O valor de numero é: %d\n", numero);//%d ou %i para int
    printf("O valor de numero2 é: %f\n", numero2); //%f para float
    printf("O valor de letra é: %c\n", letra);//%c para char
    printf("O valor de PI é: %ld\n", PI);//%lf ou ld para double
    printf("O valor de tal é: %s\n", tal);//%s para string (mais de um caractere)
    printf("O valor de palavra é: %s\n", palavra);//%s para string (mais de um caractere)
    printf("O valor de verdadeiro é: %d\n", verdadeiro);//%d para bool (pois retorna 1 ou 0)
    printf("O valor de falso é: %d\n", falso); //%d para bool (pois retorna 1 ou 0)

    //entrada de dados  
    scanf("%d", & numero); //entrada de dados
    printf("O valor de numero é: %d\n", numero);//%d ou %i para int

    //mexendo com static
    


    //retorno da função
    return 0; //se voltar 1 ta errado
}