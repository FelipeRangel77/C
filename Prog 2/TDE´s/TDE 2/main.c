#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000

struct cliente{
  char nome[100];
  int idade;
  char sexo;
};

struct venda{
  int numeroItens;
  float valorTotal;
  struct cliente cliente;
  char unidadeVenda;
};

struct venda vendas[MAX];
int totalVendas = 0;

int validarNome(char *nome);
int validarSexo(char sexo);
int validarUnidadeVenda(char unidadeVenda);

void carregarArquivo();
void salvarArquivo(struct venda v);

void cadastrarVendas();
void pesquisarVendaEspecifica();
void verTodasVendas();

int main(){
    carregarArquivo();
    int opcao = -1;

    do{
        printf("\n-- MENU --\n");
        printf("1. Cadastrar novas vendas\n");
        printf("2. Ver informacoes de uma venda especifica\n");
        printf("3. Ver informacoes de todas as vendas\n");
        printf("4. Encerrar o programa\n");
        printf("Escolha uma opcao: ");
        
        if (scanf("%d", &opcao) != 1) {
            printf("Opcao invalida. Tente novamente.\n");
            while(getchar() != '\n');
            continue;
        }

        switch (opcao){
            case 1:
                cadastrarVendas();
                break;
            case 2:
                pesquisarVendaEspecifica();
                break;
            case 3:
                verTodasVendas();
                break;
            case 4:
                printf("Programa encerrado.\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 4);
    return 0;
}
  
int validarNome(char *nome){
    int len = strlen(nome);
    if (len < 3){
        printf("Nome curto, menor que 3 letras\n");
        return 1;
    }
    return 0;
}
  
int validarSexo(char sexo){
    sexo = toupper(sexo);
    if (sexo != 'M' && sexo != 'F' && sexo != 'N'){
        printf("Sexo invalido");
        return 1;
    }
    return 0;
}
  
int validarUnidadeVenda(char unidadeVenda){
    unidadeVenda = toupper(unidadeVenda);
    if (unidadeVenda != 'A' && unidadeVenda != 'B' && unidadeVenda != 'C'){
        printf("Unidade de venda invalida\n");
        return 1;
    }
    return 0;
}


void carregarArquivo(){
    FILE *file = fopen("loja.txt", "r");
    if (!file) {
        return;
    }

    while (fscanf(file, "%s %c %d %d %c %f\n", vendas[totalVendas].cliente.nome, &vendas[totalVendas].cliente.sexo, &vendas[totalVendas].cliente.idade, &vendas[totalVendas].numeroItens, &vendas[totalVendas].unidadeVenda, &vendas[totalVendas].valorTotal) == 6) {
        totalVendas++;
    }
    fclose(file);
}

void salvarArquivo(struct venda v){
    FILE *file = fopen("loja.txt", "a");
    if (!file){
        printf("Erro ao abrir o arquivo para salvar.\n");
        return;
    }
    fprintf(file, "%s %c %d %d %c %.2f\n", v.cliente.nome, v.cliente.sexo, v.cliente.idade, v.numeroItens, v.unidadeVenda, v.valorTotal);
    fclose(file);
}

void cadastrarVendas(){
    int qtd = -1;
    do {
        printf("Quantas vendas deseja cadastrar? ");
        if(scanf("%d", &qtd) != 1 || qtd < 0) {
            printf("ERRO! Digite um valor valido!\n");
            while(getchar() != '\n');
            qtd = -1;
            continue;
        }
        getchar();
    } while (qtd == -1);

    for (int i = 0; i < qtd; i++) {
        struct venda nova;
        int flag = 1;

        printf("\nCadastro da venda %d:\n", i + 1);

        do{
            printf("Nome do cliente: ");
            fgets(nova.cliente.nome, sizeof(nova.cliente.nome), stdin);
            nova.cliente.nome[strcspn(nova.cliente.nome, "\n")] = '\0';
        } while (validarNome(nova.cliente.nome) == 1);

        do{
            printf("Sexo do cliente (M/F/N): ");
            scanf(" %c", &nova.cliente.sexo);
        } while (validarSexo(nova.cliente.sexo) == 1);

        do {
            printf("Idade do cliente: ");
            if (scanf("%d", &nova.cliente.idade) != 1 || nova.cliente.idade < 0) {
                printf("ERRO! Digite um valor valido!\n");
                while(getchar() != '\n');
                continue;
            }
        } while (nova.cliente.idade < 0);

        do{
            printf("Unidade de venda (A/B/C): ");
            scanf(" %c", &nova.unidadeVenda);
        }while (validarUnidadeVenda(nova.unidadeVenda) == 1);

        do {
            flag = 0;
            printf("Valor total da venda: ");
            if (scanf("%f", &nova.valorTotal) != 1 || nova.valorTotal < 0) {
                printf("Valor invalido\n");
                flag = 1;
                while (getchar() != '\n');
                continue;
            }
            getchar();
        } while (flag == 1);


        do {
            flag = 0;
            printf("Numero de itens: ");
            if (scanf("%d", &nova.numeroItens) != 1 || nova.numeroItens < 0) {
                printf("Numero de itens invalido\n");
                flag = 1;
                while(getchar() != '\n');
                continue;
            }
            getchar();
        } while (flag == 1);
    
        vendas[totalVendas++] = nova;
        salvarArquivo(nova);

        printf("Venda cadastrada com sucesso!\n");
    }
}

void pesquisarVendaEspecifica(){
    char nome[100];
    printf("Digite o nome do cliente: ");
    scanf("%s", nome);

    float total = 0;
    int encontrou = 0;

    for (int i = 0; i < totalVendas; i++){
        if(strcmp(vendas[i].cliente.nome, nome) == 0){
            encontrou = 1;
            printf("\nItens: %d, Unidade: %c, Valor: %.2f\n", vendas[i].numeroItens, vendas[i].unidadeVenda, vendas[i].valorTotal);
            total += vendas[i].valorTotal;
        }
    }
    if (encontrou){
        printf("Total gasto: %.2f\n", total);
    }else{
        printf("Nenhuma compra encontrada para este cliente\n");
    }
}

void verTodasVendas(){
    float valorFiltro = 0;
    printf("Digite o valor para filtrar as vendas: ");
    scanf("%f", &valorFiltro);

    int totalItens = 0, homens = 0, semSexo = 0, tresItens = 0, unidadeB = 0, idadeMaisNova = 200, encontrou = 1, qtdMaiorNome = 0;
    float somaTotal = 0, maiorCompra = 0, menorCompraF = -1, media = 0, valorTotalCompradoresSemSexo = 0;
    char nomeMaiorCompra[100] = "", nomeMaisNovo[100] = "", maiorNome[100] = "";

    for (int i = 0; i < totalVendas; i++) {
        encontrou = 0;
        struct venda v = vendas[i];

        if (strlen(v.cliente.nome) > qtdMaiorNome) {
            qtdMaiorNome = strlen(v.cliente.nome);
            strcpy(maiorNome, v.cliente.nome); 
        }

        if (v.valorTotal < valorFiltro){
            printf("Venda abaixo de %.2f: %s, %.2f\n", valorFiltro, v.cliente.nome, v.valorTotal);
            encontrou = 0;
        }

        if (encontrou == 1) {
          printf("\nNenhuma venda a baixo do valor inserido.\n");
        }

        if (v.numeroItens == 3) {
            
            tresItens++;
        }

        if (v.unidadeVenda == 'B' || v.unidadeVenda == 'b') {
            unidadeB++;
        }

        if (v.cliente.sexo == 'M' || v.cliente.sexo == 'm') {
            homens++;
        }

        if (v.cliente.sexo == 'N' || v.cliente.sexo == 'n') {
            semSexo++;
            valorTotalCompradoresSemSexo += v.valorTotal;
        }

        totalItens += v.numeroItens;
        somaTotal += v.valorTotal;

        if(v.cliente.sexo == 'F' || v.cliente.sexo == 'f') {
            if(menorCompraF == -1 || v.valorTotal < menorCompraF) {
                menorCompraF = v.valorTotal;
            }
        }
        if (v.valorTotal > maiorCompra) {
            maiorCompra = v.valorTotal;
            strcpy(nomeMaiorCompra, v.cliente.nome);
        }
        if (v.cliente.idade < idadeMaisNova){
            idadeMaisNova = v.cliente.idade;
            strcpy(nomeMaisNovo, v.cliente.nome); 
        }
        if(v.cliente.idade < idadeMaisNova){
            idadeMaisNova = v.cliente.idade;
            strcpy(nomeMaisNovo, v.cliente.nome);
        }
    }
    
    
    
    printf("Valor total comprado por compradores que nao quiseram informar o sexo: %.2f\n", valorTotalCompradoresSemSexo);
    
    media = totalVendas > 0 ? somaTotal / totalVendas : 0;
    
    printf("Vendas com exatamente 3 itens: %d\n", tresItens);
    printf("Vendas com unidade de venda B: %d\n", unidadeB);
    printf("Compradores que nao informaram o sexo: %d\n", semSexo);
    printf("Total de itens vendidos: %d\n", totalItens);
    printf("Valor total das compras: %.2f\n", somaTotal);
    printf("Valor medio das compras: %.2f\n", media);
    if (menorCompraF >= 0) {
      printf("Compra mais barata feita por mulher: %.2f\n", menorCompraF);
    }
    if (strlen(maiorNome) > 0) {
      printf("\nCliente com maior nome: %s\n", maiorNome);
    }

    float totalVendasMaiorNome = 0;
    printf("Dados da venda do cliente com maior nome:\n");
    for (int i = 0; i < totalVendas; i++){
        if(strcmp(vendas[i].cliente.nome, maiorNome) == 0){
            encontrou = 1;
            printf("\nItens: %d, Unidade: %c, Valor: %.2f\n", vendas[i].numeroItens, vendas[i].unidadeVenda, vendas[i].valorTotal);
            totalVendasMaiorNome += vendas[i].valorTotal;
        }
    }
    printf("Total gasto: %.f\n", totalVendasMaiorNome);
    
    
    if (strlen(nomeMaisNovo) > 0) {
      printf("\nCliente mais novo: %s\n", nomeMaisNovo);
    }

    float totalVendasMaisNovo = 0;
    printf("Dados da venda do cliente mais novo:\n");
    for (int i = 0; i < totalVendas; i++){
        if(strcmp(vendas[i].cliente.nome, nomeMaisNovo) == 0){
            encontrou = 1;
            printf("\nItens: %d, Unidade: %c, Valor: %.2f\n", vendas[i].numeroItens, vendas[i].unidadeVenda, vendas[i].valorTotal);
            totalVendasMaisNovo += vendas[i].valorTotal;
        }
    }
    printf("Total gasto: %.f\n", totalVendasMaisNovo);
  }