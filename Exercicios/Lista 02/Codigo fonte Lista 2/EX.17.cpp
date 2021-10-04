//Você tem um desejo incontrolável de descobrir quantos dias você já viveu em toda a sua vida,
//então faça um algoritmo que leia o ano de nascimento de uma pessoa e o ano atual, depois calcule
//e escreva o nome e o número de dias, aproximados, já vividos por essa pessoa.

//Bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//Funçao Principal
int main(){
	
//Declaraçao das variaveis 
int ano1, ano2, diferenca;
char nome[51];	
	
//Entrada e saida dos dados
    setlocale(LC_ALL, "Portuguese");
	printf("Informe seu nome:\n");
	fgets(nome,51,stdin);
	printf("\nInforme o ano que vc nasceu e o ano atual:\n");
	scanf("%d %d", &ano1, &ano2);
	
//Calculos	
	diferenca = (ano2 - ano1) * 365;
	
//Saida de informaçoes	
	printf("\nO nome da pessoa informada é: %s", nome);
	printf("\nEle ou ela viveu até hoje: %d dias\n\n", diferenca);	
	
//Pause do programa e retorno da funçao	
	system("pause");
	return 0;
}
