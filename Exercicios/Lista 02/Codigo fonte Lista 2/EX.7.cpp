//Ler dois valores num�ricos e apresentar a diferen�a do maior valor pelo menor.

//Bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//Fun�ao principal
int main(){
	
//Declara�ao das variaveis
int numerom, numeroe, diferenca;

//Entrada e saida de informa�oes
    setlocale(LC_ALL, "Portuguese");
	printf("Informe o valor do maior n�mero:\n");
	scanf("%d", &numerom);
	printf("Informe o valor do menor n�mero:\n");
	scanf("%d", &numeroe);
	
//Contas		
	diferenca = numerom - numeroe;
	
	printf("\nA diferen�a entre o maior para o menor �: %d\n\n", diferenca);
	
//Pause do sistema e retorno da fun�ao	
	system("pause");
	return 0;
}
