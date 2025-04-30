#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    

    // constante que indica o tamanho da grid
    const int HEIGHT=10, WIDTH=10;
    int matriz_2d[WIDTH][HEIGHT];
    char linha[10] = {'A', 'B', 'C', 'D', 'F', 'G', 'H', 'I', 'J', 'K'};


    // PROBLEMAS: o posicionamento dos navios são hardcoded, ou seja, o navio 1 é sempre horizontal, e o
    // navio 2 é sempre verical

    /* navio horizontal - index 0: sua posição vertical,
                        - index 1: posição incial (tamanho),
                        - index 2: posição final (tamanho),
    */
    int navio_1[3] = {4, 1, 3};

    int navio_3[3] = {6, 2, 4};

    /* navio vertical   - index 0: sua posição horizontal,
                        - index 1: posição incial (tamanho),
                        - index 2: posição final (tamanho),
    */
    int navio_2[3] = {2, 0, 2};

    int navio_4[3] = {8, 4, 6};


    // bloco de código que exibe e inicializa todos os valores da grid,
    printf("  ");
    for(int x = 0; x<WIDTH; x++){
        printf("%c", linha[x]);
    }
    printf("\n");
    for(int y = 0; y<HEIGHT; y++){
        printf("%d ", y+1);
        for(int x = 0; x<WIDTH; x++){

            // hardcode de posicionamento dos navios
            
            if(y==navio_1[0]&&x>=navio_1[1]&&x<=navio_1[2])
                matriz_2d[x][y] = 3;
            else if(x==navio_2[0]&&y>=navio_2[1]&&y<=navio_2[2])
                matriz_2d[x][y] = 3;
            else if(y==navio_3[0]&&x>=navio_3[1]&&x<=navio_3[2])
                matriz_2d[x][y] = 3;
            else if(x==navio_4[0]&&y>=navio_4[1]&&y<=navio_4[2])
                matriz_2d[x][y] = 3;
            else
                matriz_2d[x][y] = 0;
            printf("%d", matriz_2d[x][y]);
        }
        printf("\n");
    }
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
