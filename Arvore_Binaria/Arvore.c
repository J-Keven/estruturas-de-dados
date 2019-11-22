#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"
struct no{
	int valor;
	struct no * direita,* esquerda;
};

No *create(){
	return NULL;
}

No *inserir(No * arvore, int valor){
	if(arvore == NULL){
		No * New = (No*)malloc(sizeof(No));
		New->valor = valor;
		New->direita = NULL;
		New->esquerda = NULL;
		return New;
	}
	if( valor > arvore->valor){
		arvore->direita = inserir(arvore->direita,valor);
	}
	else if(valor < arvore->valor){
		arvore->esquerda = inserir(arvore->esquerda, valor);
	}
	return arvore;
}

void MostrarArvore(No * arvore){
	if(arvore != NULL){
		MostrarArvore(arvore->esquerda); 
		printf("%d ", arvore->valor);
		MostrarArvore(arvore->direita);
	}
}
