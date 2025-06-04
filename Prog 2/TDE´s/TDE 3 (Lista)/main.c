#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//! numero 1
// struct Livro {
//     char titulo[50];
//     char autor[50];
//     int paginas;
// };

// void imprimirLivro(struct Livro l) {
//     printf("Titulo: %s\nAutor: %s\nPaginas: %d\n", l.titulo, l.autor, l.paginas);
// }

// int main() {
//     struct Livro livro1;
//     printf("Digite o titulo do livro: ");
//     fgets(livro1.titulo, 50, stdin);
//     printf("Digite o autor do livro: ");
//     fgets(livro1.autor, 50, stdin);
//     printf("Digite o numero de paginas: ");
//     scanf("%d", &livro1.paginas);

//     imprimirLivro(livro1);
//     return 0;
// }



//! Número 2
// struct Aluno {
//     char nome[50];
//     int matricula;
//     float notas[3];
// };

// float calcularMedia(struct Aluno a) {
//     return (a.notas[0] + a.notas[1] + a.notas[2]) / 3.0;
// }

// int main() {
//     struct Aluno aluno1;
//     printf("Digite o nome do aluno: ");
//     fgets(aluno1.nome, 50, stdin);
//     printf("Digite o numero de matricula: ");
//     scanf("%d", &aluno1.matricula);
//     printf("Digite as 3 notas: ");
//     scanf("%f %f %f", &aluno1.notas[0], &aluno1.notas[1], &aluno1.notas[2]);

//     printf("Media do aluno: %.2f\n", calcularMedia(aluno1));
//     return 0;
// }


//! Número 3
// struct Data {
//     int dia, mes, ano;
// };

// struct Aluno {
//     char nome[50];
//     int matricula;
//     struct Data nascimento;
// };

// void imprimirAluno(struct Aluno a) {
//     printf("Nome: %sMatricula: %d\nNascimento: %02d/%02d/%d\n", a.nome, a.matricula, a.nascimento.dia, a.nascimento.mes, a.nascimento.ano);
// }

// int main() {
//     struct Aluno aluno1;
//     printf("Digite o nome do aluno: ");
//     fgets(aluno1.nome, 50, stdin);
//     printf("Digite a matricula: ");
//     scanf("%d", &aluno1.matricula);
//     printf("Digite a data de nascimento (dia mes ano): ");
//     scanf("%d %d %d", &aluno1.nascimento.dia, &aluno1.nascimento.mes, &aluno1.nascimento.ano);

//     imprimirAluno(aluno1);
//     return 0;
// }


//! Número 4
// struct Tempo {
//     int hora, minuto, segundo;
// };

// struct Data {
//     int dia, mes, ano;
// };

// struct DataHora {
//     struct Data data;
//     struct Tempo tempo;
// };

// void imprimirData(struct Data d) {
//     printf("Data: %02d/%02d/%d\n", d.dia, d.mes, d.ano);
// }

// void imprimirTempo(struct Tempo t) {
//     printf("Hora: %02d:%02d:%02d\n", t.hora, t.minuto, t.segundo);
// }

// int main() {
//     struct DataHora dh;
//     printf("Digite a data (dia mes ano): ");
//     scanf("%d %d %d", &dh.data.dia, &dh.data.mes, &dh.data.ano);
//     printf("Digite a hora (hora minuto segundo): ");
//     scanf("%d %d %d", &dh.tempo.hora, &dh.tempo.minuto, &dh.tempo.segundo);

//     imprimirData(dh.data);
//     imprimirTempo(dh.tempo);
//     return 0;
// }



//! Número 5
// struct ContaBancaria {
//     int numero;
//     char titular[50];
//     float saldo;
// };

// void depositar(struct ContaBancaria *conta, float valor) {
//     conta->saldo += valor;
// }

// void sacar(struct ContaBancaria *conta, float valor) {
//     if (valor <= conta->saldo) {
//         conta->saldo -= valor;
//     } else {
//         printf("Saldo insuficiente!\n");
//     }
// }

