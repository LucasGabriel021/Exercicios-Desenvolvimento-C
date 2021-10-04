//Escrever um algoritmo que determine se um número inteiro qualquer é PAR ou IMPAR.

//Bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//Funçao principal
int main()
{

//Declaraçao das variaveis
int numero;
double resto;

//Entrada e saida dos dados
    setlocale(LC_ALL, "Portuguese");
	printf("Informe o número desejado:\n");
	scanf("%d", &numero);
	
//Contas	
	resto = (numero % 2);
	
//Verificaçao
	if (resto == 0) 
	    printf("\nO núnero %d é PAR!!\n\n", numero);
	else
	    printf("\nO número %d é IMPA!!\n\n", numero);    
	
//Pause do sistema e retorno da funçao	
	system("pause");
	return 0;
}
