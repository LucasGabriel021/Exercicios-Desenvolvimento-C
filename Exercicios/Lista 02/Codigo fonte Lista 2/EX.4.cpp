//Desenvolver um algoritmo que leia o nome e o sexo de uma pessoa e 
//apresente como saída uma das seguintes mensagens:“Ilmo. Sr.”, para o sexo masculino ou “Ilma. Sra.”
//para o sexo feminino,acrescentando o nome em seguida. 

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//Funçao principal
int main()
{
//Declaraçao da variavel	
	char nome[51], sexo[10];

//Entrada e saida dos dados
    setlocale(LC_ALL, "Portuguese");
    printf("Informe seu nome:\n");
	fgets(nome, 51, stdin);
	printf("\nInforme seu sexo, se é homem ou mulher:\n");
	scanf("%s", &sexo);
	
//Condiçoes
    if (strcmp(("%s", sexo), "homem")==0){
    	printf("\nBem vindo de volta Ilmo Sr. %s\n\n", nome);}
	else
	    printf("\nBem vindo de volta Ilmo Sra. %s\n\n", nome);
	    
//Pause e retorno da funçao	
	system("pause");
	return 0;
}
