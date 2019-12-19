#include "lista.h"
void Menu();
int main(int argc, char const *argv[])
{
    No * list = creat();
    int option;
    int value;
    do{
        Menu();
        printf("Escolha uma opcao: ");
        scanf(" %d", &option);
        switch (option)
        {
        case 1:
            printf("Digite o valor a ser inserido: ");
            scanf(" %d", &value);
            list = insert(list, value);
            break;

        case 2:
            printf("digite o valor que deseja buscar: ");
            scanf(" %d", &value);
            printf("O valor buscado existe: %s\n", value_search(list, value)? "Sim": "Nao");
            break;
        case 3:
            printf("Tamanho da lista: %d\n",list_size(list));
            break;

        case 4:
            printf("Primeiro valor: ");
            frist_value(list);
            break;

        case 5:
            list_show(list);
            break;

        case 6:
            printf("Digite o valor que deseja remover: ");
            scanf(" %d", &value);
            list = Delete(list, value);
            break;

        case 7:
            list = Free_list(list);
            break;
        }
    }while(option != 0);
    return 0;
}
void Menu(){
    printf("\nMENU\n");
    printf("1 - inserir um valor\n");
    printf("2 - verificar a existencia de um valor\n");
    printf("3 - verficar o tamanho da lista\n");
    printf("4 - exibir o primeiro valor da lista\n");
    printf("5 - exibir toda a lista\n");
    printf("6 - remover um valor\n");
    printf("7 - liberar a lista\n");
    printf("0 - sair\n");

}