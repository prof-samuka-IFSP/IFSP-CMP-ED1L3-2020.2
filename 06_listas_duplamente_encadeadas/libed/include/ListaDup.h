// include guardians
#ifndef _LISTA_DUP_H_
#define _LISTA_DUP_H_

typedef struct _no_dup {
    int val;
    struct _no_dup *ant;
    struct _no_dup *prox;
} NoDup;

typedef struct _list_dup {
    NoDup *inicio;
    NoDup *fim;
    int tamanho;
} ListaDup;


NoDup *criaNoDup(int val);

ListaDup *criaListDup();

int listaDupEstaVazia(const ListaDup *L);

void insereNoInicioListaDup(ListaDup *L, int val);

void imprimeListaDup(const ListaDup *L);

void imprimeInvertidoListaDup(const ListaDup *L);

/**
 * Busca o primeiro nó de valor `val` e o remove da Lista.
 * Se a lista estiver vazia ou a lista não possui o valor,
 * nada acontece. 
 */
void removePrimeiroNoDup(ListaDup *L, int val);

#endif
