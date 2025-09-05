#include <stdlib.h>
#include <stdio.h>

struct no {
    int dado;
    struct no *proximo;
};

typedef struct no *ptr_no;
ptr_no lista;

int main() {
    int dado;
    printf("Digite o dado do primeiro no: ");
    scanf("%d", &dado);
    lista = (ptr_no) malloc(sizeof(struct no));
    lista->dado = dado;
    printf("%d", lista->dado);
    printf("Digite o dado do segundo no: ");
    scanf("%d", &dado);
    while (lista->proximo != NULL) {
        lista = lista->proximo;
    }
    lista->proximo = (ptr_no) malloc(sizeof(struct no));
    lista = lista->proximo;
    lista->dado = dado;
    lista->proximo = NULL;
    while (lista->proximo != NULL) {
        printf("%d", lista->dado);
        lista = lista->proximo;
    }
    printf("%d", lista->dado);

    return 0;
}