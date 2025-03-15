#include <stdio.h> //biblioteca de input e output
#include <stdbool.h> //biblioteca de booleanos
#include <stdlib.h> //biblioteca de funções de alocação de memória (standard)
#include <string.h> //biblioteca de manipulação de strings
#include <ctype.h> //biblioteca de funções de manipulação de caracteres
#include <math.h> //biblioteca de funções matemáticas
#include <time.h> //biblioteca de funções de manipulação de tempo
#include <locale.h> //biblioteca de funções de manipulação de localidade

//função (de adição) (criando função com retorno)
int add(int myNumber) {
    static int total = 0; //valoer statico que não é resetado
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
    char letra = 'a'; //um caracterer
    char palavra[10] = "palavra";//uma string usando char para falar q é char*10
    bool verdadeiro = 1; //verdadeiro
    bool falso = 0; //falso
    const int constante = 10; //constante (valor imutavel)

    //caso especial enum
    enum dias { //dias é a o nome do enum
        domingo, segunda, terca //valores possiveis para enum
    };
    enum dias dia = domingo; //cria variavel do enum


    //impressão de variáveis
    printf("%i", numero++); //imprime o valor de numero e depois incrementa
    printf("%i", ++numero); //incrementa o valor de numero e depois imprime

    printf("Hoje é %d", dia+1);//imprime o valor do enum especificado

    printf("O valor de numero é: %d\n", numero);//%d ou %i para int
    printf("O valor de numero2 é: %f\n", numero2); //%f para float
    printf("O valor de letra é: %c\n", letra);//%c para char
    printf("O valor de PI é: %lfd\n", PI);//%lf ou ld para double
    printf("O valor de palavra é: %s\n", palavra);//%s para string (mais de um caractere)
    
    printf("O valor de verdadeiro é: %d\n", verdadeiro);//%d para bool (pois retorna 1 ou 0)
    printf("O valor de falso é: %d\n", falso); //%d para bool (pois retorna 1 ou 0)

    //entrada de dados  
    scanf("%d", & numero); //entrada de dados
    printf("O valor de numero é: %d\n", numero);//%d ou %i para int
    getchar(); //limpar buffer do teclado (se tiver algo escrito ele vai ser apagado para que se escreva sem ter coisa escrita ja)

    //entrada de dados com string
    char nome[20]; //cria variavel de string com [x] caracteres
    printf("Digite seu nome: "); 
    
    scanf("%s", nome); //scanf pegar string (sem espaço)
    getchar(); //limpar buffer do teclado (se tiver algo escrito ele vai ser apagado para que se escreva sem ter coisa escrita ja)
    
    scanf("%[^\n]", nome); //scanf pegando string. [^\n] é para pegar até o enter (mudar de linha)
    getchar(); //limpar buffer do teclado (se tiver algo escrito ele vai ser apagado para que se escreva sem ter coisa escrita ja)
    
    fgets(nome, 20, stdin); //fgets pegar string (com espaço) e stdin é a entrada padrão
    getchar(); //limpar buffer do teclado (se tiver algo escrito ele vai ser apagado para que se escreva sem ter coisa escrita ja)
    //nao colocar & quando escrever string no scanf ou no fgets
    

    
    //restringindo casas decimais
    printf("O numero é %.2f\n", numero2); //%.2f para float com 2 casas decimais

    

    //condicionais
    if (numero > 10) { //se (condição)
        printf("O numero é maior que 10\n");// { o que fazer se condição for verdadeira}
    } else if (numero == 10) { //senão se (outra condição)
        printf("O numero é igual a 10\n");//o que fazer se a nova condição for verdadeira
    } else { //se nenhuma das condições anteriores for verdadeira
        printf("O numero é menor que 10\n"); //fazer o que está aqui
    }

    
    if (numero >0 || numero < 10) { //se (condição) ou (outra condição) pode ser tbm || (or)
        printf("O numero é maior que 0 e menor que 10\n");// { o que fazer se condição for verdadeira}
    } 

    if (numero >=10 && numero >= 0) { //se (condição) e (outra condição) pode ser tbm && (e)
        printf("O numero é maior ou igual a 10 e maior ou igual a 0\n"); //o que fazer se a nova condição for verdadeira
    }
    //operador tenario
    int a,b,c;
    a=2;
    b=3;
    c = (a >b)? a :b; //operador tenario compara se condição verdadeira. Se sim, o valor se torna o primeiro antes de :, se não ele vai depois do :


    //loops de repetição

    while (numero > numero2) //while
    {
        printf("while\n");
    }
    
    do { //do while
        printf("do while\n");
        numero2++;
    } while (numero > numero2);

    for (int cont= 0; cont < 10; cont++) //for (inicialização; condição; incremento)
    {
        printf("for\n");
        if (cont == 5){
            continue; //pula o resto do codigo e volta para o inicio do loop

        } else if (cont == 8){
            break; //para o loop
        }
    }
    
    

        
      /* 
    >= maior ou igual
    <= menor ou igual
    == igual
    != diferente
    */
    
    //switch
    switch (numero) //escolha (variavel) 
    {
    case 2: //caso (variavel) igual a valor: //se for um char usar 'valor' não usar "valor"
        printf("caso1");
        break;//parar o switch
    case 3:
        printf("Caso2");
        break;
    
    default: //caso não tenha nenhum caso anterior
        printf("nenhum caso");
        break;
    }
    //estruturas de repetição
    int i = 1;
    while (i<100){ //enquanto (condição) for verdadeira
        printf("Numero %i/n", i); //imprimir toda hora i com um numero maior
        i++; //incremento de um por execução
    }

    //stdlib & time (gerar num aleatorio)
    srand(time(NULL)); //faz a seed ro rand ser o tempor atual
    int aleatorio = rand() % 10; //gera um numero aleatorio entre 0 e 10
    printf("O numero aleatorio é: %d\n", aleatorio);
    int aleatorio2 = rand() % 10 + 1; //gera um numero aleatorio entre 1 e 10
    printf("O numero aleatorio é: %d\n", aleatorio2);
    int aleatorio3 = rand() % 21 -10; //gera um numero aleatorio entre -10 e 10
    printf("O numero aleatorio é: %d\n", aleatorio3);
    

    //matematica
    printf("O valor de PI é: %f\n", M_PI);//valor de PI com import math (15 casas decimais)
    printf("O valor de 2 elevado a 3 é: %f\n", pow(2,3));//pow = (numero a ser elevado, potencia)
    printf("O valor de raiz quadrada de 9 é: %f\n", sqrt(9));//sqrt = raiz quadrada
    
    printf("O valor de 9 arredondado é: %f\n", round(9.5));//round = arredondar
    printf("O valor de 9 truncado é: %f\n", trunc(9.5));//trunc = truncar (cortar as casas decimais, retornando numero inteiro)
    printf("O valor arrendondado de 9.5 é: %f\n", floor(9.5));//floor = arredondar para baixo
    printf("O valor arrendondado de 9.5 é: %f\n", ceil(9.5));//ceil = arredondar para cima
    
    printf("O valor absoluto é: %f\n", fabs(-9.5));//fabs = valor absoluto
    
    printf("O maior valor é: %f\n", fmax(9.5, 2));//fmax = maior valor entre os dois valore
    printf("O menor valor é: %f\n", fmin(9.5, 2));//fmin = menor valor entre os dois valores
    printf("A diferença de 9.5 e 2 é: %f\n", fdim(9.5, 2));//fdim = diferença entre dois valores
    
    printf("A multiplicação de 9.5 por 2 e soma 3 é: %f\n", fma(9.5, 2, 3));//fma = multiplicação e soma. (numero1 (a ser multiplicado), numero2 (multiplicador), numero3(a ser somado))
    
    printf("O valor do resto da divisão de -9.5 e 2 é: %f\n", fmod(-9.5, 2));//fmod = resto da divisão de float, mas sempre retorna o valor do mesmo sinal do primeiro numero(numero a ser dividido)
    printf("O valor do resto da divisão de 9.5 por 2 é: %f\n", remainder(9.5, 2));//remainder = resto da divisão de float. pode retornar negativo
    printf("O valor do resto da divisao de 9 por 2 é: %i\n", 9%2);//%x é o resto da divisão por x. sendo ela positiva e inteira.
   
    printf("O valor de 9 truncado é: %f\n", copysign(9.5, -2));//copysign = copia o sinal do segundo numero para o primeiro   
    //resto
    int num;
    printf("Digite um número: ");
    scanf("%i", &num);
    if (num % 2 == 0) { // %x é o resto da divisão por x
        printf("Numero é par");
    } else {
        printf("Numero é impar");
    }
    getchar(); //limpar buffer do teclado (se tiver algo escrito ele vai ser apagado para que se escreva sem ter coisa escrita ja)
    
    
    //retorno da função
    return 0; //se voltar 1 tem erro, se voltar 0 está tudo certo
}



