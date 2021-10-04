//Ler dois valores numéricos e apresentar a diferença do maior valor pelo menor.

//Bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//Funçao principal
int main(){
	
//Declaraçao das variaveis
int numerom, numeroe, diferenca;

//Entrada e saida de informaçoes
    setlocale(LC_ALL, "Portuguese");
	printf("Informe o valor do maior número:\n");
	scanf("%d", &numerom);
	printf("Informe o valor do menor número:\n");
	scanf("%d", &numeroe);
	
//Contas		
	diferenca = numerom - numeroe;
	
	printf("\nA diferença entre o maior para o menor é: %d\n\n", diferenca);
	
//Pause do sistema e retorno da funçao	
	system("pause");
	return 0;
}
