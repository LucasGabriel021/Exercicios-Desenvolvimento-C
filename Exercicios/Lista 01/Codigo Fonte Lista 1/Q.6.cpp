//Leia 2 valores A e B, que correspondem a 2 notas de um aluno. A seguir, calcule a
//média do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 (A soma
//dos pesos portanto é 11). Assuma que cada nota pode ir de 0 até 10.0.

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Funçao principal
int main()
{
//Declaraçao de variaveis	
	float nota1, nota2, media;

//Entrada dos dados	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite a primeira nota:\n");
	scanf("%f", &nota1);
	printf("Digite a segunda nota:\n");
	scanf("%f", &nota2);
	
//Conta	
	media = (nota1 * 3.5 + nota2 * 7.5) / 11;

//Saida da informaçao
    printf("\nA média do aluno nas provas é: %.2f\n\n",media);

//Pause do sistema e retorno a funçao	
	system("pause");
	return 0;
}
