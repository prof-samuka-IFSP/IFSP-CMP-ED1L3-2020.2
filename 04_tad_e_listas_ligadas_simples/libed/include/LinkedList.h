#ifndef _LINKED_LIST_H_
#define _LINKED_LIST_H_

// definições das structs

// definicao um nó de inteiros
typedef struct _node {
    int elem;
    struct _node *next;
} Node;

// definicao da lista ligada
typedef struct _linked_list {
    Node *first;
    int size;
} LinkedList;


// cria/aloca um nó da lista ligada ("construtor do nó") com elemento
// igual a `elem`, cujo ponteiro para o próximo é NULL
Node *createNode(int elem);


// cria/aloca uma lista ligada ("construtor da lista") vazia
LinkedList *createLinkedList();

/**
 * Checa se a lista L está vazia.
 * OBS: considera que L é uma lista válida (diferente de NULL) 
 */
int isEmptyLinkedList(const LinkedList *L);

/**
 * Adiciona o elemento `elem` no ínicio (cabeça) da lista L.
 * Pra isso, a função cria um Node com o elemento `elem` e a adiciona
 * no ínicio da lista L. 
 */
void addFirstLinkedList(LinkedList *L, int elem);


/**
 * Imprime todos os nós da Lista 
 */
void printLinkedList(const LinkedList *L);



#endif
