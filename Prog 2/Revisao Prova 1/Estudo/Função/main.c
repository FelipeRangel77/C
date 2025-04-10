
#include <stdio.h>

// //assinaturas
// float multiplicar(float n1, float n2);
// void verificarVoto(int idade);
// int calcularDias(int anos, int meses, int dias);

// int main()
// {
//     // 1
//     float n1 = 0;
//     float n2 = 0;
//     float total = 0;
    
//     printf("Digite o primeiro numero: ");
//     scanf("%f", &n1);
//     printf("Digite o segundo numero: ");
//     scanf("%f", &n2);
    
//     total = multiplicar(n1, n2);
    
//     printf("\nTotal: %.2f", total);
    
//     // 2 

    
//     int idade = 0;
    
//     printf("Digite sua idade: ");
//     scanf("%d", &idade);

//     verificarVoto(idade);

//     // 3
    
//     int anos = 0;
//     int meses = 0;
//     int dias = 0;
//     int totalDias = 0;
    
//     printf("Digite os anos: ");
//     scanf("%d", &anos);
//     printf("Digite os meses: ");
//     scanf("%d", &meses);
//     printf("Digite os dias: ");
//     scanf("%d", &dias);
    
//     totalDias = calcularDias(anos, meses, dias);
    
//     printf("\nTotal de dias vividos: %d", totalDias);
    
//     return 0;
// }

// //funções

// float multiplicar(float n1, float n2){
//     float total = n1 * n2;
//     return total;
// }

// void verificarVoto (int idade){
//     if(idade >= 18 && idade <=70){
//         printf("Obrigado a votar");
//     }
//     else{
//         printf("Não obrigado a votar");
//     }
// }

// int calcularDias(int anos, int meses, int dias){
//     int total = 0;
//     total = anos * 365 + meses * 30 + dias;
//     return total;
// }

// Crie uma função chamada soma que recebe dois números inteiros como parâmetros e retorna a soma deles.


// int soma(int n1, int n2);

// int main()
// {
//     int n1 = 0, n2 = 0, total = 0;
//     printf("digite um numero:");
//     scanf("%d", &n1);
//     printf("digite o segundo numero:");
//     scanf("%d", &n2);

//     total = soma( n1, n2);

//     printf("a soma seria : %d", total);
//     return 0;
// }

// int soma(int n1, int n2) {
//     return n1 + n2;
// }

// Crie uma função chamada parOuImpar que recebe um número inteiro e imprime se ele é par ou ímpar.

// void ParOuImpar(int num);

// int main(){

//     int num = 0;

//     printf("digite um numero: ");
//     scanf("%d", &num);

//     if(num % 2 == 0){
//         printf("o numero eh par");
//     }else{
//         printf(" o numero eh impar");
//     }

//     return 0;
// }