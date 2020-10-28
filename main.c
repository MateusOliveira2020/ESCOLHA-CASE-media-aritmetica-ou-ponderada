#include <stdio.h>
/*Ex2. Elabore um programa, fluxograma e algoritmo com português estruturado para entrar com 4 notas e a opção da média (aritmética ou ponderada). Para média ponderada das notas, as duas primeiras notas têm peso 2 e a duas últimas tem peso 3. Exiba ao final, conforme a seleção a média. E, exiba uma mensagem caso o aluno foi aprovado ou não, considerando que a média de corte seja maior ou igual a 7. 
*/
  #include <stdio.h>

int main(void) {
  char media = ' ';
    float n1 ;
    float n2 ;
    float n3 ;
    float n4 ;
    float mf ;

    printf("Entre com sua primeira nota: ");
    scanf("%f", &n1);
    printf("Entre com sua segunda nota: ");
  scanf("%f", &n2);
    printf("Entre com sua terceira nota: ");
    scanf("%f", &n3);
    printf("Entre com sua quarta nota: ");
    scanf("%f", &n4);

    printf("\nQue tipo de média você quer fazer?\n");
    printf("A - Aritmética        P - Ponderada\n");
  scanf( " %c", &media);

    switch ( media ){

        case 'a':
            printf("\nVocê escolheu média aritmética\n");
            printf("\nCalculando média...\n");
            mf = (n1 + n2 + n3 + n4) / 4;
      if (mf >= 7) {
        printf("\nParabéns você foi aprovado com %.2f pontos!", mf);
  }
      else{
        printf("\nVocê reprovou com %.2f pontos", mf);
  }
        break;
        case 'p':
            printf("\nVocê escolheu média ponderada\n");
            printf("\nCalculando média...\n");
            mf = (((n1 + n2)*2) + ((n3 + n4)*3) )/ 10;
      if (mf >= 7) {
        printf("\nParabéns você foi aprovado com %.2f pontos!", mf);
    }
      else{
        printf("\nVocê reprovou com %.2f pontos", mf);
    }
        break;

  }

  return 0;
}