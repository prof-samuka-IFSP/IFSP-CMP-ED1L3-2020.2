#include "ListaDup.h"

#include <stdio.h>
#include <stdlib.h>

NoDup *criaNoDup(int val) {
    NoDup *no = (NoDup*) calloc(1, sizeof(NoDup));
    no->val = val;
    no->ant = no->prox = NULL;
    return no;
}

ListaDup *criaListDup() {
    ListaDup *L = (ListaDup*) calloc(1, sizeof(ListaDup));
    L->inicio = L->fim = NULL;
    L->tamanho = 0;
    return L;
}

int listaDupEstaVazia(const ListaDup *L) {
    return (L->inicio == NULL);
    // return (L->fim == NULL);
    // return (L->tamanho == 0);
}

void insereNoInicioListaDup(ListaDup *L, int val) {
    NoDup *p = criaNoDup(val);
    L->tamanho++;

    if (listaDupEstaVazia(L)) {
        L->inicio = p;
        L->fim = p;
    }
    else {
        p->prox = L->inicio;
        L->inicio->ant = p;
        L->inicio = p;
    }
}

void imprimeListaDup(const ListaDup *L) {
    printf("Tamanho da Lista Dup.: %d\n", L->tamanho);
    printf("L -> inicio -> ");

    NoDup *p = L->inicio;

    // enquanto p estiver apontando para algum
    // nó da lista, imprima nó
    while (p != NULL) {
        printf("%d -> prox -> ", p->val);
        p = p->prox;
    }

    printf("NULL\n");
}

void imprimeInvertidoListaDup(const ListaDup *L) {
    printf("Tamanho da Lista Dup.: %d\n", L->tamanho);
    printf("L -> fim -> ");

    NoDup *p = L->fim;

    while (p != NULL) {
        printf("%d -> ant -> ", p->val);
        p = p->ant;
    }

    printf("NULL\n");
}


void removePrimeiroNoDup(ListaDup *L, int val) {
    if (!listaDupEstaVazia(L)) {
        NoDup *p = L->inicio;

        while (p != NULL) {
            // temos que remover o nó p
            if (p->val == val) {
                
                // o nó a ser removido é o nó inicial da lista
                if (L->inicio == p) {
                    printf("\t- Removendo o nó inicial\n");
                    L->inicio = p->prox;

                    // a lista possui apenas 1 um único nó
                    if (L->fim == p) {
                        printf("\t    - A lista possui apenas 1 elemento\n");
                        L->fim = NULL;
                    }
                    // a lista possui mais de um elemento
                    else {
                        L->inicio->ant = NULL; // ou, alternativamente: p->prox->ant = NULL;
                    }

                    free(p);
                    L->tamanho--;
                }
                // o nó não é o primeiro lista, ou seja
                // o nó está no meio da lista ou no final
                else {
                    p->ant->prox = p->prox;
                    // o elemento é o último nó da lista
                    if (L->fim == p) {
                        printf("\t- Removendo o nó final\n");
                        L->fim = p->ant;
                    }
                    // o elemento está no meio da lista
                    else {
                        printf("\t- Removendo um nó do meio\n");
                        p->prox->ant = p->ant;
                    }
                    free(p);
                    L->tamanho--;
                }

                // achamos o primeiro nó com o valor, o removemos, e agora queremos
                // parar o loop, pois não queremos mais remover nenhum nó
                // para isso, podemos usar o comando `break`
                // o `break` sairá do loop do while e executará a próxima instrução depois dele
                break;
            }
            else {
                p = p->prox;
            }
        }
    }
}
