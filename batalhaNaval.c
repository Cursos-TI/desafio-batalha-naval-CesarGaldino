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
 // Inicializando matriz de habilidade de ataque em cone
 int cone[3][5];
 for (int i = 0; i < 3; i++) {
     for (int j = 0; j < 5; j++) {
         cone[i][j] = 0;
     }
 }

 for (int i = 0; i < 3; i++) {
     for (int j = 0; j < 5; j++) {
         if (j == 2) {
             for (int x = i; x > -1; x--) {
                 cone[i][j + x] = 1;
                 cone[i][j - x] = 1;
             }
         }
     }
 }



 // Inicializando matriz de habilidade de ataque em cruz
 int cruz[5][5];
 for (int i = 0; i < 5; i++) {
     for (int j = 0; j < 5; j++) {
         if (i == 2 || j == 2) {
             cruz[i][j] = 2;
         } else {
             cruz[i][j] = 0;
         }
     }
 }


 // Inicializando matriz de habilidade de ataque em octaedro
 int octa[5][5];
 for (int i = 0; i < 5; i++) {
     for (int j = 0; j < 5; j++) {
         if (i == 2 || j == 2) {
             octa[i][j] = 3;
         } else if ((i == 1 || i == 3) && (j == 1 || j == 3)) {
             octa[i][j] = 3;
         } else {
             octa[i][j] = 0;
         }
     }
 }

 
 // Inserindo os ataques no tabuleiro
 // Será gerado um tabuleiro só com a imagem dos ataques
 int tabuComAtaq[10][10];
 for (int i = 0; i < 10; i++) {
     for (int j = 0; j < 10; j++) {
         tabuComAtaq[i][j] = 0;
     }
 }

 for (int i = 0, k = 0; i < 3; i++, k++) {
     for (int j = 0, l = 0; j < 5; j++, l++) {
         if (cone[i][j] != 0) {
             tabuComAtaq[k][l] = cone[i][j];
         }
     }
 }

 for (int i = 0, k = 4; i < 5; i++, k++) {
     for (int j = 0, l = 1; j < 5; j++, l++) {
         if (cruz[i][j] != 0) {
             tabuComAtaq[k][l] = cruz[i][j];
         }
     }
 }

 for (int i = 0, k = 2; i < 5; i++, k++) {
     for (int j = 0, l = 4; j < 5; j++, l++) {
         if (octa[i][j] != 0) {
             tabuComAtaq[k][l] = octa[i][j];
         }
     }
 }

 // Exibindo tabuleiro com os ataques

 printf("\nExibindo tabuleiro com os ataques.\n");
 printf("(1) Ataque em cone.|(2) Ataque em cruz. |(3) Ataque em octaedro.\n");
 printf("    A B C D E F G H I J\n");
 for (int i = 0; i < 10; i++) {
     i < 9 ? printf("%d  ", i + 1) : printf("%d ", i + 1);
     for (int j = 0; j < 10; j++) {
         printf("%d ", tabuComAtaq[i][j]);
     }
     printf("\n");
 }
 printf("\n");


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

   


