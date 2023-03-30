#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    char mae[50];
    char pai[50];
} PESSOA;

void registrar(PESSOA* filho, PESSOA* mae, PESSOA* pai) {
    
    printf((*filho).mae, "%s", (*mae).nome);
    printf((*filho).pai, "%s", (*pai).nome);
}

int main() {
    PESSOA filho = {"Joao", 10, "", ""};
    PESSOA mae = {"Maria", 35, "", ""};
    PESSOA pai = {"Jose", 40, "", ""};
    
    printf("Antes do registro:\n");
    printf("Nome: %s, Mae: %s, Pai: %s\n", filho.nome, filho.mae, filho.pai);
    
    registrar(&filho, &mae, &pai);
    
    printf("Depois do registro:\n");
    printf("Nome: %s, Mae: %s, Pai: %s\n", filho.nome, filho.mae, filho.pai);
    
    return 0;
}