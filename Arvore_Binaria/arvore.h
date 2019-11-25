#ifndef ARVORE_H
#define ARVORE_H
typedef struct no No;
No *create();
No *inserir(No * arvore, int valor);
No *DestroiArvore(No * arvore);
int max2(int a, int b);
int BuscaValor(No * arvore, int valor);
int AlturaArvore(No * arvore);
void MostrarPre_Ordem(No * arvore);
void MostrarIn_Ordem(No * arvore);
void MostrarPos_Ordem(No * arvore);
#endif
