//Fa�a um algoritmo que calcule e escreva o valor a ser pago a sua provedora de acesso � Internet,
//para isso voc� dever� ler a quantidade de horas que voc� utilizou. Sabe-se que voc� pagar�
//R$ 30,00 por at� 20 horas de uso (va1or b�sico), caso voc� tenha usado mais de 20 horas,
//ent�o voc� deve acrescentar 10% do valor b�sico para cada hora extra utilizada.

//Bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//Fun�ao principal
int main(){
	
//Declara�ao das variaveis
int valor, horasdeacesso;

//Entrada e saida das informa�oes
    setlocale(LC_ALL, "Portuguese");
	printf("Informe a quantidade de horas urilizadas com � internet:\n");
	scanf("%d", &horasdeacesso);
	
//Condi�oes
	if (horasdeacesso == 20)
	    printf("\nVoc� pagar� pelo servi�o utilizado R$ 30,00\n\n");
    else if (horasdeacesso > 20){
    	valor = 30 + (3 * horasdeacesso);
    	printf("\nVoc� ter� um total a pagar: R$ %.2d,00\n\n", valor);
	}
	
//Pause do sistema e retorno a fun�ao	
	system("pause");
	return 0;
}
