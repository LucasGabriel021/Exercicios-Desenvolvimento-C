//Faça um algoritmo que calcule e escreva o valor a ser pago a sua provedora de acesso à Internet,
//para isso você deverá ler a quantidade de horas que você utilizou. Sabe-se que você pagará
//R$ 30,00 por até 20 horas de uso (va1or básico), caso você tenha usado mais de 20 horas,
//então você deve acrescentar 10% do valor básico para cada hora extra utilizada.

//Bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//Funçao principal
int main(){
	
//Declaraçao das variaveis
int valor, horasdeacesso;

//Entrada e saida das informaçoes
    setlocale(LC_ALL, "Portuguese");
	printf("Informe a quantidade de horas urilizadas com à internet:\n");
	scanf("%d", &horasdeacesso);
	
//Condiçoes
	if (horasdeacesso == 20)
	    printf("\nVocê pagará pelo serviço utilizado R$ 30,00\n\n");
    else if (horasdeacesso > 20){
    	valor = 30 + (3 * horasdeacesso);
    	printf("\nVocê terá um total a pagar: R$ %.2d,00\n\n", valor);
	}
	
//Pause do sistema e retorno a funçao	
	system("pause");
	return 0;
}
