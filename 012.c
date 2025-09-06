#include <stdio.h>
#include <stdlib.h>

struct no {
    int dado;
    struct no *proximo;
};

typedef struct no *ptr_no;
ptr_no lista;

int main() {

    lista = (ptr_no) malloc(sizeof(struct no));
    lista->dado = 1;
    lista->proximo = NULL;

    printf("\n%d", lista->dado);
    printf("\n\n");
    system("pause");

    return 0;

}
