//Voc� tem um desejo incontrol�vel de descobrir quantos dias voc� j� viveu em toda a sua vida,
//ent�o fa�a um algoritmo que leia o ano de nascimento de uma pessoa e o ano atual, depois calcule
//e escreva o nome e o n�mero de dias, aproximados, j� vividos por essa pessoa.

//Bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//Fun�ao Principal
int main(){
	
//Declara�ao das variaveis 
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
	
//Saida de informa�oes	
	printf("\nO nome da pessoa informada �: %s", nome);
	printf("\nEle ou ela viveu at� hoje: %d dias\n\n", diferenca);	
	
//Pause do programa e retorno da fun�ao	
	system("pause");
	return 0;
}
