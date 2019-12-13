#include "lista.h"
void Menu();
int main(int argc, char const *argv[])
{

    No * list = create();
    int value, opcao;
    do{
        Menu();
        scanf(" %d", &opcao);
        if(opcao == 1){
            printf("Digite o valor a ser inserido: ");
            scanf(" %d", &value);
            list = insert(list, value);
        }
        else if(opcao == 2){
            printf("Digite o valor a ser inserido: ");
            scanf(" %d", &value);
            list = insert_In_Order(list, value);
        }
        else if(opcao == 3){    
            printf("Digite o valor que deseja buscar: ");
            scanf(" %d", &value);
            printf("Esta na lista: %s\n", Search(list, value) ? "Sim": "Nao");
        }
        else if(opcao == 4){
            printf("Quantidade: %d\n", list_size(list));
        }
        else if(opcao == 5){
            printf("Digite o Valor que deseja excluir: ");
            scanf(" %d", &value);
            list = Delete(list,value);
        }
        else if(opcao == 6){
            Show(list);
            printf("\n");
        }
        else if(opcao == 7){
            list = FreeList(list);
        }

    }while(opcao != 0);
    return 0;
}

void Menu(){
    printf("MENU\n");
    printf(" 1 - Inserir um valor\n");
    printf(" 2 - Inserir um valor ordenado\n");
    printf(" 3 - Buscar um valor\n");
    printf(" 4 - Quantidade de elementos na lista\n");
    printf(" 5 - Remover um elemeto da lista\n");
    printf(" 6 - Mostrar toda a lista\n");
    printf(" 7 - Liberar toda a lista\n");
    printf(" 0 - Sair\n");
    printf("Escolha uma opcao: ");
}
