#include <stdio.h>

#define TAM 10

int main() {
    int tabuleiro[TAM][TAM];
    int i, j;

    // Inicializar tabuleiro com 0
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posicionar 1 navio VERTICAL (exemplo: começa na linha 2, coluna 4)
    int linha_inicio_v = 2;
    int coluna_v = 4;
    int tamanho_navio = 3;

    for (i = 0; i < tamanho_navio; i++) {
        if (linha_inicio_v + i < TAM) {
            tabuleiro[linha_inicio_v + i][coluna_v] = 3;
        }
    }

    // Posicionar 1 navio HORIZONTAL (exemplo: começa na linha 6, coluna 1)
    int linha_h = 6;
    int coluna_inicio_h = 1;

    for (i = 0; i < tamanho_navio; i++) {
        if (coluna_inicio_h + i < TAM) {
            tabuleiro[linha_h][coluna_inicio_h + i] = 3;
        }
    }

    // Imprimir cabeçalho das colunas (letras A-J)
    printf("   ");
    for (i = 0; i < TAM; i++) {
        printf("%c ", 'A' + i);
    }
    printf("\n");

    // Imprimir tabuleiro com numeração das linhas (0-9)
    for (i = 0; i < TAM; i++) {
        printf("%2d ", i);
        for (j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}