#include <stdio.h>
// Desafio de Xadrez - MateCheck

    //Função recursiva para movimento da Torre
    void moverTorre(int casas){
        if (casas <= 0) 
        return;
        printf("Direita\n");
        moverTorre(casas -1);
    }

    //Função recursiva para o movimento do Bispo
    void moverBispo(int casas){
        if (casas <=0)
        return;
        printf("Cima, Direita\n");
        moverBispo(casas - 1);
    }

    //Função adicional para chamar o Bispo com loops alinhados
    void moverBispoComLoops(int casas) {
        for (int i = 0; i < casas; i++) {
            for (int j = 0; j < 1; j++) {
                printf("Cima, Direita\n");
            }
        }
    }

    //Função recursiva para o movimento da Rainha
    void moverRainha(int casas) {
        if (casas <= 0)
        return;
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }

    //Função para o movimento complexo do Cavalo
    void moverCavalo(){
        int movimentos_cima = 2;
        int movimentos_direita = 1;

        for (int i =1; i <= movimentos_cima + movimentos_direita; i++) {
            if(i > movimentos_cima) {
                printf("Direita\n");
                continue;
            }
            if (i > 10) { //Condição de segurança
                break;
            }
            printf("Cima\n");
        }
    }

int main() {
    
   // Movimento da Torre com recursividade
    printf("Movimento da Torre:\n");
    moverTorre(5); // 5 casas para a direita
    printf("\n");

    // Movimento do Bispo com recursividade
    printf("Movimento do Bispo:\n");
    moverBispo(5); // 5 casas na diagonal
    printf("\n"); 

    //Movimento do Bispo com loops aninhados (extra)
    printf("Movimento do Bispo (loops aninhados):\n");
    moverBispoComLoops(5);
    printf("\n");

    // Movimento da Rainha com recursividade
    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");

    // MOVIMENTO DO CAVALO (2 casas para baixo e 1 para esquerda)
    printf("Movimento do cavalo:\n");
    moverCavalo();
    printf("\n");

    return 0;
}
