//Alterar o exercício do triângulo (exercício 3), de forma que o algoritmo apresente no caso
//de triângulo o seu tipo: equilátero (todos os lados são iguais), isósceles (dois lados iguais)
//ou um outro triângulo qualquer (escaleno). Apresente o algoritmo, fazendo o teste do algoritmo
//(chinesinho) ao lado.

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Funçao principal
int main(){
	
//Declaraçao das variaveis 
char escaleno, isoceles, equilatero;
int lado1, lado2, lado3;

//Entrada e saida de informaçoes
    setlocale(LC_ALL, "Portuguese");
    printf("Informe o primeiro lado do triângulo:\n");	
	scanf("%d", &lado1);
	printf("Informe o segundo lado do triângulo:\n");	
	scanf("%d", &lado2);
	printf("Informe o terceiro lado do triângulo:\n");	
	scanf("%d", &lado3);

//Condiçoes	
	if ((lado1 == lado2 ) && (lado2 == lado3))
	    printf("\nO triângulo é equilátero!\n\n");
    else if ((lado1 != lado2) && (lado2 != lado3) && (lado3 != lado1))
        printf("\nO triângulo é escaleno!\n\n");
    else if ((lado1 == lado2) || (lado2 == lado3))
	     printf("\nO triângulo é isóceles\n\n");    
	
//Pause do programa e retorno a funçao 	
	system("pause");
	return 0;
}
