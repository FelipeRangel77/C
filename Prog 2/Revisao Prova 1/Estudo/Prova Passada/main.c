#include <stdio.h>

// Crie e peça pra um usuario preencher uma matriz 4x4 de numeros reais. Após isto exiba a média dos numeros pertencentes ao triangulo inferior á diagonal principal da matriz 

// int main(void){

//     float Matriz[4][4];
//     float soma = 0 , media = 0;
//     int qtd = 0;
    

//     for (int i = 0; i < 4; i++){
//         for (int j = 0; j < 4; j++){
//             printf("digite um valor: ");
//             scanf("%f", &Matriz[i][j]);
//             if( i > j){
//             soma += Matriz[i][j];
//             qtd++;
//             }
//         }
//     }

//     media = soma / qtd;
//     printf("a media dos valores do triangulo: %f", media);
    
//     return 0;
// }

// Crie um programa que pergunte ao usario 7 numeros
// e coloque-os em um vetor.Atraves de uma função, passe este
// vetor como parametro de retorne a quantidade de numeros 
// multiplos de 10. exiba o resultado ao usuario

// int contar_multiplos10(int *array);

// int main(void){
//     int qtdMultiplo10= 0, num[7];

//     for(int i = 0; i < 7; i++){
//         printf("digite um numero");
//         scanf("%d", &num[i]);
//     }
    
//     qtdMultiplo10 = contar_multiplos10(num);

//     printf("quantidade de numeros multiplos de 10 %d", qtdMultiplo10);

//     return 0;
// }

// int contar_multiplos10(int *array){
//     int qtd = 0;
//     for (int i = 0; i < 7; i++){
//         if (*(array + i) %10 == 0){
//             qtd++;
//         }   
//     }
//     return qtd;
// }

void contarPontos(int qtdJogos, int qtdVitorias, int *totalPontos, float *mediaPontos);

int main(void){

    int qtdJogos = 0; 
    int  qtdVitorias = 0;
    int totalPontos = 0;
    float mediaPontos = 0;

    printf("quantos jogos:");
    scanf("%d", &qtdJogos);
    printf("quantas vitorias:");
    scanf("%d", &qtdVitorias);

    contarPontos(qtdJogos,qtdVitorias,&totalPontos,&mediaPontos);

    printf("Pontos totais: %d \n Media dos pontos: %f", totalPontos, mediaPontos);
    return 0;
}

void contarPontos(int qtdJogos, int qtdVitorias, int *totalPontos, float *mediaPontos);

*totalpontos = qtdVitorias * 5;
*mediaPontos = (*totalpontos) / qtdJogos;