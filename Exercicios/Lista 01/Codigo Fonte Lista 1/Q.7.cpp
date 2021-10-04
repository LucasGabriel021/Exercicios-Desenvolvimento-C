//Escreva um programa que leia o nome do funcionário, o sexo (F ou M),
//o número de matrícula do funcionário, o número de horas trabalhadas,
//o valor que recebe por hora e calcule o salário desse funcionário.
//A seguir, mostre todos os dados na tela, os dados de entrada e os dados de saída.

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

//Funçao principal
int main()
{
//Declaraçao das variaveis	
	char nome[50], sexo[10];
	int matricula, horastraba, valorporh, salario;
	
//Entrada das informaçoes 	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o nome do funcionário:\n");
	scanf("%s", &nome);
	printf("Digite o sexo:\n");
	scanf("%s", &sexo);
	printf("Informe os sete digitos da matrícula do funcionário:\n");
	scanf("%d", &matricula);
	printf("Informe as horas trabalhadas:\n");
	scanf("%d", &horastraba);
	printf("Informe o valor das horas trabalhadas:\n");
	scanf("%d", &valorporh);
	
//Calculadora
	salario = (horastraba * valorporh);
	
//Saida dos dados
	printf("\n\nO nome do funcionário especificado eh: %s\n",nome);
	printf("\nO sexo é: %s\n",sexo);
	printf("\nA matrícula informada é: %d\n",matricula);
	printf("\nSalário do funcionario referente as horas trabalhadas: $ %2.d\n\n",salario);
	
//Pause do sistema	
	system("pause");
	return 0;
	
}
