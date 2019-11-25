#include <stdio.h>
#include "Pilha.h"


int main(int argc, char const *argv[])
{
    Topo * pilha = Cria();
    int sair = 0;
    do{
        printf("MENU\n");
        printf("1 - Inserir elemento\n");
        printf("2 - Mostrar Topo\n");
        printf("3 - Mostrar Pilha\n");
        printf("4 - Quantidade Elementos na pilha\n");
        printf("5 - Remove elemento\n");
        printf("6 - Libera Lista\n");
        printf("0 - Sair\n");
        printf("Escolha Uma Acao: ");
        scanf("%d", &sair);
        if(sair == 1){
            int valor;
            printf("Valor a inserir: ");
            scanf(" %d", &valor);
            pilha = insereItem(pilha, valor);
        }
        else if(sair == 2){
            MostrarTopo(pilha);
        }
        else if(sair == 3){
            Mostrar(pilha);
        }
        else if(sair == 4){
            printf("Qtd Elementos: %d\n", QtdElementos(pilha));

        }
        else if(sair == 5){
            pilha = RemoveItem(pilha);
        }
        else if(sair == 6){
            pilha = Libera(pilha);
        }
    }while(sair != 0);
    return 0;
}
