//Efetuar a leitura de um n�mero e apresent�-lo como o seu m�dulo
//(somente seu valor absoluto) elaborando os c�lculos matem�ticos para isso.

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Fun�ao principal
int main()
{
	
//Declara�ao das variaveis	
	int modulo, numero;
	
//Entrada e saida dos dados	
    setlocale(LC_ALL, "Portuguese");
	printf("Digite quarquer n�mero:\n");
	scanf("%d", &numero);
	
//Condi�oes	
	if ( numero < 0)
		modulo = numero * -1;
	else
	    modulo = numero;
	printf("\nO modulo do n�mero que vc digitou �: %d!!!\n\n", modulo);
	
//Pause do programa	
	system("pause");
	return 0;
}

