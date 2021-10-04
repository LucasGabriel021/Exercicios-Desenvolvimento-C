//Alterar o exerc�cio do tri�ngulo (exerc�cio 3), de forma que o algoritmo apresente no caso
//de tri�ngulo o seu tipo: equil�tero (todos os lados s�o iguais), is�sceles (dois lados iguais)
//ou um outro tri�ngulo qualquer (escaleno). Apresente o algoritmo, fazendo o teste do algoritmo
//(chinesinho) ao lado.

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Fun�ao principal
int main(){
	
//Declara�ao das variaveis 
char escaleno, isoceles, equilatero;
int lado1, lado2, lado3;

//Entrada e saida de informa�oes
    setlocale(LC_ALL, "Portuguese");
    printf("Informe o primeiro lado do tri�ngulo:\n");	
	scanf("%d", &lado1);
	printf("Informe o segundo lado do tri�ngulo:\n");	
	scanf("%d", &lado2);
	printf("Informe o terceiro lado do tri�ngulo:\n");	
	scanf("%d", &lado3);

//Condi�oes	
	if ((lado1 == lado2 ) && (lado2 == lado3))
	    printf("\nO tri�ngulo � equil�tero!\n\n");
    else if ((lado1 != lado2) && (lado2 != lado3) && (lado3 != lado1))
        printf("\nO tri�ngulo � escaleno!\n\n");
    else if ((lado1 == lado2) || (lado2 == lado3))
	     printf("\nO tri�ngulo � is�celes\n\n");    
	
//Pause do programa e retorno a fun�ao 	
	system("pause");
	return 0;
}
