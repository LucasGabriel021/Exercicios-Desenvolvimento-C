//Escrever um algoritmo que determine se um n�mero inteiro qualquer � PAR ou IMPAR.

//Bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//Fun�ao principal
int main()
{

//Declara�ao das variaveis
int numero;
double resto;

//Entrada e saida dos dados
    setlocale(LC_ALL, "Portuguese");
	printf("Informe o n�mero desejado:\n");
	scanf("%d", &numero);
	
//Contas	
	resto = (numero % 2);
	
//Verifica�ao
	if (resto == 0) 
	    printf("\nO n�nero %d � PAR!!\n\n", numero);
	else
	    printf("\nO n�mero %d � IMPA!!\n\n", numero);    
	
//Pause do sistema e retorno da fun�ao	
	system("pause");
	return 0;
}
