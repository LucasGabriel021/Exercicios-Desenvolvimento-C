//Construa um algoritmo que calcule a m�dia aritm�tica de 3 n�meros quaisquer
//fornecidos pelo usu�rio.

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
//Declara�ao das variaveis	
	double media;
	int nota1, nota2, nota3;

//Entrda das informa�oes	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite as tr�s notas:\n");
	scanf("%d %d %d", &nota1, &nota2, &nota3);

//Calculo da media 	
	media = (nota1 + nota2 + nota3) / 3;
	
//Resultado final	
	printf("\nCalculo da m�dia entre os tr�s n�meros: %.2lf\n\n",media);
	
//Pause do programa	
	system("pause");
	return 0;
}
