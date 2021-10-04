//Construa um algoritmo que a partir da leitura da velocidade e placa do carro,
// avise ao motorista somente se ele será multado,quando estiver trafegando no
//Eixo Rodoviário (limite de 80 km/h).

//Bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//Funçao principal
int main()
{

//Declaraçao de variaveis	
	int velocidade;
	char placa;

//Entrada e saida de informaçoes
	setlocale(LC_ALL, "Portuguese");
	printf("Informe a placa do carro com às 3 letras e 5 numeros:\n");
	scanf("%s", &placa);
	printf("Informe a velocidade do carro em Km/h:\n");
	scanf("%d", &velocidade);
	
	if (velocidade > 80)
	     printf("\nO carro foi multado!\n\n");
	else 
	     printf("\nO carro não foi multado!\n\n");

//Pause e retorno da funçao
	system("pause");
	return 0;
}
