//Construa um algoritmo que leia um número inteiro de horas e mostre ao usuário o
//correspondente em minutos e segundos destas horas.

//Bibliotecas abaixo
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Funçao principal abaixo
int main()
{
	//Declaraçao de variaveis
	int horas, minutos, segundos;
	
	//Informaçoes e leitura dos dados
	setlocale(LC_ALL, "Portuguese");
	printf("Digite as horas:\n");
	scanf("%d", &horas);
	
	//Contas a serem feitas
	minutos = horas * 60;
	segundos = horas * 3600;
	
	//Informaçao das horas em minutos e segundos, respectivamente
	printf("\nAs horas em minutos é: %d\n",minutos);
	printf("\n As horas em segundos é: %d\n\n ",segundos);
	
	//Pause do programa
	system("pause");
	return 0;
}
