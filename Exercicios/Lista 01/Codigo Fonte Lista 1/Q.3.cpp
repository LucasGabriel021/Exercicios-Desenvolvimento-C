//Construa um algoritmo que calcule a média aritmética de 3 números quaisquer
//fornecidos pelo usuário.

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
//Declaraçao das variaveis	
	double media;
	int nota1, nota2, nota3;

//Entrda das informaçoes	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite as trés notas:\n");
	scanf("%d %d %d", &nota1, &nota2, &nota3);

//Calculo da media 	
	media = (nota1 + nota2 + nota3) / 3;
	
//Resultado final	
	printf("\nCalculo da média entre os trés números: %.2lf\n\n",media);
	
//Pause do programa	
	system("pause");
	return 0;
}
