//Dado três valores, verificar se eles podem constituir os lados de um triângulo 
//(triângulo é uma figura geométrica onde cada lado é menor do que a soma dos outros dois lados).

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Funçao principal
int main()
{
//Declaraçao das variaveis	
	int lado1, lado2, lado3;

//Entrada e saida dos dados	
    setlocale(LC_ALL, "Portuguese");
	printf("Informe o primeiro lado:\n");
	scanf("%d", &lado1);
    printf("Informe o segundo lado:\n");
	scanf("%d", &lado2);
	printf("Informe o terceiro lado:\n");
	scanf("%d", &lado3);

//Condiçao para se formar um triangulo	
	if((lado1 < lado2 + lado3) && (lado2 < lado1 + lado3) && (lado3 < lado1 + lado2))
	  printf("\nÉ possível formar um triangulo!\n\n");
	else
	   printf("\nNão é possível formar um triângulo!\n\n");  


	
//Pause do sistema	
	system("pause");
	return 0;
}
