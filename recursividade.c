#include <stdio.h>

void movertorre(int casas){
    if (casas <= 0) return;
    movertorre(casas - 1);
    printf("Direita\n");
}

void moverRainha(int casas) {
    if (casas <= 0) return;
    moverRainha(casas - 1);
    printf("Diagonal direita cima\n");

}

void moverBispo(int vertical, int horizintal){
    if (vertical <= 0) return;
    moverBispo( vertical - 1, horizintal);

    for (int i = 0; i < horizintal; i++){
        printf("Diagonal direita cima \n");
    }
}

void moverCavalo(int saltos) {
    int saltoRealizado = 0;
    for (int i = 1; i <= 8; i++) {
        for (int j = 1; j<= 8; j++){

            if (i % 2 == 0 && j % 2 != 0) continue;

            printf("salto %d do cavalo" , saltoRealizado + 1);
            for (int k = 0; k < 2; k++) 
                printf("cima");
                    printf("Direita");

            saltoRealizado++;

            if (saltoRealizado >= saltos) 
            break;
            
        }
        if(saltoRealizado >= saltos)
        break;
    }

}

#include <stdio.h>

void movertorre(int casas){
    if (casas <= 0) return;
    movertorre(casas - 1);
    printf("Direita\n");
}

void moverRainha(int casas) {
    if (casas <= 0) return;
    moverRainha(casas - 1);
    printf("Diagonal direita cima\n");

}

void moverBispo(int vertical, int horizintal){
    if (vertical <= 0) return;
    moverBispo( vertical - 1, horizintal);

    for (int i = 0; i < horizintal; i++){
        printf("Diagonal direita cima \n");
    }
}

void moverCavalo(int saltos) {
    for (int i = 1; i <= saltos; i++){
      printf("\n Saltos %d do cavalo: \n", i);
        for (int cima = 1; cima <= 2; cima++){
          printf("Cima\n");
    }
        printf("Direita\n");
  }
}


int main () {
    int casasTorre, casasRainha, casasBispo, saltosCavalo;

    printf("Digite quantas casas a torre deve se mover (máximo 5): ");
    scanf("%d", &casasTorre);
    if (casasTorre > 0 && casasTorre <= 5){
        movertorre(casasTorre);
    } else {
        printf("Movimento inválido a torre pode mover apenas 5 casas");
    }

    printf("\nDigite quantas casas a rainha deve se mover (máximo 8) ");
    scanf("%d", &casasRainha);
    if (casasRainha > 0 && casasRainha <= 8) {
        moverRainha(casasRainha);
    } else {
        printf ("Movimente inválido para a rainha.\n");
    }

    printf("\nDigite quantas casas o bispo deve se mover na diagonal (máximo 5)");
    scanf("%d", &casasBispo);
    if (casasBispo > 0 && casasBispo){
        moverBispo( 1, casasBispo);

    } else{
        printf("Movimento inválido para o bispo.\n");
    }

    printf("\nDigite quantos saltos o cavalo deve fazer (máximo 4): ");
    scanf("%d", &saltosCavalo);
    if  (saltosCavalo > 0 && saltosCavalo <= 4) {
        moverCavalo(saltosCavalo);
    } else{
        printf("Movimento inválido para o cavalo\n");
    }
    
    return 0;
}
