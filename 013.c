#include <stdlib.h>
#include <stdio.h>

struct no {
    int dado;
    struct no *proximo;
};

typedef struct no *ptr_no;

int main() {
    int dado;
    ptr_no lista = NULL;
    ptr_no cur = NULL;

    // Primeiro nó
    printf("Digite o dado do primeiro no: ");
    scanf("%d", &dado);

    lista = malloc(sizeof(struct no));
    lista->dado = dado;
    lista->proximo = NULL;
    cur = lista;  // ponteiro auxiliar

    // Segundo nó
    printf("Digite o dado do segundo no: ");
    scanf("%d", &dado);

    cur->proximo = malloc(sizeof(struct no));
    cur = cur->proximo;
    cur->dado = dado;
    cur->proximo = NULL;

    // Imprime a lista
    cur = lista;
    printf("\nConteudo da lista:\n");
    while (cur != NULL) {
        printf("%d\n", cur->dado);
        cur = cur->proximo;
    }

    // Libera memória
    cur = lista;
    while (cur != NULL) {
        ptr_no next = cur->proximo;
        free(cur);
        cur = next;
    }

    return 0;
}

