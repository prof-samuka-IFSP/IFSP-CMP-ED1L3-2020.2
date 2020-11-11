#include <stdio.h>
#include <stdlib.h>  // contém as funções malloc, calloc, free

int main() {
    
    // ALOCAÇÃO ESTÁTICA ==> MEMÓRIA STACK
    int variavel_qualquer = 10;
    printf("&variavel_qualquer = %p\n\n", &variavel_qualquer);

    int v1[5] = {0, 1, 2, 3, 4};
    printf("&v1 = %p, v1 = %p\n", &v1, v1);
    
    for (int i = 0; i < 5; i++) {
        printf("&v1[%d] = %p, v1[%d] = %d\n", i, &v1[i], i, v1[i]);
    }
    puts("");

    // ALOCAÇÃO DINÂMICA ==> MEMÓRIA HEAP
    // v2 é um ponteiro alocado na STACK que guarda (aponta) uma referência
    // de uma região de memória na HEAP
    int* v2 = (int*) malloc(5 * sizeof(int));

    printf("&v2 = %p, v2 = %p\n", &v2, v2);

    for (int i = 0; i < 5; i++) {
        v2[i] = i * 10;
        printf("&v2[%d] = %p, v2[%d] = %d\n", i, &v2[i], i, v2[i]);
    }

    return 0;
}

