#include "Pilha.h"
#include <stdlib.h>
#include <stdio.h>

struct topo{
    struct topo * proximo;
    int valor;
};

Topo *Cria(){
    return NULL;
}

Topo * insereItem(Topo * pilha, int valor){
    Topo * Novo = (Topo*)malloc(sizeof(Topo));
    Novo->valor = valor;
    Novo->proximo = NULL;
    if(pilha != NULL){
        Novo->proximo = pilha;
    }
    return Novo;

}

Topo * RemoveItem(Topo * pilha){
    if(pilha == NULL){
        printf("Pilha Vazia\n");
        return pilha;
    }
    Topo * aux = pilha->proximo;
    free(pilha);
    return aux;
}

void Mostrar(Topo *pilha){
    if(pilha == NULL){
        printf("Pilha Vazia");
    }
    for(;pilha != NULL;pilha = pilha->proximo){
        printf("%d ", pilha->valor);
    }
    printf("\n");
}

Topo *Libera(Topo* pilha){
    if(pilha == NULL){
        return NULL;
    }
    Topo * aux = pilha;
    do{

        aux = aux->proximo;
        free(pilha);
        pilha = aux;
    }while(pilha != NULL);
    return NULL;
}

void MostrarTopo(Topo * pilha){
    if(pilha != NULL){
        printf("%d\n", pilha->valor);
    }
    else{
        printf("Pilha Vazia\n");
    }
}

int QtdElementos(Topo * pilha){
    int cont = 0;
    for(;pilha != NULL; pilha = pilha->proximo, cont++);
    return cont;
}

