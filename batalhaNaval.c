#include<stdio.h>


#include<stdio.h>
    #define NAVIO 3
    #define LINHAS 10
    #define COLUNAS 10
    int main() {
        int tabuleiro[LINHAS][COLUNAS];
    
        // Inicializa o tabuleiro com 0
        for (int i = 0; i < LINHAS; i++) {
            for (int j = 0; j < COLUNAS; j++) {
                tabuleiro[i][j] = 0;
            }
        }
        // cOLOCAR 1 NAVIO HORIZONTAL 1 NAVIO VERTICAL 2 NAVIOS NA DIAGONAL
        // Coloca um navio horizontal na linha 0, começando na coluna 0
        for (int j = 0; j < NAVIO; j++) {
            tabuleiro[0][j] = 3;
        }
        // Coloca um navio vertical na coluna 9, começando na linha 0
        for (int i = 0; i < NAVIO; i++) {
            tabuleiro[i][9] = 3;
        }
        // Coloca dois navios na diagonal, começando na linha 5, coluna 5
        for (int i = 0; i < NAVIO; i++) {
            tabuleiro[5 + i][5 + i] = 3;
        }
        // Coloca um navio na diagonal, começando na linha 7, coluna 0
        for (int i = 0; i < NAVIO; i++) {
            tabuleiro[7 + i][0 + i] = 3;
        }
        // Exibe o tabuleiro
        printf("   ");
        for (int i = 0; i < LINHAS; i++) {
            printf("%2d ", i); // Exibe os números das colunas
        }
        printf("\n");
    
        for (int i = 0; i < LINHAS; i++) {
            printf("%2c ", 'A' + i); // Exibe as letras das linhas
            for (int j = 0; j < COLUNAS; j++) {
                printf("%2d ", tabuleiro[i][j]);
            }
            printf("\n");
        }



    return 0;
}

  
// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.


    
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

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

   