// void imprimirSaldo(struct ContaBancaria conta) {
//     printf("Saldo atual: R$%.2f\n", conta.saldo);
// }

// int main() {
//     struct ContaBancaria conta1;
//     printf("Digite o numero da conta: ");
//     scanf("%d", &conta1.numero);
//     getchar();  // Limpar buffer
//     printf("Digite o nome do titular: ");
//     fgets(conta1.titular, 50, stdin);
//     printf("Digite o saldo inicial: ");
//     scanf("%f", &conta1.saldo);

//     float valor;
//     printf("Digite o valor para depositar: ");
//     scanf("%f", &valor);
//     depositar(&conta1, valor);

//     printf("Digite o valor para sacar: ");
//     scanf("%f", &valor);
//     sacar(&conta1, valor);

//     imprimirSaldo(conta1);
//     return 0;
// }


//! Número 6
// struct Carro {
//     char marca[50];
//     char modelo[50];
//     int ano;
// };

// int main() {
//     struct Carro carros[3];

//     for (int i = 0; i < 3; i++) {
//         printf("Digite a marca do carro %d: ", i + 1);
//         fgets(carros[i].marca, 50, stdin);
//         printf("Digite o modelo do carro %d: ", i + 1);
//         fgets(carros[i].modelo, 50, stdin);
//         printf("Digite o ano de fabricacao do carro %d: ", i + 1);
//         scanf("%d", &carros[i].ano);
//         getchar(); // Limpar buffer
//     }

//     for (int i = 0; i < 3; i++) {
//         printf("Carro %d\nMarca: %sModelo: %sAno: %d\n", i + 1, carros[i].marca, carros[i].modelo, carros[i].ano);
//     }

//     return 0;
// }


//! Número 7
// struct Funcionario {
//     char nome[50];
//     float salario;
// };

// int main() {
//     int n;
//     printf("Digite o numero de funcionarios: ");
//     scanf("%d", &n);
//     getchar(); // Limpar buffer

//     struct Funcionario *funcionarios = (struct Funcionario *)malloc(n * sizeof(struct Funcionario));

//     for (int i = 0; i < n; i++) {
//         printf("Digite o nome do funcionario %d: ", i + 1);
//         fgets(funcionarios[i].nome, 50, stdin);
//         printf("Digite o salario do funcionario %d: ", i + 1);
//         scanf("%f", &funcionarios[i].salario);
//         getchar(); // Limpar buffer
//     }

//     float soma = 0;
//     for (int i = 0; i < n; i++) {
//         soma += funcionarios[i].salario;
//     }

//     printf("Salario medio: %.2f\n", soma / n);

//     free(funcionarios);
//     return 0;
// }


//! Número 8
// struct Cliente {
//     char nome[50];
//     int idade;
// };

// int main() {
//     int n;
//     printf("Digite o numero de clientes: ");
//     scanf("%d", &n);
//     getchar(); // Limpar buffer

//     struct Cliente *clientes = (struct Cliente *)malloc(n * sizeof(struct Cliente));

//     for (int i = 0; i < n; i++) {
//         printf("Digite o nome do cliente %d: ", i + 1);
//         fgets(clientes[i].nome, 50, stdin);
//         printf("Digite a idade do cliente %d: ", i + 1);
//         scanf("%d", &clientes[i].idade);
//         getchar(); // Limpar buffer
//     }

//     struct Cliente maisVelho = clientes[0];

//     for (int i = 1; i < n; i++) {
//         if (clientes[i].idade > maisVelho.idade) {
//             maisVelho = clientes[i];
//         }
//     }

//     printf("Cliente mais velho: %sIdade: %d\n", maisVelho.nome, maisVelho.idade);

//     free(clientes);
//     return 0;
// }



//! Número 9
// struct Produto {
//     char nome[50];
//     float preco;
//     int quantidade;
// };

// int main() {
//     int n;
//     printf("Digite o numero de produtos: ");
//     scanf("%d", &n);
//     getchar(); // Limpar buffer

