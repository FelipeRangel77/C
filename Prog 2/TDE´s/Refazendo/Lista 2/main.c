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
//todo UTILIZA PONTEIRO

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

//? 7. Crie uma estrutura Funcionario com campos para nome e salário. Crie um programa
//? que permita ao usuário digitar o número de funcionários e, em seguida, aloque
//? dinamicamente um array de Funcionarios. Permita que o usuário insira o nome e o
//? salário de cada funcionário e, em seguida, calcule e imprima o salário médio dos
//? funcionários.
//todo UTILIZA PONTEIRO 

// ? "&" = endereço, "*" = valor
// struct Funcionario {
//     char nome[50];
//     float salario;
// };

// typedef struct Funcionario funcionario;

// int main(){
//     int n = 0;
//     float media = 0;
//     float soma = 0;
    
//     printf("quantos funcionarios tem na sua empresa:");
//     scanf("%d",&n);
//     getchar();

//     if (n < 1){
//         printf("Quantidade invalida de funcionarios!");
//         return 1;
//     }

//     //* Alocação dinamica de memoria para funcionarios
//     funcionario *funcionarios = malloc(n * sizeof(funcionario));


//     if (funcionarios == NULL){
//         printf("ERRO!");
//         return 1;
//     }

//     // ! mesma coisa


//     for (int i = 0; i < n; i++){
//         printf("Digite o nome do funcionario:");
//         fgets(funcionarios[i].nome, sizeof(funcionarios[i].nome), stdin);
//         printf("Salario:");
//         scanf("%f", &funcionarios[i].salario);
//         getchar();
//         soma += funcionarios[i].salario;
//     }
    
//     media = soma / n;
//     printf("\nSalário médio dos funcionários: %.2f\n", media);

//     // Libera a memória alocada
//     free(funcionarios);

    

//     return 0;
// }


//! 8. Crie uma estrutura Cliente com campos para nome e idade. Crie um programa que
//! permita ao usuário digitar o número de clientes e, em seguida, aloque
//! dinamicamente um array de Clientes. Permita que o usuário insira o nome e a idade
//! de cada cliente e, em seguida, identifique e imprima o cliente mais velho.

// struct Cliente{
//     char nome[50];
//     int idade;
// };

// void imprimirMaisVelho(struct Cliente a){

// }

// int main(){

//     int n;

//     printf("digite o numero de clintes"); 

//     return 0;
// }

//* 2- Crie uma estrutura chamada "time" com campos para o nome, ano e uma estrutura "presidente". Crie a estrutura "presidente" com os campos nome e idade. Preencha os dados das estruturas pedindo estes dados para o usuário. Depois exiba estes mesmos dados. (1,5 pontos).

// struct Presidente {
//     char nome[50];
//     int idade;
// };
// typedef struct Presidente presidente;

// struct Time {
//     char nome[255];
//     int ano;
//     presidente presidente;
// };
// typedef struct Time time;


// int main(void) {
//     time time1;

//     printf("digite o nome do time:");
//     fgets(time1.nome,sizeof(time1.nome),stdin);
//     printf("digite o ano em que o clube foi criado:");
//     scanf("%d", &time1.ano );
//     getchar();
//     printf("Nome do presidas:");
//     fgets(time1.presidente.nome, sizeof(time1.presidente.nome),stdin);
//     printf("Digite a idade do presidente:");
//     scanf("%d", &time1.presidente.idade);
//     getchar();

//     printf("Nome do time: %s", time1.nome);
//     printf("Ano em qual o time foi criado: %d\n", time1.ano);
//     printf("Nome do Presidente do clube: %s", time1.presidente.nome);
//     printf("Idade do presidente: %d\n", time1.presidente.idade);

//     return 0;
// }


//* 3- A empresa ChicoSoluções solicitou sua ajuda para calcular o bônus anual de seus funcionários. O cálculo do bônus é feito somando o valor total do salário anual do funcionário e dividindo por 15. Para os colaboradores com 10 ou mais anos de empresa o valor do bônus será acrescido de 20%, enquanto para os demais funcionários o cálculo é feito sem esse acréscimo.

//?! Na main, crie e faça o preenchimento de um vetor a ser alocado dinamicamente, perguntando a quantidade e as informações ao usuário do sistema. Lembre-se que existe um vetor de salários que também deve ser preenchido. (1,5 ponto)

//?! Exiba o nome do funcionário que receberá o menor salário anual (1,5 ponto)

//? Faça uma função que recebe o vetor de funcionários e exiba para cada funcionário o nome dele, o tempo de serviço e quanto ele deve receber de bônus. (1,5 ponto)

//todo Utilize a estrutura abaixo como referência.

// struct Funcionario {
//     char nome[50];
//     int anosEmpresa;
//     float salarios [12];
//     float bonusFinal;
// };

// typedef struct Funcionario funcionario;

// void exibirDadosFunc(funcionario *funcionarios, int qtd);

// int main(){

//     int qtd;
//     char nomeMenorSalario[50];

//     printf("quantos funcionarios tem sua empresa:");
//     scanf("%d", &qtd);
//     getchar();

//     funcionario *funcionarios = malloc(qtd * sizeof(funcionario));

//     if (funcionarios == NULL){
//         printf("ERRO!");
//         return 1;
//     }

//     for (int i = 0; i < qtd; i++){
        
