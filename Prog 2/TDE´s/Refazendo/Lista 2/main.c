#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//! 1. Crie uma estrutura chamada Livro com campos para o título, autor e número de
//! páginas. Crie uma função que recebe um livro como argumento e imprime todas as
//! informações do livro.

// struct Livro{
//     char titulo[50];
//     char autor[50];
//     int paginas;
// };

// void imprimirLivro(struct Livro l) {
//     printf("Titulo: %sAutor: %sPaginas: %d", l.titulo, l.autor, l.paginas);
// }

// int main(){

//     struct Livro livro1;
//     printf("Digite o titulo do livro: ");
//     fgets(livro1.titulo, sizeof(livro1.titulo), stdin);
//     printf("Digite o autor do livro: ");
//     fgets(livro1.autor, sizeof(livro1.titulo), stdin);
//     printf("Digite o numero de paginas: ");
//     scanf("%d", &livro1.paginas);

//     imprimirLivro(livro1);

//     return 0;
// }

//! 2. Crie uma estrutura chamada Aluno com campos para o nome, número de matrícula
//! e notas em três disciplinas. Escreva uma função que calcula a média das notas de
//! um aluno e imprime o resultado.

// struct Aluno{
//     char nome[50];
//     int matricula;
//     float notas[3];
// };


// void calcularMedia(struct Aluno a) {
//       float media = (a.notas[0] + a.notas[1] + a.notas[2]) / 3;
//       printf("media das notas: %.2f", media);
// }

// int main(){

//     struct Aluno aluno1;
//     printf("Nome do aluno:");
//     fgets(aluno1.nome, sizeof(aluno1.nome), stdin);
//     printf("Digite o numero da matricula:");
//     scanf("%d", &aluno1.matricula);
//     for (int i = 0; i < 3; i++){
//         printf("Digite a nota:");
//         scanf("%f", &aluno1.notas[i]);
//     }

//     calcularMedia(aluno1);

//     return 0;
    
// }


//! 3. Crie uma estrutura Data com campos para dia, mês e ano. Em seguida, crie uma
//! estrutura Aluno com campos para nome, número de matrícula e data de nascimento.
//! Crie uma função que recebe um aluno como argumento e imprime todas as
//! informações dele, incluindo a data de nascimento.

// struct Data{
//     int dia;
//     int mes; 
//     int ano;
// };

// struct Aluno{
//     char nome[50];
//     int matricula;
//     struct Data dataNasc;
// };

// void imprimirAluno(struct Aluno a){
//     printf("Nome do Aluno: %s Matricula:%d \n Data de Nascimento: %d/%d/%d", a.nome, a.matricula, a.dataNasc.dia, a.dataNasc.mes, a.dataNasc.ano);
// }

// int main(){

//     struct Aluno aluno1;    
//     printf("Digite seu nome:");
//     fgets(aluno1.nome,sizeof(aluno1.nome), stdin);
//     printf("Digite sua matricula:");
//     scanf("%d", &aluno1.matricula);
//     printf("Digite a data do seu nascimento: (Dia/Mes/Ano)");
//     scanf("%d/%d/%d", &aluno1.dataNasc.dia, &aluno1.dataNasc.mes, &aluno1.dataNasc.ano);

//     imprimirAluno(aluno1);

//     return 0;
// }

//! 4. Crie uma estrutura Tempo com campos para hora, minuto e segundo. Em seguida,
//! crie uma estrutura DataHora que inclui uma estrutura Data com campos para dia,
//! mês e ano e uma estrutura Tempo. Aninhe essas estruturas para representar uma data
//! e hora completa. Crie funções para imprimir a data e a hora separadamente.

// struct Tempo{
//     int hora;
//     int minuto;
//     int segundo;
// };

// struct Data{
//     int dia;
//     int mes;
//     int ano;
// };

// struct DataHora{
//     struct Data data;
//     struct Tempo tempo;
// };

// void imprimirData(struct Data a){
//     printf("Data Completa:%d/%d/%d", a.dia, a.mes , a.ano);
// }

// void imprimirTempo(struct Tempo a){
//     printf("Horario escrito:%d:%d:%d", a.hora, a.minuto, a.segundo);
// }


// int main(){

//     struct DataHora dh;

//     printf("Digite um horario: (horas/minutos/segundos)");
//     scanf("%d %d %d", &dh.tempo.hora, &dh.tempo.minuto, &dh.tempo.segundo);
//     printf("Digte uma Data: (Dia/Mes/Ano)");
//     scanf("%d %d %d", &dh.data.dia, &dh.data.mes,&dh.data.ano);

//     imprimirData(dh.data);
//     imprimirTempo(dh.tempo);
    
//     return 0;
// }

//!? 5. Crie uma estrutura chamada ContaBancaria com campos para o número da conta, o
//!? nome do titular e o saldo. Escreva funções para depositar dinheiro na conta, sacar
//!? dinheiro da conta e imprimir o saldo atual.

// struct contaBancaria{
//     int numeroConta;
//     char nomeTitular[50];
//     float saldo;
// };

// void depositar(struct contaBancaria a){

// }

// void sacar(struct contaBancaria a){

// }

// void imprimirSaldo(struct contaBancaria a){

// }

// int main(){

//     struct contaBancaria CB;

//     printf("Digite o nome do titular:");
//     fgets(&CB.nomeTitular, sizeof(&CB.nomeTitular), stdin);
//     printf("Digite o numero da conta:");
//     scanf("%d", &CB.numeroConta);
//     printf("Digite o saldo inicial da conta:");
//     scanf("%f", &CB.saldo);

//     float Valor;
//     return 0;
// }

//! 6. Crie uma estrutura chamada Carro com campos para a marca, o modelo e o ano de
//! fabricação. Declare um array de 3 carros e preencha-o com informações de
//! diferentes carros. Em seguida, escreva um programa que percorra o array e imprima
//! as informações de cada carro

// struct Carro{
//     char marca[50];
//     char modelo[50];
//     int ano;
// };

// int main(){
    
//     struct Carro carro[3];

//     for (int i = 0; i < 3; i++){
//         printf("Qual a marca do carro:");
//         fgets(carro[i].marca, sizeof(carro[i].marca),stdin);
//         printf("Qual o modelo do carro:");
//         fgets(carro[i].modelo, sizeof(carro[i].modelo), stdin);
//         printf("Qual o ano do carro:");
//         scanf("%d", &carro[i].ano);
//         getchar();
//     }

//     for (int i = 0; i < 3; i++){
//         printf("\nMarca do carro: %s Modelo do carro: %s  Ano do carro:%d", carro[i].marca, carro[i].modelo, carro[i].ano);
//     }
    
    
//     return 0;
// }

