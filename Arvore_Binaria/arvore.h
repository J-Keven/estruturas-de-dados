#ifndef ARVORE_H
#define ARVORE_H
typedef struct no No;
//Funções
No *create();
No *inserir(No * arvore, int valor);
No *NoParaInserir(No * arvore, int valor);
void MostrarArvore(No * arvore);
#endif
