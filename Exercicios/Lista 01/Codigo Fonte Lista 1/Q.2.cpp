//Construa um algoritmo que calcule a �rea de um c�rculo cujo raio � fornecido pelo
//usu�rio (use �rea= 3.14 x raio2)

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Fun�ao principal
int main()
{
//Declara�ao da variavel
	setlocale(LC_ALL, "Portuguese");
	int raio;
	double area;
	
//Colocar as informa�oes	
	printf("Informe o raio para o c�lculo:\n");
	scanf("%d", &raio);
	
//Calculo	
	area = 3.14 * raio * raio;
	
//Saida das informa�oes
	printf("\nC�lculo da �rea: %.2lf!\n\n",area);
		
//Pause do programa	
	system("pause");
	return 0;
}