//     struct Produto *produtos = (struct Produto *)malloc(n * sizeof(struct Produto));

//     for (int i = 0; i < n; i++) {
//         printf("Digite o nome do produto %d: ", i + 1);
//         fgets(produtos[i].nome, 50, stdin);
//         printf("Digite o preco do produto %d: ", i + 1);
//         scanf("%f", &produtos[i].preco);
//         printf("Digite a quantidade em estoque do produto %d: ", i + 1);
//         scanf("%d", &produtos[i].quantidade);
//         getchar(); // Limpar buffer
//     }

//     float total = 0;
//     for (int i = 0; i < n; i++) {
//         total += produtos[i].preco * produtos[i].quantidade;
//     }

//     printf("Valor total em estoque: R$%.2f\n", total);

//     free(produtos);
//     return 0;
// }



//! Número 10
// struct Produto {
//     int codigo;
//     char descricao[30];
//     float preco;
// };

// int main() {
//     struct Produto produtos[10];

//     for (int i = 0; i < 10; i++) {
//         printf("Digite o codigo do produto %d: ", i + 1);
//         scanf("%d", &produtos[i].codigo);
//         getchar(); // Limpar buffer
//         printf("Digite a descricao do produto %d: ", i + 1);
//         fgets(produtos[i].descricao, 30, stdin);
//         printf("Digite o preco do produto %d: ", i + 1);
//         scanf("%f", &produtos[i].preco);
//         getchar(); // Limpar buffer
//     }

//     printf("Produtos cadastrados:\n");
//     for (int i = 0; i < 10; i++) {
//         printf("Codigo: %d\nDescricao: %sPreco: %.2f\n", produtos[i].codigo, produtos[i].descricao, produtos[i].preco);
//     }

//     float aumento;
//     printf("Digite o percentual de aumento de preco: ");
//     scanf("%f", &aumento);

//     for (int i = 0; i < 10; i++) {
//         produtos[i].preco += produtos[i].preco * (aumento / 100);
//     }

//     printf("Produtos apos reajuste:\n");
//     for (int i = 0; i < 10; i++) {
//         printf("Codigo: %d\nDescricao: %sPreco: %.2f\n", produtos[i].codigo, produtos[i].descricao, produtos[i].preco);
//     }

//     return 0;
// }



//! Número 11
// struct Pessoa {
//     char sexo;
//     char olhos[10];
//     char cabelos[10];
//     int idade;
// };

// int main() {
//     struct Pessoa pessoa, homemMaisNovo;
//     int totalMulheres = 0, totalPessoas = 0, somaIdadesMulheres = 0, lourosAzuis = 0;
//     homemMaisNovo.idade = 999;

//     while (1) {
//         printf("Digite o sexo (M/F) ou 'X' para sair: ");
//         scanf(" %c", &pessoa.sexo);
//         if (pessoa.sexo == 'X') break;

//         printf("Digite a cor dos olhos (azul, verde, castanho): ");
//         scanf("%s", pessoa.olhos);
//         printf("Digite a cor dos cabelos (louro, castanho, preto, ruivo): ");
//         scanf("%s", pessoa.cabelos);
//         printf("Digite a idade: ");
//         scanf("%d", &pessoa.idade);

//         totalPessoas++;

//         if (pessoa.sexo == 'M' && pessoa.idade < homemMaisNovo.idade) {
//             homemMaisNovo = pessoa;
//         }
//         if (pessoa.sexo == 'F') {
//             somaIdadesMulheres += pessoa.idade;
//             totalMulheres++;
//         }
//         if (strcmp(pessoa.cabelos, "louro") == 0 && strcmp(pessoa.olhos, "azul") == 0) {
//             lourosAzuis++;
//         }
//     }

//     printf("Homem mais novo: %d anos\n", homemMaisNovo.idade);
//     printf("Numero de pessoas entrevistadas: %d\n", totalPessoas);
//     printf("Idade media das mulheres: %.2f\n", totalMulheres > 0 ? (float)somaIdadesMulheres / totalMulheres : 0);
//     printf("Percentagem de cabelos louros e olhos azuis: %.2f%%\n", (float)lourosAzuis / totalPessoas * 100);

