#include <stdlib.h>

typedef struct pessoa {
    int id;
    struct pessoa* mae;
    struct pessoa* pai;
} PESSOA;

PESSOA* inicializar(int id) {
    PESSOA* nova_pessoa = (PESSOA*) malloc(sizeof(PESSOA));
    nova_pessoa->id = id;
    nova_pessoa->mae = NULL;
    nova_pessoa->pai = NULL;
    return nova_pessoa;
}

int main() {
    PESSOA* pessoa1 = inicializar(1);
    PESSOA* pessoa2 = inicializar(2);
    // ...
    return 0;
}