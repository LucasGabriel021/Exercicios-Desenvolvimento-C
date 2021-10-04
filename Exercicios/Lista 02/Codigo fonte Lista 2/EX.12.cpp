//Faça um algoritmo em português estruturado que leia o número de DDD e 
//informe a qual cidade pertence, considerando só os seguintes valores:
//61 - Brasília
//71 - Salvador
//11 - São Paulo
//21 - Rio de Janeiro
//32 - Juiz de Fora
//19 - Campinas
//27 - Vitória
//31 - Belo Horizonte
//qualquer outro - uma cidade no Brasil sem identificação

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Funçao principal
int main(){
	
//Declaraçao das variaveis
int ddd;

//Entrada e saida de informaçoes 
	setlocale(LC_ALL, "Portuguese");
	printf("Informe o DDD utilizado em sua região:\n");
	scanf("%d", &ddd);
	
//Condiçoes a serem executadas
	if (ddd == 61)
	   printf("\nEsse DDD pertence à cidade de Brasília!\n\n");
	else if (ddd == 71)
	   printf("\nEsse DDD pertence à cidade de Salvador!\n\n");
	else if (ddd == 11)
	   printf("\nEsse DDD pertence à cidade de São Paulo!\n\n");
	else if (ddd == 21)
	   printf("\nEsse DDD pertence à cidade de Rio de Janeiro!\n\n");
	else if (ddd == 32)
	   printf("\nEsse DDD pertence à cidade de Juiz de Fora!\n\n");         
	else if (ddd == 19)
	   printf("\nEsse DDD pertence à cidade de Campinas!\n\n");
	else if (ddd == 27)
	   printf("\nEsse DDD pertence à cidade de Vitória!\n\n");
	else if (ddd == 31)
	   printf("\nEsse DDD pertence à cidade de Belo Horizonte!\n\n"); 
	     
	
	
	
//Pause do programa e retorno da funçao	
	system("pause");
	return 0;
}
