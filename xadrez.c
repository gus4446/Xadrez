#include <stdio.h>
//desafio xadrez nível aventureiro
//Aluno: Gustavo henrique da Silva

int main(){

    printf("\n******\n");
    printf("  TORRE   ");
    printf("\n******\n");

    int torre;
    printf("****Você pode mover a torre apenas 5 casas em apenas uma direção****\n");
    printf("digite quantas casas (de 1 a 5) a torre pode se mover: \n");
    scanf ("%d",&torre);

    if ( torre <=5 && torre > 0){
        for( int i = 1; i <= torre; i++){
            printf("torre movida %d casas para a direita\n", i);
        }
    
    } else{
        printf("A torre não pode se mover %d casas. Valor máximo é 5\n", torre);
    }

    printf("\n******\n");
    printf("  RAINHA   ");
    printf("\n******\n");

    int rainha, j = 1;

    printf ("****Você pode mover a rainha 8 casas em qualquer direção****\n");
    printf("digite quantas casas voce deseja mover a rainha: \n");
    scanf("%d", &rainha);

    if (rainha == 0) {
        printf("Movimento nulo da rainja.\n");
    } else if ( rainha > 0 && rainha <= 8){
        do
        {
        printf("Rainha movida %d casas\n", j);
        j++;
        } while (j <= rainha);
    
    }else{
        printf("Movimento inválido. A rainha pode se mover até 8 casas,\n");
    }
    
    
    printf("\n******\n");
    printf("  BISPO   ");
    printf("\n******\n");

    
    int bispo, i = 1;

    printf ("****Você pode mover o bispo 5 apenas na diagonal****\n");
    printf("Digite quantas casas voce deseja mover a bispo: \n");
    scanf("%d", &bispo);



    if (bispo > 0 && bispo <= 5){
       while (i <= bispo) {
        printf("voce moveu o bispo %d casas na diagonal \n", i);
        i++;
    }
} else {
    printf("movimento inválido. O bispo pode de mover até 5 casas na diagonal.\n");
}


/*CAVAO MOVIMENTO
*/
 printf("\n******\n");
 printf("  CAVALO  ");
 printf("\n******\n");

  int cavalo ;
  int k;


    printf("****Você pode mover a o cavalo a apenas duas casas para frente e uma para o lado****\n");
    printf("digite quantas casas você deseja mover o cavalo(lembrando que você pode pular peças em ate 4): \n");
    scanf ("%d",&cavalo);

    if ( cavalo >0 && cavalo <= 4){
       for (int salto =  1; salto <= cavalo; salto++){
        printf("\nsalto %d do cavalo: \n", salto);

        for (int k = 0; k < 2; k++){
            printf("cima\n");
        }
            printf("direita\n");

       }

    } else{
        printf("Movimento inválido. O cavalo pode dar de 1 a 4 saltos.\n");
    }



    }
