//Fazer um algoritmo para auxiliar um construtor a descobrir a quantidade de rolos e a quantidade de metros avulsos de fios que ele precisa adquirir.
// Sabe-se que o construtor tem a quantidade total de fios em metros a serem utilizados na instala��o el�trica da obra e que cada rolo de fio tem 50 metros.

//Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Fun�ao principal
int main()
{
//Declara�ao das variaveis	
	int metros, rolos, avulsos;
	
//Entrada dos dados 	
	setlocale(LC_ALL, "Portuguese");
	printf("Informe o n�mero de metros:\n");
	scanf("%d",&metros);

//Conta	
	rolos = metros /50;
	avulsos = metros *50;
	
//Resultado final	
	printf("N�mero de rolos:%d, n�mero de metros avulsos:%d\n\n",rolos,avulsos);
	
//Pause do sistema	
	system("pause");
	return 0;
}
