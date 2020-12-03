#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

#include "LinkedList.h"


int main() {
    LinkedList *L = createLinkedList();

    puts("Imprime uma lista vazia");
    printLinkedList(L);

    puts("\nAdicionando, na cabeça da lista, os elementos 5, 4, 3");
    // adicionando alguns elementos
    addFirstLinkedList(L, 5);
    addFirstLinkedList(L, 4);
    addFirstLinkedList(L, 2);
    printLinkedList(L);

    puts("\nAdicionando, na cabeça da lista, o elemento 10");
    addFirstLinkedList(L, 10);
    printLinkedList(L);

    puts("\nAdicionando, no FINAL da lista, o elemento 7 - SLOW");
    addLastLinkedListSlow(L, 7);
    printLinkedList(L);

    puts("\nAdicionando, no FINAL da lista, o elemento 100 - FAST");
    addLastLinkedList(L, 100);
    printLinkedList(L);

    printf("\nRemovendo primeiro elemento da lista\n");
    removeFirstLinkedList(L);
    printLinkedList(L);

    return 0;
}