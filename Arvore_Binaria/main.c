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
				printf("Altura: %d\n", AlturaArvore(arvore));
				break;

			case 4:
				MostrarPre_Ordem(arvore);
				printf("\n");
				break;

			case 5:
				MostrarIn_Ordem(arvore);
				printf("\n");
				break;

			case 6:
				MostrarPos_Ordem(arvore);
				printf("\n");
				break;

			case 7:
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
	printf(" 3 - Altura da Arvore\n");
	printf(" 4 - Mostrar Pre-Ordem\n");
	printf(" 5 - Mostrar In-Ordem\n");
	printf(" 6 - Mostrar Pos-Ordem\n");
	printf(" 7 - Destruir a Arvore\n");
	printf(" 0 - Sair\n");

}
