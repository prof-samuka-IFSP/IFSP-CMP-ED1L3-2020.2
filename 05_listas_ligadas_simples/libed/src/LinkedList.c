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
    L->first = L->last = NULL;

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

    // a lista estava vazia antes desta inserção
    if (L->first == NULL) { L->first = p; }
}

// Por mais que funcione, esta função é ineficiente
// quando o tamanho da lista é muito grande
void addLastLinkedListSlow(LinkedList *L, int elem) {
    // int count = 0;

    if (isEmptyLinkedList(L)) {
        // count++;
        L->first = L->last = createNode(elem);
        L->size++;
    }
    // a lista já possui elementos/nós
    else {
        Node *q = createNode(elem);

        Node *p = L->first;
        
        // enquanto o próximo elemento do nó p
        // não for NULL
        while (p->next != NULL) {
            // count++;
            p = p->next;
        }

        // neste momento, q aponta para o último nó da lista
        p->next = q;
        L->last = p;
        L->size++;
    }
    // printf("%d,%d\n", L->size, count);
}

void addLastLinkedList(LinkedList *L, int elem) {
    Node *p = createNode(elem);
    
    // se a lista está vazia
    if (isEmptyLinkedList(L)) {
        L->first = L->last = p;
    }
    else {
        L->last->next = p;
        L->last = p;
    }
    L->size++;
    // printf("%d,1\n", L->size);
}


void removeFirstLinkedList(LinkedList *L) {
    // se a lista L não está vazia
    if (!isEmptyLinkedList(L)) {
        Node *p = L->first;
        L->first = L->first->next;  //ou ===> L->first = p->next;
        free(p);
        L->size--;  // diminui o número de elementos da lista após a remoção

        // a lista só tinha um elemento antes da remoção
        // if (L->first == NULL) {
        if (L->size == 0) {
            L->last = NULL;
        }
    }
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










