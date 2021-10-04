//Construa um algoritmo que calcule a área de um círculo cujo raio é fornecido pelo
//usuário (use área= 3.14 x raio2)

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Funçao principal
int main()
{
//Declaraçao da variavel
	setlocale(LC_ALL, "Portuguese");
	int raio;
	double area;
	
//Colocar as informaçoes	
	printf("Informe o raio para o cálculo:\n");
	scanf("%d", &raio);
	
//Calculo	
	area = 3.14 * raio * raio;
	
//Saida das informaçoes
	printf("\nCálculo da área: %.2lf!\n\n",area);
		
//Pause do programa	
	system("pause");
	return 0;
}


