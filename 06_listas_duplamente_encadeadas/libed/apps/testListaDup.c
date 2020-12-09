#include <stdio.h>
#include <stdlib.h>
#include "ListaDup.h"

int main() {
    ListaDup *L = criaListDup();

    imprimeListaDup(L);
    imprimeInvertidoListaDup(L);
    puts("");

    insereNoInicioListaDup(L, 7);
    imprimeListaDup(L);
    imprimeInvertidoListaDup(L);
    puts("");

    insereNoInicioListaDup(L, 4);
    imprimeListaDup(L);
    imprimeInvertidoListaDup(L);
    puts("");
    
    insereNoInicioListaDup(L, 2);
    imprimeListaDup(L);
    imprimeInvertidoListaDup(L);
    puts("");

    insereNoInicioListaDup(L, 10);
    imprimeListaDup(L);
    imprimeInvertidoListaDup(L);
    puts("");

    printf("\n##### REMOÇÃO #####\n");

    // nó não existe na lista
    printf("# Remove nó 99\n");
    removePrimeiroNoDup(L, 99);
    imprimeListaDup(L);
    imprimeInvertidoListaDup(L);
    puts("");

    // remove a cabeça da lista
    printf("# Remove nó 10\n");
    removePrimeiroNoDup(L, 10);
    imprimeListaDup(L);
    imprimeInvertidoListaDup(L);
    puts("");

    // remove o meio da lista
    printf("# Remove nó 4\n");
    removePrimeiroNoDup(L, 4);
    imprimeListaDup(L);
    imprimeInvertidoListaDup(L);
    puts("");

    // remove o nó final da lista
    printf("# Remove nó 7\n");
    removePrimeiroNoDup(L, 7);
    imprimeListaDup(L);
    imprimeInvertidoListaDup(L);
    puts("");

    // remove o nó inicial de uma lista com apenas 1 elemento
    printf("# Remove nó 2\n");
    removePrimeiroNoDup(L, 2);
    imprimeListaDup(L);
    imprimeInvertidoListaDup(L);
    puts("");

    return 0;
}
