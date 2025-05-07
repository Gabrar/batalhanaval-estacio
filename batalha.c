    #include <stdio.h>

    #define NAVIOS 3

    int main (){
        int tabuleiro[10][10] = {0};
        int cone[3][5] = {
            {0, 0, 1, 0, 0},
            {0, 1, 1, 1, 0},
            {1, 1, 1, 1, 1}
        };
        int cruz[3][5] = {
            {0, 0, 1, 0, 0},
            {1, 1, 1, 1, 1},
            {0, 0, 1, 0, 0}
        };
        int octaedro[3][5] = {
            {0, 0, 1, 0, 0},
            {0, 1, 1, 1, 0},
            {0, 0, 1, 0, 0}
        }; 

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
        int navio4coluna = 9;
        
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

        int linhaOc = 0;
        int colunaOc = 6;

        // Inserindo o octaedro no tabuleiro
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 5; j++) {
                if (octaedro[i][j] == 1) {
                    if (linhaOc + i < 10 && colunaOc + j < 10) {
                        tabuleiro[linhaOc + i][colunaOc + j] = 5;  // Marca com "5" no tabuleiro
                    }
                }
            }
        }

        int linhaCone = 7;
        int colunaCone = 3;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (cone[i][j] == 1)
                {
                    if (linhaCone + i < 10 && colunaCone + j < 10)
                    {
                        tabuleiro[linhaCone + i][colunaCone + j] = 5;
                    }
                }
            }
        } 
        
        int linhaCruz = 3;
        int colunaCruz = 3;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (cruz[i][j] == 1)
                {
                    if (linhaCruz + i < 10 && colunaCruz + j < 10)
                    {
                        tabuleiro[linhaCruz + i][colunaCruz + j] = 5;
                    }                    
                }              
            }            
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
