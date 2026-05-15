#include <stdio.h>

#include <stdio.h>

// ================= TORRE =================
void moverTorre(int casas){
    if(casas > 0){

        printf("Direita\n");

        moverTorre(casas - 1);
    }
}

// ================= RAINHA =================
void moverRainha(int casas){
    if(casas > 0){

        printf("Esquerda\n");

        moverRainha(casas - 1);
    }
}

// ================= BISPO =================
void moverBispo(int casas){

    
    if(casas <= 0){
        return;
    }

    for(int vertical = 1; vertical <= 1; vertical++){
        for(int horizontal = 1; horizontal <= 1; horizontal++){

            printf("Cima\n");
            printf("Direita\n");

        }
    }
    moverBispo(casas - 1);
}

// ================= CAVALO =================
void moverCavalo(){

    printf("\nCavalo:\n");

    for(int cima = 1, direita = 1; cima <= 2; cima++){
        printf("Cima\n");
        if(cima == 2){

            while(direita <= 1){

                printf("Direita\n");

                direita++;
            }
        }
    }
}

//================= INT MAIN =================
int main(){

    int casasTorre = 5;
    int casasRainha = 8;
    int casasBispo = 5;

    printf("Torre:\n");
    moverTorre(casasTorre);

    printf("\nRainha:\n");
    moverRainha(casasRainha);

    printf("\nBispo:\n");
    moverBispo(casasBispo);

    moverCavalo();

    return 0;
}