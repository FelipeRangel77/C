#include <stdio.h>

// 1 - Faça o cálculo a seguir, considerando a matriz A 2x4. Os valores devem ser
//     perguntados ao usuário:
//     (2 . Matriz A.)

// int main(void){

//     int matriz[2][4];

//     for (int i = 0; i < 2; i++){
//         for (int j = 0; j < 4; j++){
//             printf("digite o numero da linha %d e coluna %d: ", i+1, j+1);
//             scanf("%d", &matriz[i][j]);
//             matriz[i][j] *= 2;
//         }
//         printf("\n");
//     }

//     for (int i = 0; i < 2; i++){
//         for (int j = 0; j < 4; j++){
//             printf("Matriz: [ %d ]", matriz[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// 2 - Faça o cálculo a seguir, considerando as matrizes A e B 3x3. Os valores devem ser
//     perguntados ao usuário:
// (3 . Matriz A) – Matriz B.

// int main(void){

//     int MatrizA[3][3];
//     int MatrizB[3][3];
//     int MatrizResultante[3][3];

//     for (int i = 0; i < 3; i++){
//         for (int j = 0; j < 3; j++){
//             printf("valor da linha %d e da coluna %d: ", i+1, j+1);
//             scanf("%d", &MatrizA[i][j]);
//         }
//         printf("\n");
//     }

//     for (int i = 0; i < 3; i++){
//         for (int j = 0; j < 3; j++){
//             printf("valor da linha %d e da coluna %d: ", i+1, j+1);
//             scanf("%d", &MatrizB[i][j]);
//         }
//         printf("\n");
//     }

//     for (int i = 0; i < 3; i++){
//         for (int j = 0; j < 3; j++){
//             MatrizResultante[i][j] = (3 * MatrizA[i][j]) - MatrizB[i][j];
//         }
//         printf("\n");
//     }

//     for (int i = 0; i < 3; i++){
//         for (int j = 0; j < 3; j++){
//             printf("[ %d ]", MatrizResultante[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// 3 - Exiba a matriz original e a matriz transposta de uma matriz 5x2. Os valores devem
//     ser perguntados ao usuário.

// int main(void){

//     int matrizA[5][2], i, j;

//         for (int i = 0; i < 5; i++) {
//             for (int j = 0; j < 2; j++) {
//                 printf("Numero linha [%d] e numero coluna [%d]: ", i, j);
//                 scanf("%d", &matrizA[i][j]);
//             }
//         }
    
//         for (int i = 0; i < 5; i++){
//             for (int j = 0; j < 2; j++){
//                 printf("%d ", matrizA[i][j]);
//             }
//             printf("\n");
//         }

//         for (int i = 0; i < 2; i++){
//             for (int j = 0; j < 5; j++){
//                 printf("%d", matrizA[i][j]);
//             }
//             printf("\n");
//         }
        
        
//     return 0;
// }


// 4 - Faça o produto entre duas matrizes, sendo a primeira uma matriz 4x2 e a segunda
//     matriz 2x4. Os valores devem ser perguntados ao usuário. Exiba as 3 matrizes.

// int main(void){

//     int MatrizA[4][2];
//     int MatrizB[2][4];
//     int MatrizResultante[4][4];

//     for (int i = 0; i < 4; i++){
//         for (int j = 0; j < 2; j++){
//             printf("valor da linha [%d] coluna [%d]", i, j);
//             scanf("%d", &MatrizA[i][j]);
//         }
//         printf("\n");
//     }

//     for (int i = 0; i < 2; i++){
//         for (int j = 0; j < 4; j++){
//             printf("valor da linha [%d] coluna [%d]", i, j);
//             scanf("%d", &MatrizB[i][j]);
//         }
//         printf("\n");
//     }

//     for (int i = 0; i < 4; i++){
//         for (int j = 0; j < 4; j++){
//             MatrizResultante[i][j] = 0;
//             for (int k = 0; k < 2; k++){
//                 MatrizResultante[i][j] += MatrizA[i][k] * MatrizB[k][j];
//             }
//         }
//     }
//     printf("Matriz A: \n");
//     for (int i = 0; i < 4; i++){
//         for (int j = 0; j < 2; j++){
//             printf("[ %d ]", MatrizA[i][j]);
//         }
//         printf("\n");
//     }
    
//     printf("Matriz B: \n");
//     for (int i = 0; i < 2; i++){
//         for (int j = 0; j < 4; j++){
//             printf("[ %d ]", MatrizB[i][j]);
//         }
//         printf("\n");
//     }
    
//     printf("Matriz Resultante: \n");
//     for (int i = 0; i < 4; i++){
//         for (int j = 0; j < 4; j++){
//             printf("[ %d ]", MatrizResultante[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

    // 5 - Exiba todos os valores do triângulo superior de uma matriz 3x3 acima da diagonal
    //     principal. Exiba no formato de matriz e se a posição não estiver no triângulo
    //     superior exiba “*” no lugar do número.  

    // int main(void){

    //     int matriz[3][3];
        
    //     for (int i = 0; i < 3; i++){
    //         for (int j = 0; j < 3; j++){
    //             printf("Digite os numeros da linha [%d] e coluna [%d]", i, j);
    //             scanf("%d", &matriz[i][j]);
    //         }
    //         printf("\n");
    //     }

    //     printf("Triangulo superior : ");
    //     for (int i = 0; i < 3; i++){
    //         for (int j = 0; j < 3; j++){
    //             if (i <= j)
    //             {
    //                 printf("[%d]", matriz[i][j]);
    //             }else{
    //                 printf("*");
    //             }
    //         }
    //         printf("\n");
    //     }
        
        
    //     return 0;
    // }

//    6 - Some todos os valores do triângulo inferior da diagonal principal, incluindo a
//        diagonal principal de uma matriz 4x4.

// int main(void){

//     int Matriz[4][4];
//     int soma = 0;

//     for (int i = 0; i < 4; i++){
//         for (int j = 0; j < 4; j++){
//             printf("Digite os numeros da linha [%d] e coluna [%d]", i, j);
//             scanf("%d", &Matriz[i][j]);
//         }
//     }
    
//     for (int i = 0; i < 4; i++){
//         for (int j = 0; j <= i; j++){
//             soma += Matriz[i][j];
//         }
//     }

//     printf("Soma dos elementos do triângulo inferior: %d\n", soma);
    
//     return 0;
// }

// 7 - Informe o maior valor acima da diagonal secundária de uma matriz 3x3.

// int main(void){

//     int Matriz[3][3];
//     int maior;

//     for (int i = 0; i < 3; i++){
//         for (int j = 0; j < 3; j++){
//             printf("me de os valores da linha [%d] e coluna [%d]", i, j);
//             scanf("%d", &Matriz[i][j]);
//         }
//     }
//     maior = Matriz[0][2];

//     for (int i = 0; i < 2; i++){
//         for (int j = 2; j < 3; j++){
//             if (Matriz[i][j] > maior){
//                 maior = Matriz[i][j];
//             }
//         }
//     }

//     printf("Maior valor acima da diagonal secundária: %d\n", maior);

//     return 0;
// }

// Informe a média de valores abaixo da diagonal secundária de uma matriz 4x4.

