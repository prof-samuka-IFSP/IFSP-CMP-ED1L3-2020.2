#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Time.h"


int main() {
    LinkedList *L_slow = createLinkedList();
    
    // COMPUTANDO O TEMPO DA FUNÇÃO LENTA
    int max_size;
    printf("Digite o número máximo de nós da lista: ");
    scanf("%d", &max_size);

    printf("\n=>Computando o tempo (lento) de addLastLinkedListSlow\n");
    timer t1 = tic();  // começa a medir o tempo
    
    for (int i = 0; i < max_size; i++) {
        addLastLinkedListSlow(L_slow, i);
    }
    
    timer t2 = tic();  // termina de medir o tempo
    float slow_time = compTime(t1, t2);
    printf("Tempo de execução: %f secs\n", slow_time / 1000.0);


    // COMPUTANDO O TEMPO DA FUNÇÃO RÁPIDA
    LinkedList *L_fast = createLinkedList();

    printf("\n\n=>Computando o tempo (rápido) de addLastLinkedList\n");
    t1 = tic(); // começa a medir o tempo

    for (int i = 0; i < max_size; i++) {
        addLastLinkedList(L_fast, i);
    }

    t2 = tic(); // termina de medir o tempo
    float fast_time = compTime(t1, t2);
    printf("Tempo de execução: %f secs\n", fast_time / 1000.0);

    return 0;
}