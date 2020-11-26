// arquivo de header (.h) contém apenas definições de structs e funções
#include <stdio.h>
#include <stdlib.h>

typedef struct _int_vector {
    int *data;
    int size;  // tamanho do vetor (número de elementos do vetor de inteiro)
} IntVector;

// cria um vetor de inteiros com `size` elementos
IntVector *createIntVector(int size);

void printIntVector(const IntVector *v);

// retorna o elemento do índice [i]
// caso o índice seja inválido, saia do programa (exception)
int atIntVector(const IntVector *v, int i);
