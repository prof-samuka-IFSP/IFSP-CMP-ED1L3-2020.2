#include <stdio.h>
#include <stdlib.h>

#include "IntVector.h"
#include "Time.h"

int main() {
    timer t1 = tic();  // começa a medir o tempo de execução

    IntVector *v = createIntVector(10);
    printf("v->size: %d\n\n", v->size);

    for (int i = 0; i < v->size; i++) {
        v->data[i] = i;
    }

    // printIntVector(v);

    printf("v[4] = %d\n", atIntVector(v, 4));
    printf("v[5] = %d\n", atIntVector(v, 5));

    timer t2 = tac(); // para de contar o tempo
    float tempo_de_execucao = compTime(t1, t2);
    printf("\nTempo de Execução %f ms\n", tempo_de_execucao);

    return 0;
}
