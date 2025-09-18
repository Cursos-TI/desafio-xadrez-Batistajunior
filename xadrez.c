#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Objetivo: simular a movimentação das peças de xadrez usando loops, funções e recursividade.


// ========================
// Nível Mestre - Funções Recursivas
// ========================

// Função recursiva para movimentação do Bispo (diagonal)
void moverBispo(int linha, int coluna, int limite) {
    if (linha > limite || coluna > limite) {
        return; // condição de parada
    }
    printf("Bispo em (%d,%d)\n", linha, coluna);
    moverBispo(linha + 1, coluna + 1, limite); // anda na diagonal
}

int main() {
    int i, j;

    // ========================
    // Nível Novato - Movimentações básicas
    // ========================
    printf("Movimentação do Bispo (diagonal até 8 casas):\n");
    for (i = 1; i <= 8; i++) {
        printf("Bispo em (%d,%d)\n", i, i);
    }

    printf("\nMovimentação da Torre (linha fixa, para a direita):\n");
    int linhaTorre = 1;
    for (i = 1; i <= 8; i++) {
        printf("Torre em (%d,%d)\n", linhaTorre, i);
    }

    printf("\nMovimentação da Rainha (linha fixa, para a esquerda):\n");
    int linhaRainha = 4;
    for (i = 8; i >= 1; i--) {
        printf("Rainha em (%d,%d)\n", linhaRainha, i);
    }

    // ========================
    // Nível Aventureiro - Cavalo
    // ========================
    printf("\nMovimentação do Cavalo (em L, posição inicial (4,4)):\n");
    int cavaloX = 4, cavaloY = 4;
    int movimentosX[8] = {2, 2, -2, -2, 1, 1, -1, -1};
    int movimentosY[8] = {1, -1, 1, -1, 2, -2, 2, -2};

    for (i = 0; i < 8; i++) {
        int novoX = cavaloX + movimentosX[i];
        int novoY = cavaloY + movimentosY[i];
        if (novoX >= 1 && novoX <= 8 && novoY >= 1 && novoY <= 8) {
            printf("Cavalo em (%d,%d)\n", novoX, novoY);
        }
    }

    // ========================
    // Nível Mestre - Recursividade
    // ========================
    printf("\nMovimentação recursiva do Bispo a partir de (1,1):\n");
    moverBispo(1, 1, 8);

    return 0;
}
