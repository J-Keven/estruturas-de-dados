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
		arvore = (No*)calloc(1,sizeof(No));
		arvore->valor = valor;	
	}
	else if(valor < arvore->valor){
		arvore->esquerda = inserir(arvore->esquerda, valor);
	}
	else{
		arvore->direita = inserir(arvore->direita, valor);
	}
	return arvore;
}

No * DestroiArvore(No * arvore){
	if(arvore != NULL){
		arvore->direita = DestroiArvore(arvore->direita);
		arvore->esquerda = DestroiArvore(arvore->esquerda);
		printf("Liberando no: %d", arvore->valor);
		free(arvore);
	}
	return NULL;
}

int BuscaValor(No * arvore,int valor){
	if(arvore == NULL){
		return 0;
	}
	else if(arvore->valor == valor){
		return 1;
	}
	return BuscaValor(arvore->esquerda, valor) || BuscaValor(arvore->direita, valor);
}

void MostrarPre_Ordem(No * arvore){
	if(arvore != NULL){
		printf("%d ", arvore->valor);
		MostrarPre_Ordem(arvore->esquerda); 
		MostrarPre_Ordem(arvore->direita);
	}
}

void MostrarIn_Ordem(No * arvore){
	if(arvore != NULL){
		MostrarIn_Ordem(arvore->esquerda); 
		printf("%d ", arvore->valor);
		MostrarIn_Ordem(arvore->direita);
	}
}

void MostrarPos_Ordem(No * arvore){
	if(arvore != NULL){
		MostrarPos_Ordem(arvore->esquerda); 
		MostrarPos_Ordem(arvore->direita);
		printf("%d ", arvore->valor);
	}	
}
