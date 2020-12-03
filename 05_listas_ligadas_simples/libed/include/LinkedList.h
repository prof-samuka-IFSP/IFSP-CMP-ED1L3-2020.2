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
    Node *first;  // aponta para o primeiro nó da lista
    Node *last; // aponta para o último nó da lista
    int size;  // tamanho da lista == numero de nós da lista
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
 * FUNÇÃO LENTA ==> O(n) tempo linear
 * Adiciona o elemento `elem` no final (cauda) da lista L.
 * Pra isso, a função cria um Node com o elemento `elem` e a adiciona
 * no final da lista L.
 */
void addLastLinkedListSlow(LinkedList *L, int elem);

/**
 * FUNÇÃO RÁPIDA ==> O(1) tempo constante
 * Adiciona o elemento `elem` no final (cauda) da lista L.
 * Pra isso, a função cria um Node com o elemento `elem` e a adiciona
 * no final da lista L.
 */
void addLastLinkedList(LinkedList *L, int elem);


/**
 * Remove o primeiro nó da lista. 
 */
void removeFirstLinkedList(LinkedList *L);


/**
 * Imprime todos os nós da Lista 
 */
void printLinkedList(const LinkedList *L);



#endif
