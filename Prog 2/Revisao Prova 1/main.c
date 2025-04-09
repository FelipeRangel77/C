#include <stdio.h>

// PRODUTO ENTRE MATRIZES

// int main(void) {
//     int matrizA[3][2];
//     int matrizB[2][3];
//     int matrizC[3][3] = {0};

//     for(int i = 0; i < 3; i++) { // Pegar os valores da Matriz A
//         for(int j = 0; j < 2; j++) {
//             printf("Valor da %d linha e %d coluna da matriz A: ", i+1, j+1);
//             scanf("%d", &matrizA[i][j]);
//         }
//         printf("\n");
//     }
//     for(int i = 0; i < 2; i++) { // Pegar os valores da Matriz B
//         for(int j = 0; j < 3; j++) {
//             printf("Valor da %d linha e %d coluna da matriz B: ", i+1, j+1);
//             scanf("%d", &matrizB[i][j]);
//         }
//         printf("\n");
//     }

//     for(int i = 0; i < 3; i++) { // Produto da matriz A com a matriz B
//         for(int j = 0; j < 3; j++) {
//             for(int k = 0; k < 2; k++) {
//                 matrizC[i][j] = matrizC[i][j] + matrizA[i][k] * matrizB[k][j];
//             }
//         }
//     }

//     for(int i = 0; i < 3; i++) { // Printar a matriz resultante do produto
//         for(int j = 0; j < 3; j++) {
//             printf("[ %d ]", matrizC[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// } 

// MULTIPLICAÇÃO DE MATRIZES ------------------------------------------------------------------------------------------

// int main(void) {
//     int matriz[3][2];
//     int matrizResultante[3][2];
//     int multiplicar = 0;

//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 2; j++) {
//             printf("Valor da %d linha e %d coluna da matriz: ", i+1, j+1);
//             scanf("%d", &matriz[i][j]);
//         }
//         printf("\n");
//     }
//     printf("Qual o valor do para multiplicar? ");
//     scanf("%d", &multiplicar);
//     for(int i = 0; i < 3; i++) {
//         for (int j = 0; j < 2; j++) {
//             matrizResultante[i][j] = matriz[i][j] * multiplicar;
//         }
//     }
//     printf("Matriz resultante:\n");
//     for(int i = 0; i < 3; i++) {
//         for (int j = 0; j < 2; j++) {
//             printf("[ %d ]", matrizResultante[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// SOMA DE MATRIZES -----------------------------------------------------------------------

// int main(void){

//     int matrizA [3][3];
//     int matrizB [3][3];
//     int matrizResultante [3][3];

//     for( int i = 0 ; i < 3 ; i++) {
//         for(int j= 0; j < 3 ; j++) {
//             printf("Valor da %d linha e %d coluna da matriz: ", i+1, j+1);
//             scanf("%d", &matrizA[i][j]);
//         }
//     }
//     for( int i = 0 ; i < 3 ; i++) {
//         for(int j= 0; j < 3 ; j++) {
//             printf("Valor da %d linha e %d coluna da matriz: ", i+1, j+1);
//             scanf("%d", &matrizB[i][j]);
//         }
//     }
//     for( int i = 0 ; i < 3 ; i++) {
//         for(int j= 0; j < 3 ; j++) {
//             matrizResultante[i][j] = matrizA [i][j] + matrizB[i][j]; 
//         }
//     }
//     printf("\nResultado da soma das matrizes A e B (matriz C):\n");
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             printf("%d ", matrizResultante[i][j]);
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

//  Peça para o usuário preencher uma matriz 2x4 de alturas e informe a maior e menor altura. Exiba a matriz. -------------------------------------------------------

int main(void){

    float Matriz[2][4];
    float maior,menor;

    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            printf("Valor da %d linha e %d coluna da matriz: ", i+1, j+1);
            scanf("%f", &Matriz[i][j]);
        }
    } 
    for ( int i = 0; i < 2; i++) {
        for ( int j = 0; j < 4; j++) {
            if (Matriz[i][j] > maior) {
                maior = Matriz[i][j];
            }
            if (Matriz[i][j] < menor) {
                menor = Matriz[i][j];
            }
        }
    }

    printf("Matriz das alturas:");
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 4; j++){
            printf("Matriz das alturas:", Matriz[i][j])
        } 
    }
    

    return 0;

}