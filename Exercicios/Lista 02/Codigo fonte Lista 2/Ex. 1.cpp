//Construa um algoritmo que a partir da leitura da velocidade e placa do carro,
// avise ao motorista somente se ele ser� multado,quando estiver trafegando no
//Eixo Rodovi�rio (limite de 80 km/h).

//Bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//Fun�ao principal
int main()
{

//Declara�ao de variaveis	
	int velocidade;
	char placa;

//Entrada e saida de informa�oes
	setlocale(LC_ALL, "Portuguese");
	printf("Informe a placa do carro com �s 3 letras e 5 numeros:\n");
	scanf("%s", &placa);
	printf("Informe a velocidade do carro em Km/h:\n");
	scanf("%d", &velocidade);
	
	if (velocidade > 80)
	     printf("\nO carro foi multado!\n\n");
	else 
	     printf("\nO carro n�o foi multado!\n\n");

//Pause e retorno da fun�ao
	system("pause");
	return 0;
}
