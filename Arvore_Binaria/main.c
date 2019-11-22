#include <stdio.h>
#include "arvore.h"

int main(int argc, char const *argv[])
{
	No * arvore = NULL;
	arvore = inserir(arvore, 10);
	arvore = inserir(arvore, 11);
	arvore = inserir(arvore, 9);
	arvore = inserir(arvore, 8);
	arvore = inserir(arvore, 22);
	MostrarArvore(arvore);
	return 0;
}