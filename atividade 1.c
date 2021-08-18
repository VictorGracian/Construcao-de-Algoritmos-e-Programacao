#include <stdio.h>
#include <stdlib.h>

int main(){

   float n1,n2,n3,n4,media;
  
  printf("insira a primeira nota: ");
  scanf("%f",&n1);

  printf("insira a segudnda nota: ");
  scanf("%f",&n2);

  printf("insira a terceira nota: ");
  scanf("%f",&n3);

  printf("insira a quarta nota: ");
  scanf("%f",&n4);

  media = n1+n2+n3+n4;

  printf ("A media do aluno eh: %.1f" , media);
  printf("\n\n");
  system("pause");
}