//         float menorSalario = 0;

//         printf("Nome:");
//         fgets(funcionarios[i].nome, sizeof(funcionarios[i].nome),stdin);
//         printf("anos na empresa:");
//         scanf("%d", &funcionarios[i].anosEmpresa);
//         getchar();

//         float soma = 0;

//         for (int j = 0; j < 12; j++){
//             printf("Digite seu salario mensal:");
//             scanf("%f", &funcionarios[i].salarios[j]);
//             getchar();
//             soma += funcionarios[i].salarios[j];
//         }

//         if (soma < menorSalario || menorSalario == 0) {
//             menorSalario = soma;
//             strcpy(nomeMenorSalario, funcionarios[i].nome);
//         }
        
//         if (funcionarios[i].anosEmpresa >= 10){
//             funcionarios[i].bonusFinal =(soma / 15) * 1.20;
//         }
//         else{ 
//             funcionarios[i].bonusFinal = soma/15;
//         }
//     }
//     printf("Nome func menor salario: %s", nomeMenorSalario);

//     exibirDadosFunc(funcionarios, qtd);

//     return 0;
// }

// void exibirDadosFunc(funcionario *funcionarios, int qtd) {
//     for (int i = 0; i < qtd; i++){
//         printf("Nome do funcionario: %s\n", funcionarios[i].nome);
//         printf("Tempo serviço %d", funcionarios[i].anosEmpresa);
//         printf("Bonus final: R$%.2f\n", funcionarios[i].bonusFinal);
//     }
    
// }

//!  1 - Crie uma estrutura chamada "filme" com campos para o nome, ano e uma estrutura "diretor". 
//! Crie a estrutura "diretor' com os campos nome, país e idade. 
//! Preencha os dados das estruturas pedindo estes dados para o usuário. Depois exiba estes mesmos dados.

// struct Diretor{
//     char nome[50];
//     char pais[50];
//     int idade;
// };

// typedef struct Diretor diretor;
// struct Filme{
//     char nome[50];
//     int ano;
//     diretor diretor;
// };

// typedef struct Filme filme;



// int main(){

//     filme filme;

//     printf("digite o nome do filme:");
//     fgets(filme.nome,sizeof(filme.nome), stdin);
//     printf("digite o ano do filme:");
//     scanf("%d", &filme.ano);
//     getchar();
//     printf("digite o nome do diretor:");
//     fgets(filme.diretor.nome, sizeof(filme.diretor.nome),stdin);
//     printf("digite o pais do diretor:");
//     fgets(filme.diretor.pais, sizeof(filme.diretor.pais),stdin);
//     printf("digite a idade do diretor:");
//     scanf("%d", &filme.diretor.idade);

//     printf("Nome do filme: %s", filme.nome);
//     printf("Ano do filme:%d\n", filme.ano);
//     printf("Nome do diretor: %s",filme.diretor.nome);
//     printf("Pais do diretor: %s", filme.diretor.pais);
//     printf("Idade do diretor: %d\n",filme.diretor.idade);

// }



//? 3 - A empresa TechSoluções solicitou sua ajuda para calcular o bônus semestral de seus colaboradores.
//?  O cálculo do bônus é feito somando o valor total recebido dos primeiros 6 meses do ano e dividindo por 6.
//?  Para os colaboradores com cargo de "desenvolvedor", o valor do bônus será acrescido de 15%, enquanto para os demais funcionários o cálculo é feito sem esse acréscimo.
//?  Na main, crie e faça o preenchimento de um vetor com 30 funcionários, perguntando as informações ao usuário do sistema. Lembre-se que existe um vetor de salários que também deve ser preenchido. 
//?  Faça o cálculo do valor final a ser recebido e atribua à variável "bônus" dentro de cada estrutura. Pode ser feito em qualquer ponto do código antes da exibição. 
//?  Faça uma função que recebe o vetor de colaboradores e exiba para cada colaborador o nome dele, o cargo e quanto ele deve receber de bônus. 
struct Colaborador{
    char nome[50];
    char cargo[50];
    float salario [6];
    float bonus;
};

typedef struct Colaborador colaborador;

void imprimirDados(colaborador *colaboradores);

int main(){

    colaborador colaboradores[30];
    float soma;

    
    for (int i = 0; i < 30; i++){
        printf("Qual seu nome:");
        fgets(colaboradores[i].nome, sizeof(colaboradores[i].nome),stdin);
        printf("Qual a sua função: (digite em letras minusculas):");
        fgets(colaboradores[i].cargo,sizeof(colaboradores[i].cargo),stdin);
        for (int j = 0; j < 6; i++){
            printf("digite o seu salario:");
            scanf("%f",&colaboradores[i].salario[j]);
            soma += colaboradores[i].salario[j];
        }
        if (strcmp(colaboradores[i].cargo,"desenvolvedor")==0){
            colaboradores[i].bonus = (soma / 6) *1.15;
        }
        else{
            colaboradores[i].bonus = 0;
        }
        
    }
    
    return 0;
}

void imprimirDados(colaborador *colaboradores){
    for (int i = 0; i < 30; i++){
        printf("Nome: %s", colaboradores[i].nome);
        printf("Cargo: %s", colaboradores[i].cargo);
        printf("Bonus recebido:%s", colaboradores[i].bonus);
    }
    
}