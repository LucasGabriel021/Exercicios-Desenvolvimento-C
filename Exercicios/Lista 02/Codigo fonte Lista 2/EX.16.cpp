//Fazer um algoritmo que leia o nome e a altura de três pessoas,
//determine e apresente o nome e a altura da menor delas.

//Bibliotecas 
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Funçao principal
int main(){

//Declaraçao das variaveis
char nome1[51], nome2[51], nome3[51];
double altura1, altura2, altura3;

//Entrada e saida dos dados
    setlocale(LC_ALL, "Portuguese");
    printf("Informe seu nome completo:\n");
    fgets(nome1,51,stdin);
    printf("Informe à altura da primeira pessoa:\n");
    scanf("%lf", &altura1); // Substitua %lf por %f 
    printf("\nInforme seu nome completo:\n");
    fflush(stdin);                                             
    fgets(nome2,51,stdin); 
    printf("Informe à altura da segunda pessoa:\n");
    scanf("%lf", &altura2);
    fflush(stdin);
    printf("\nInforme seu nome completo:\n");
    fgets(nome3,51,stdin);
    printf("Informe à altura da terceira pessoa:\n");
    scanf("%lf", &altura3);

//Condiçoes
    if ((altura1 < altura2) && (altura1 < altura3)){
       printf("\nO nome da pessoa de menor altura é: %s", nome1);
       printf("A altura é: %.2lf\n\n", altura1);}
    else if ((altura2 < altura1) && (altura2 < altura3)){
       printf("\nO nome da pessoa de menor altura é: %s", nome2);
       printf("A altura é: %.2lf\n\n", altura2);}
    else if ((altura3 < altura2) && (altura3 < altura1)){
       printf("\nO nome da pessoa de menor altura é: %s", nome3);
       printf("A altura é: %.2lf\n\n", altura3);}

//Pause do programa e retorno da funçao
    system("pause");
    return 0;
}