//     return 0;
// }



//! Número 12
// void copiarLinhasImpares(FILE *origem, FILE *destino) {
//     char linha[256];
//     int numeroLinha = 1;

//     while (fgets(linha, sizeof(linha), origem) != NULL) {
//         if (numeroLinha % 2 != 0) {
//             fputs(linha, destino);
//         }
//         numeroLinha++;
//     }
// }

// int main() {
//     FILE *arquivoOrigem = fopen("origem.txt", "r");
//     FILE *arquivoDestino = fopen("impares.txt", "w");

//     if (arquivoOrigem == NULL || arquivoDestino == NULL) {
//         printf("Erro ao abrir arquivos!\n");
//         return 1;
//     }

//     copiarLinhasImpares(arquivoOrigem, arquivoDestino);

//     fclose(arquivoOrigem);
//     fclose(arquivoDestino);
//     printf("Linhas ímpares copiadas com sucesso!\n");

//     return 0;
// }


//! Número 13
// int main() {
//     FILE *origem = fopen("origem.txt", "r");
//     FILE *destino = fopen("destino.txt", "w");
//     char c;

//     if (origem == NULL || destino == NULL) {
//         printf("Erro ao abrir arquivos!\n");
//         return 1;
//     }

//     while ((c = fgetc(origem)) != EOF) {
//         fputc(c, destino);
//     }

//     fclose(origem);
//     fclose(destino);
//     printf("Conteúdo copiado com sucesso!\n");

//     return 0;
// }


//! Número 14
// int main() {
//     FILE *arquivo = fopen("numeros.txt", "r");
//     int num, soma = 0, total = 0;

//     if (arquivo == NULL) {
//         printf("Erro ao abrir arquivo!\n");
//         return 1;
//     }

//     while (fscanf(arquivo, "%d", &num) != EOF) {
//         soma += num;
//         total++;
//     }

//     fclose(arquivo);
//     printf("Média dos números: %.2f\n", total > 0 ? (float)soma / total : 0);

//     return 0;
// }


//! Número 15
// struct Aluno {
//     char nome[50];
//     int matricula;
//     int idade;
//     float media;
// };

// int main() {
//     FILE *arquivo = fopen("alunos.dat", "ab");
//     struct Aluno aluno;

//     if (arquivo == NULL) {
//         printf("Erro ao abrir arquivo!\n");
//         return 1;
//     }

//     printf("Digite o nome do aluno: ");
//     fgets(aluno.nome, 50, stdin);
//     printf("Digite a matricula: ");
//     scanf("%d", &aluno.matricula);
//     printf("Digite a idade: ");
//     scanf("%d", &aluno.idade);
//     printf("Digite a media: ");
//     scanf("%f", &aluno.media);

//     fwrite(&aluno, sizeof(struct Aluno), 1, arquivo);

//     fclose(arquivo);
//     printf("Aluno cadastrado com sucesso!\n");

//     return 0;
// }


//! Número 16
// struct Aluno {
//     char nome[50];
//     int matricula;
//     int idade;
//     float media;
// };

// void buscarAluno(char nomeBusca[]) {
//     FILE *arquivo = fopen("alunos.dat", "rb");
//     struct Aluno aluno;
//     int encontrado = 0;

//     if (arquivo == NULL) {
//         printf("Erro ao abrir arquivo!\n");
//         return;
//     }

//     while (fread(&aluno, sizeof(struct Aluno), 1, arquivo)) {
//         if (strcmp(aluno.nome, nomeBusca) == 0) {
//             printf("Matricula: %d\nIdade: %d\nMedia: %.2f\n", aluno.matricula, aluno.idade, aluno.media);
//             encontrado = 1;
//             break;
//         }
//     }

//     fclose(arquivo);

//     if (!encontrado) {
//         printf("Aluno nao encontrado!\n");
//     }
// }

