#include <stdio.h>

void incrementa (int valor){
    printf("Antes de incrementar \n");
    printf("O contador vale %d \n", valor);

    printf("Depois de incrementar \n");
    // valor = valor + 1
    printf("O contador vale %d \n", ++valor);
}

int main(){

    int contador = 10;
  
    printf("o contador vale %d \n", contador);

    incrementa (&contador);

    printf("depois de incrementar. \n"); 
    printf(" o contador vale %d \n", contador);

    return 0;
}