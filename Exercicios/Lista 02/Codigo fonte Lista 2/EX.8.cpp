//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>// biblioteca  que compara  dois char

//Fun�ao principal
int main(){

//Declara�ao das variaveis
float altura, peso;
char sexo[10];

//Entrada e saida dos dados
    setlocale(LC_ALL, "Portuguese");
    printf("Informe sua altura:\n");
    scanf("%f", &altura);
    printf("Informe a qual sexo voc� pertence, se � homem ou mulher:\n");
    scanf("%s",&sexo );

//Calculos e condi�oes
    if (strcmp(("%s",sexo), "homem")==0){  //strcmp fin�ao para comparar oas char 
        peso = (72.5 * altura) - 58;
        printf("\nSeu peso ideal de acordo com sua altura e seu sexo �: %f\n\n", peso);
    }
    else if (strcmp(("%s",sexo), "mulher")==0){
        peso = (62.1 * altura) - 44.7;
        printf("\nSeu peso ideal de acordo com sua altura e seu sexo �: %f\n\n", peso);
    }
    else { 
    printf("vc digitou errado");
    }

//Pause do programa e retorno a fun�ao
    system("pause");
    return 0;
    }
