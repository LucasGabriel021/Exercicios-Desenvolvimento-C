//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>// biblioteca  que compara  dois char

//Funçao principal
int main(){

//Declaraçao das variaveis
float altura, peso;
char sexo[10];

//Entrada e saida dos dados
    setlocale(LC_ALL, "Portuguese");
    printf("Informe sua altura:\n");
    scanf("%f", &altura);
    printf("Informe a qual sexo você pertence, se é homem ou mulher:\n");
    scanf("%s",&sexo );

//Calculos e condiçoes
    if (strcmp(("%s",sexo), "homem")==0){  //strcmp finçao para comparar oas char 
        peso = (72.5 * altura) - 58;
        printf("\nSeu peso ideal de acordo com sua altura e seu sexo é: %f\n\n", peso);
    }
    else if (strcmp(("%s",sexo), "mulher")==0){
        peso = (62.1 * altura) - 44.7;
        printf("\nSeu peso ideal de acordo com sua altura e seu sexo é: %f\n\n", peso);
    }
    else { 
    printf("vc digitou errado");
    }

//Pause do programa e retorno a funçao
    system("pause");
    return 0;
    }
