//Construa um algoritmo que a partir da leitura de dois n�meros forne�a o resto e o
//quociente da divis�o do primeiro pelo segundo n�mero

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
//Declara�ao das variaveis	
	int primeiroN, segundoN, resto, divisao;

//Entrada dos dados	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite os dois n�meros:\n");
	scanf("%d %d", &primeiroN, &segundoN);

//Calculo
	divisao = (primeiroN / segundoN);
	 
	resto = primeiroN % 2;

//Saida das informa�oes	
	printf("\nO quociente �: %d\n",divisao);
	printf("\nO resto da divis�o �: %d\n\n",resto);
		
//Pausa do programa	
	system("pause");
	return 0;
}
