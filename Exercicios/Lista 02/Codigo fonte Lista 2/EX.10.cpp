//Fa�a um algoritmo em portugu�s estruturado que leia tr�s valores num�ricos e
//encontre qual o menor deles, mostrando-o no final.Fa�a o chinesinho ao lado do seu algoritmo.

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Fun�ao principal
int main(){
	
//Declara�ao as variaveis
	int valor1, valor2, valor3;
	
//Entrada e saida dos dados
    setlocale(LC_ALL, "Portuguese");
	printf("Informe o primeiro valor:\n");
	scanf("%d", &valor1);
	printf("Informe o segundo valor:\n");
	scanf("%d", &valor2);	
	printf("Informe o terceiro valor:\n");
	scanf("%d", &valor3);
	
//Condi�oes
    if ((valor1 < valor2 ) && (valor1 < valor3))
	   printf("\nO menor valor �: %d\n\n", valor1);
	else 
	   if ((valor2 < valor1) && (valor2 < valor3))
	   printf("\nO menor valor �: %d\n\n", valor2);
	else if((valor3 < valor1) && (valor3 < valor2))
	   printf("\nO menor valor �: %d\n\n", valor3);      	
	
//Pause do programa e retorno a fun�ao	
	system("pause");
	return 0;
}
