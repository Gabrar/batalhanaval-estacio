#include <stdio.h>

#define NAVIOS 3

int main (){
    int tabuleiro[10][10] = {0};

    int navio1 = 2;
    int navio1Coluna = 4;
    // NAVIO HORIZONTAL

    int navio2 = 0;
    int navio2coluna = 2;
    // NAVIO VERTICAL

    int navio3 = 5;
    int navio3coluna = 0;
    // NAVIOS DIAGONAIS
    int navio4 = 4;
    int navio4coluna = 7;
    
    for (int i = 0; i < NAVIOS; i++) // LOOP DO NAVIO HORIZONTAL
    {
        tabuleiro[navio1][navio1Coluna + i] = NAVIOS;
    }
    
    for (int i = 0; i < NAVIOS; i++) // LOOP DO NAVIO VERTICAL
    {
        tabuleiro[navio2 + i][navio2] = NAVIOS;
    }

    for (int i = 0; i < NAVIOS; i++) // LOPP DO NAVIO DIAGONAL 1
    {
        tabuleiro[navio3 + i][navio3coluna + i] = NAVIOS;
    }
    
    for (int i = 0; i < NAVIOS; i++) // LOOP DO NAVIO DIAGONAL 2
    {
        tabuleiro[navio4 + i][navio4coluna - i] = NAVIOS;
    }
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]); // IMPRESSÃO DO TABULEIRO
        }
        printf("\n");
    }
    
}