// int main() {
//     char nomeBusca[50];
//     printf("Digite o nome do aluno para buscar: ");
//     fgets(nomeBusca, 50, stdin);
//     nomeBusca[strcspn(nomeBusca, "\n")] = 0;
//     buscarAluno(nomeBusca);

//     return 0;
// }



//! Número 17
// struct Colegio {
//     char nome[50];
//     char cidade[50];
//     int anoFundacao;
// };

// int main() {
//     FILE *arquivo = fopen("ensino.txt", "a");
//     struct Colegio colegio;

//     if (arquivo == NULL) {
//         printf("Erro ao abrir arquivo!\n");
//         return 1;
//     }

//     while (1) {
//         printf("Digite o nome do colegio (ou 'X' para sair): ");
//         fgets(colegio.nome, 50, stdin);
//         if (colegio.nome[0] == 'X') break;

//         printf("Digite a cidade: ");
//         fgets(colegio.cidade, 50, stdin);
//         printf("Digite o ano de fundacao: ");
//         scanf("%d", &colegio.anoFundacao);
//         getchar(); // Limpar buffer

//         fprintf(arquivo, "%s%s%d\n", colegio.nome, colegio.cidade, colegio.anoFundacao);
//     }

//     fclose(arquivo);
//     printf("Dados cadastrados com sucesso!\n");

//     return 0;
// }



//! Número 18
// struct Pessoa {
//     char nome[50];
//     char sexo;
//     int idade;
// };

// int main() {
//     FILE *arquivo = fopen("pessoas.txt", "a");
//     struct Pessoa pessoa, maisVelha;
//     int total = 0, somaIdades = 0;

//     maisVelha.idade = 0;

//     if (arquivo == NULL) {
//         printf("Erro ao abrir arquivo!\n");
//         return 1;
//     }

//     while (1) {
//         printf("Digite o nome da pessoa (ou 'X' para sair): ");
//         fgets(pessoa.nome, 50, stdin);
//         if (pessoa.nome[0] == 'X') break;

//         printf("Digite o sexo (M/F): ");
//         scanf(" %c", &pessoa.sexo);
//         printf("Digite a idade: ");
//         scanf("%d", &pessoa.idade);
//         getchar(); // Limpar buffer

//         fprintf(arquivo, "%s %c %d\n", pessoa.nome, pessoa.sexo, pessoa.idade);

//         total++;
//         somaIdades += pessoa.idade;
//         if (pessoa.idade > maisVelha.idade) {
//             maisVelha = pessoa;
//         }
//     }

//     fclose(arquivo);
    
//     printf("Pessoa mais velha cadastrada: %sIdade: %d\n", maisVelha.nome, maisVelha.idade);
//     printf("Media de idades: %.2f\n", total > 0 ? (float)somaIdades / total : 0);

//     return 0;
// }



//! Número 19
// int main() {
//     FILE *arquivo = fopen("texto.txt", "r");
//     char c;
//     int contador = 0;

//     if (arquivo == NULL) {
//         printf("Erro ao abrir arquivo!\n");
//         return 1;
//     }

//     while ((c = fgetc(arquivo)) != EOF) {
//         if (c == 'a') {
//             contador++;
//         }
//     }

//     fclose(arquivo);
//     printf("Numero de ocorrencias da letra 'a': %d\n", contador);

//     return 0;
// }


//! Número 20
// int main() {
//     FILE *arquivo = fopen("texto.txt", "r");
//     char palavra[256];
//     int contador = 0;

//     if (arquivo == NULL) {
//         printf("Erro ao abrir arquivo!\n");
//         return 1;
//     }

//     while (fscanf(arquivo, "%s", palavra) != EOF) {
//         if (strcmp(palavra, "de") == 0) {
//             contador++;
//         }
//     }

//     fclose(arquivo);
//     printf("Numero de ocorrencias da palavra 'de': %d\n", contador);

//     return 0;
// }


//! Número 21
// int main() {
//     FILE *arquivo = fopen("texto.txt", "r");
//     char palavra[256], busca[50];
//     int contador = 0;

