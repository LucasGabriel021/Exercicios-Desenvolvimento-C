//Construa um algoritmo que leia um n�mero inteiro de horas e mostre ao usu�rio o
//correspondente em minutos e segundos destas horas.

//Bibliotecas abaixo
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Fun�ao principal abaixo
int main()
{
	//Declara�ao de variaveis
	int horas, minutos, segundos;
	
	//Informa�oes e leitura dos dados
	setlocale(LC_ALL, "Portuguese");
	printf("Digite as horas:\n");
	scanf("%d", &horas);
	
	//Contas a serem feitas
	minutos = horas * 60;
	segundos = horas * 3600;
	
	//Informa�ao das horas em minutos e segundos, respectivamente
	printf("\nAs horas em minutos �: %d\n",minutos);
	printf("\n As horas em segundos �: %d\n\n ",segundos);
	
	//Pause do programa
	system("pause");
	return 0;
}
