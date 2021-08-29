#include <stdio.h>
#include <stdlib.h>

int main(){

    float excesso,multa,pesopeixe;

    printf("Insira o peso dos peixes que voce pegou: ");
    scanf("%f",&pesopeixe);
    
    
    if(pesopeixe>50){

        excesso = pesopeixe-50;
        multa = excesso*4;

        printf ("Hoje o seu excesso foi de: %f", excesso);
        printf("\nO valor da sua multa sera de: %f", multa);
       
    }else
    {
        printf("O peso de peixes esta no limite");
       
    }
    
}
