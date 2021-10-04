//Construa um algoritmo que a partir da leitura de dois números forneça o resto e o
//quociente da divisão do primeiro pelo segundo número

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
//Declaraçao das variaveis	
	int primeiroN, segundoN, resto, divisao;

//Entrada dos dados	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite os dois números:\n");
	scanf("%d %d", &primeiroN, &segundoN);

//Calculo
	divisao = (primeiroN / segundoN);
	 
	resto = primeiroN % 2;

//Saida das informaçoes	
	printf("\nO quociente é: %d\n",divisao);
	printf("\nO resto da divisâo é: %d\n\n",resto);
		
//Pausa do programa	
	system("pause");
	return 0;
}
