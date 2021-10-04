//Efetuar a leitura de um número e apresentá-lo como o seu módulo
//(somente seu valor absoluto) elaborando os cálculos matemáticos para isso.

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Funçao principal
int main()
{
	
//Declaraçao das variaveis	
	int modulo, numero;
	
//Entrada e saida dos dados	
    setlocale(LC_ALL, "Portuguese");
	printf("Digite quarquer número:\n");
	scanf("%d", &numero);
	
//Condiçoes	
	if ( numero < 0)
		modulo = numero * -1;
	else
	    modulo = numero;
	printf("\nO modulo do número que vc digitou é: %d!!!\n\n", modulo);
	
//Pause do programa	
	system("pause");
	return 0;
}

