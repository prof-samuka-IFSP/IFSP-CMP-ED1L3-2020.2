#include <stdio.h>


void imprime_conteudo_de_ponteiro(int *x) {
    printf("\t*x = %d\n", *x);
    *x = 5;
}

void imprime_conteudo_de_ponteiro_com_const(const int *x) {
    printf("\t*x = %d\n", *x);
}

int main() {
    int a = 10;

    puts("ANTES DA FUNÇÃO: imprime_conteudo_de_ponteiro");
    printf("a = %d\n", a);

    imprime_conteudo_de_ponteiro(&a);
    
    puts("DEPOIS DA FUNÇÃO: imprime_conteudo_de_ponteiro");
    printf("a = %d\n\n", a);

    puts("DEPOIS DA FUNÇÃO: imprime_conteudo_de_ponteiro_com_const");
    imprime_conteudo_de_ponteiro_com_const(&a);
    printf("a = %d\n\n", a);

    return 0;
}