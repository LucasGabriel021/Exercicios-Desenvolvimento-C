//Fazer um algoritmo que leia três valores, determine e imprima o maior deles.

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Funçao principal
int main(){
	
//Declaraçao das variaveis 
int valor1, valor2, valor3;

//Entrada e saida de dados
    setlocale(LC_ALL, "Portuguese"); 
	printf("Informe o primeiro número:\n");
	scanf("%d", &valor1);
	printf("Informe o segundo número:\n");
	scanf("%d", &valor2);
	printf("Informe o terceiro número:\n");
	scanf("%d", &valor3);
	
//Condiçoes 
	if ((valor1 > valor2) && (valor1 > valor3))
	    printf("\nO maior número no qual você digitou é: %d\n\n", valor1);
	else if ((valor2 > valor1) && (valor2 > valor3))    
	    printf("\nO maior número no qual você digitou é: %d\n\n", valor2);
	else if ((valor3 > valor1) && (valor3 > valor2))
	    printf("\nO maior número no qual você digitou é: %d\n\n", valor3);
	
//Pause do programa e retorno a funçao	
	system("pause");
	return 0;
}
