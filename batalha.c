#include <stdio.h>

int main (){
    
    int tabuleiro[10][10] = {0}; //vetor bidimensional do tabuleiro

    int navioHorizontal[3] = {3, 3, 3}; //vetor unidimensional para o navio horizontal
    int navioVertical[3] = {3, 3, 3}; //vetor unidimensional para o navio vertical

    // Coordenadas Vorizontais
    int navio1 = 2; 
    int colunaNavio1 = 4;

    // Coordenadas Verticais
    int navio2 = 5;
    int colunaNavio2 = 7;

    for (int i = 0; i < navioHorizontal[0]; i++)
    {
        tabuleiro[navio1][colunaNavio1 + i] = navio1[navioHorizontal];
    }
    //Impressões dos Navios
    for (int i = 0; i < navioVertical[0]; i++)
    {
        tabuleiro[navio2 + i][colunaNavio2] = navio2[navioVertical];
    }
    

    // Impressão do Tabuleiro
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    

}
