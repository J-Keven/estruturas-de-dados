#include <stdio.h>
#include "arvore.h"

int main(int argc, char const *argv[])
{
	No * arvore = NULL;
	arvore = inserir(arvore, 10);
	arvore = inserir(arvore, 11);
	arvore = inserir(arvore, 9);
	arvore = inserir(arvore, 9);
	arvore = inserir(arvore, 8);
	arvore = inserir(arvore, 26);
	arvore = inserir(arvore, 26);
	arvore = inserir(arvore, 22);
	MostrarIn_Ordem(arvore);
	printf("Esta na Arvore: %s\n", BuscaValor(arvore,26) ? "sim": "Nao");
	printf("\n");
	arvore = DestroiArvore(arvore);
	return 0;
}
