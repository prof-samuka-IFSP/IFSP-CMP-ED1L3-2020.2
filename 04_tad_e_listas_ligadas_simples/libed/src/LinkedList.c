#include "LinkedList.h"

#include <stdio.h>
#include <stdlib.h>  // biblioteca que contém o calloc, malloc, free

Node *createNode(int elem) {
    Node *node = (Node*) calloc(1, sizeof(Node));
    node->elem = elem;
    node->next = NULL;
    
    return node;
}


LinkedList *createLinkedList() {
    LinkedList *L = (LinkedList*) calloc(1, sizeof(LinkedList));
    L->size = 0;
    L->first = NULL;

    return L;
}

// 0 == false
// 1 == true
int isEmptyLinkedList(const LinkedList *L) {
    return L->first == NULL;
}

void addFirstLinkedList(LinkedList *L, int elem) {
    Node *p = createNode(elem);
    // o nó p está apontando para o atual nó inicial da lista
    // se a lista está vazia, o nó inicial é NULL, logo, o próximo
    // nó de `p` será NULL (não está apontando pra nada)
    p->next = L->first;
    L->first = p;  // o início da lista agora aponta para o novo nó `p`
    L->size++; // incrementa o número de elementos da lista (tamanho da lista)
}


void printLinkedList(const LinkedList *L) {
    Node *p = L->first;
    
    printf("L -> ");

    // enquanto a lista não chegou ao fim da lista
    // enquanto `p` estiver apontando para um nó da lista
    while (p != NULL) {
        printf("%d -> ", p->elem);
        p = p->next;
    }
    printf("NULL\n");
}