/*comandos de compilação
gcc (nome do arquivo.c) -o (nome do arquivo executavel a ser criado)
./nome do arquivo executavel
*/

/*Comandos do github

git init (inicia o git)
git add . (adiciona todos os arquivos)
git commit -m "mensagem" (comita os arquivos)
git remote add origin (link do repositorio) (adiciona o repositorio remoto)
git push -u origin master (envia os arquivos para o repositorio)
git pull (puxa os arquivos do repositorio)
git clone (link do repositorio) (clona o repositorio)
git status (mostra o status dos arquivos)
git log (mostra o log de commits)
git branch (mostra as branchs)
git checkout -b (nome da branch) (cria uma branch)
git checkout (nome da branch) (muda para a branch)
git merge (nome da branch) (faz merge de duas branchs)
git branch -d (nome da branch) (deleta a branch)
git push origin --delete (nome da branch) (deleta a branch remota)
git config --global user.email "  (configura o email do usuario)
git config --global user.name "  (configura o nome do usuario)
git reset --hard (volta para o ultimo commit)
git reset --hard (hash do commit) (volta para o commit especificado)
git reset --soft (hash do commit) (volta para o commit especificado)
git reset --mixed (hash do commit) (volta para o commit especificado)
git reset --hard HEAD~1 (volta para o commit anterior)
git reset --soft HEAD~1 (volta para o commit anterior)
git reset --mixed HEAD~1 (volta para o commit anterior)
git reflog (mostra o log de commits)     
*/

//Feito por: Ian Vinicius Marinho Malta