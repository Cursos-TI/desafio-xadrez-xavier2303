#include <stdio.h>

int main() {

int i = 1;
printf("\nMover Torre 5 casas para a Direita: \n");
    while (i <= 5) {
        printf("Direita\n");
        i++;
    }

    
int a = 1;
printf("\nMover a Rainha 8 casas para a esquerda: \n");
    do{
        printf("Esquerda\n");
        a++;
    }while(a <= 8);
     

printf("\nMover o Bispo 5 casas na diagonal superior direita: \n");
    for(int b = 1; b <= 5; b++){
        printf("Cima - Direita\n");
    }

    
    return 0;
}
