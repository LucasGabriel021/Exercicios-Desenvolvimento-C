//Dado tr�s valores, verificar se eles podem constituir os lados de um tri�ngulo 
//(tri�ngulo � uma figura geom�trica onde cada lado � menor do que a soma dos outros dois lados).

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Fun�ao principal
int main()
{
//Declara�ao das variaveis	
	int lado1, lado2, lado3;

//Entrada e saida dos dados	
    setlocale(LC_ALL, "Portuguese");
	printf("Informe o primeiro lado:\n");
	scanf("%d", &lado1);
    printf("Informe o segundo lado:\n");
	scanf("%d", &lado2);
	printf("Informe o terceiro lado:\n");
	scanf("%d", &lado3);

//Condi�ao para se formar um triangulo	
	if((lado1 < lado2 + lado3) && (lado2 < lado1 + lado3) && (lado3 < lado1 + lado2))
	  printf("\n� poss�vel formar um triangulo!\n\n");
	else
	   printf("\nN�o � poss�vel formar um tri�ngulo!\n\n");  


	
//Pause do sistema	
	system("pause");
	return 0;
}
