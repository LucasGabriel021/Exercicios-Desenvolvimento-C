//Fa�a um algoritmo em portugu�s estruturado que leia o n�mero de DDD e 
//informe a qual cidade pertence, considerando s� os seguintes valores:
//61 - Bras�lia
//71 - Salvador
//11 - S�o Paulo
//21 - Rio de Janeiro
//32 - Juiz de Fora
//19 - Campinas
//27 - Vit�ria
//31 - Belo Horizonte
//qualquer outro - uma cidade no Brasil sem identifica��o

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Fun�ao principal
int main(){
	
//Declara�ao das variaveis
int ddd;

//Entrada e saida de informa�oes 
	setlocale(LC_ALL, "Portuguese");
	printf("Informe o DDD utilizado em sua regi�o:\n");
	scanf("%d", &ddd);
	
//Condi�oes a serem executadas
	if (ddd == 61)
	   printf("\nEsse DDD pertence � cidade de Bras�lia!\n\n");
	else if (ddd == 71)
	   printf("\nEsse DDD pertence � cidade de Salvador!\n\n");
	else if (ddd == 11)
	   printf("\nEsse DDD pertence � cidade de S�o Paulo!\n\n");
	else if (ddd == 21)
	   printf("\nEsse DDD pertence � cidade de Rio de Janeiro!\n\n");
	else if (ddd == 32)
	   printf("\nEsse DDD pertence � cidade de Juiz de Fora!\n\n");         
	else if (ddd == 19)
	   printf("\nEsse DDD pertence � cidade de Campinas!\n\n");
	else if (ddd == 27)
	   printf("\nEsse DDD pertence � cidade de Vit�ria!\n\n");
	else if (ddd == 31)
	   printf("\nEsse DDD pertence � cidade de Belo Horizonte!\n\n"); 
	     
	
	
	
//Pause do programa e retorno da fun�ao	
	system("pause");
	return 0;
}
