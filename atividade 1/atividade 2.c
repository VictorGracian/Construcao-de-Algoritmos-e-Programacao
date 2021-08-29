#include <stdio.h>
#include <stdlib.h>

int main(){

    float ganho,horas,salario;

    printf ("Indique quanto voce ganha por hora: ");
    scanf ("%f",&ganho);

    printf ("Indique quantas horas voce trabalha no mes: ");
    scanf ("%f",&horas);

    salario = ganho*horas;

    printf("Esse mes voce ganhara: %.3f", salario);
    printf("\n\n");
    system("Pause");
}