//Escreva um programa que leia o nome do funcion�rio, o sexo (F ou M),
//o n�mero de matr�cula do funcion�rio, o n�mero de horas trabalhadas,
//o valor que recebe por hora e calcule o sal�rio desse funcion�rio.
//A seguir, mostre todos os dados na tela, os dados de entrada e os dados de sa�da.

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

//Fun�ao principal
int main()
{
//Declara�ao das variaveis	
	char nome[50], sexo[10];
	int matricula, horastraba, valorporh, salario;
	
//Entrada das informa�oes 	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o nome do funcion�rio:\n");
	scanf("%s", &nome);
	printf("Digite o sexo:\n");
	scanf("%s", &sexo);
	printf("Informe os sete digitos da matr�cula do funcion�rio:\n");
	scanf("%d", &matricula);
	printf("Informe as horas trabalhadas:\n");
	scanf("%d", &horastraba);
	printf("Informe o valor das horas trabalhadas:\n");
	scanf("%d", &valorporh);
	
//Calculadora
	salario = (horastraba * valorporh);
	
//Saida dos dados
	printf("\n\nO nome do funcion�rio especificado eh: %s\n",nome);
	printf("\nO sexo �: %s\n",sexo);
	printf("\nA matr�cula informada �: %d\n",matricula);
	printf("\nSal�rio do funcionario referente as horas trabalhadas: $ %2.d\n\n",salario);
	
//Pause do sistema	
	system("pause");
	return 0;
	
}
