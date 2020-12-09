#include <stdio.h>
#include <stdlib.h>

#include "IntVector.h"
#include "Time.h"

int main() {
    timer t1 = tic();  // começa a medir o tempo de execução

    IntVector *v = createIntVector(10);
    
    printIntVector(v);

    timer t2 = tac(); // para de contar o tempo
    float tempo_de_execucao = compTime(t1, t2);
    printf("\nTempo de Execução %f ms\n", tempo_de_execucao);

    return 0;
}
