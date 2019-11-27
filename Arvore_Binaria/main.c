#include <stdio.h>
#include "arvore.h"
void Menu();
int main(int argc, char const *argv[])
{
	No * arvore = NULL;
	int flag = 1;
	int opcao;
	int valor;
	while(flag){
		Menu();
		printf("Opcao: ");
		scanf(" %d", &opcao);
		switch(opcao){
			case 1:
				printf("Valor: ");
				scanf(" %d", &valor);
				arvore = inserir(arvore, valor);
				break;

			case 2:
				printf("Valor: ");
				scanf(" %d", &valor);
				printf("Exeste: %s\n", BuscaValor(arvore,valor) ? "Sim": "Nao");
				break;
			case 3: 
				printf("Valor: ");
				scanf(" %d", &valor);
				arvore = removeElement(arvore, valor);
				break;
			case 4:
				printf("Altura: %d\n", AlturaArvore(arvore));
				break;

			case 5:
				MostrarPre_Ordem(arvore);
				printf("\n");
				break;

			case 6:
				MostrarIn_Ordem(arvore);
				printf("\n");
				break;

			case 7:
				MostrarPos_Ordem(arvore);
				printf("\n");
				break;

			case 8:
				arvore = DestroiArvore(arvore);
				printf("\n");
				break;

			case 0:
				arvore = DestroiArvore(arvore);
				printf("\n");
				flag == 0;
				break;
		}
	}
	return 0;
}

void Menu(){
	printf("INTERFACE\n");
	printf(" 1 - Inserir valor\n");
	printf(" 2 - Buscar valor\n");
	printf(" 3 - Remover um Elemento\n");
	printf(" 4 - Altura da Arvore\n");
	printf(" 5 - Mostrar Pre-Ordem\n");
	printf(" 6 - Mostrar In-Ordem\n");
	printf(" 7 - Mostrar Pos-Ordem\n");
	printf(" 8 - Destruir a Arvore\n");
	printf(" 0 - Sair\n");

}