//     if (arquivo == NULL) {
//         printf("Erro ao abrir arquivo!\n");
//         return 1;
//     }

//     printf("Digite a palavra para buscar: ");
//     scanf("%s", busca);

//     while (fscanf(arquivo, "%s", palavra) != EOF) {
//         if (strcmp(palavra, busca) == 0) {
//             contador++;
//         }
//     }

//     fclose(arquivo);

//     if (contador > 0) {
//         printf("A palavra '%s' ocorre %d vezes no texto.\n", busca, contador);
//     } else {
//         printf("A palavra '%s' nao foi encontrada no texto.\n", busca);
//     }

//     return 0;
// }


//! Número 22
// int main() {
//     int n;
//     printf("Digite o tamanho do array: ");
//     scanf("%d", &n);

//     int *array = (int *)malloc(n * sizeof(int));

//     if (array == NULL) {
//         printf("Erro ao alocar memoria!\n");
//         return 1;
//     }

//     printf("Digite os numeros do array:\n");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &array[i]);
//     }

//     int soma = 0;
//     for (int i = 0; i < n; i++) {
//         soma += array[i];
//     }

//     printf("Soma dos elementos: %d\n", soma);

//     free(array);
//     return 0;
// }



//! Número 23
// int main() {
//     int n;
//     printf("Digite o tamanho do array: ");
//     scanf("%d", &n);

//     int *array = (int *)malloc(n * sizeof(int));
//     int *copia = (int *)malloc(n * sizeof(int));

//     if (array == NULL || copia == NULL) {
//         printf("Erro ao alocar memoria!\n");
//         return 1;
//     }

//     printf("Digite os numeros do array:\n");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &array[i]);
//         copia[i] = array[i];
//     }

//     printf("Array copiado:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", copia[i]);
//     }
//     printf("\n");

//     free(array);
//     free(copia);
//     return 0;
// }



//! Número 24
// int main() {
//     int n, remover;
//     printf("Digite o tamanho do array: ");
//     scanf("%d", &n);

//     int *array = (int *)malloc(n * sizeof(int));

//     if (array == NULL) {
//         printf("Erro ao alocar memoria!\n");
//         return 1;
//     }

//     printf("Digite os numeros do array:\n");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &array[i]);
//     }

//     printf("Digite o elemento a ser removido: ");
//     scanf("%d", &remover);

//     int novoTamanho = n;
//     for (int i = 0; i < novoTamanho; i++) {
//         if (array[i] == remover) {
//             for (int j = i; j < novoTamanho - 1; j++) {
//                 array[j] = array[j + 1];
//             }
//             novoTamanho--;
//             i--;
//         }
//     }

//     printf("Array apos remocao:\n");
//     for (int i = 0; i < novoTamanho; i++) {
//         printf("%d ", array[i]);
//     }
//     printf("\n");

//     free(array);
//     return 0;
// }



//! Número 25
// int main() {
//     int linhas, colunas, escalar;

//     printf("Digite o numero de linhas e colunas: ");
//     scanf("%d %d", &linhas, &colunas);

//     int **matriz = (int **)malloc(linhas * sizeof(int *));
//     for (int i = 0; i < linhas; i++) {
//         matriz[i] = (int *)malloc(colunas * sizeof(int));
//     }

//     printf("Digite os elementos da matriz:\n");
//     for (int i = 0; i < linhas; i++) {
//         for (int j = 0; j < colunas; j++) {
//             scanf("%d", &matriz[i][j]);
//         }
//     }

//     printf("Digite o valor do escalar: ");
//     scanf("%d", &escalar);

//     printf("Matriz apos multiplicacao:\n");
//     for (int i = 0; i < linhas; i++) {
//         for (int j = 0; j < colunas; j++) {
//             matriz[i][j] *= escalar;
//             printf("%d ", matriz[i][j]);
//         }
//         printf("\n");
//     }

//     for (int i = 0; i < linhas; i++) {
//         free(matriz[i]);
//     }
//     free(matriz);

//     return 0;
// }