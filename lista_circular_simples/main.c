#include "lista.h"
void Menu();
int main(int argc, char const *argv[])
{
    No * list = creat();
    int opcao;
    int value;
    do{
        switch (opcao)
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
            printf("Primeiro valor: %d\n",frist_value(list));
            break;

        case 5:
            /* code */
            break;

        case 6:
            /* code */
            break;

        case 7:
            /* code */
            break;
        }
    }while(opcao != 0);
    list = insert(list,1);
    list_show(list);
    list = insert(list,3);
    list = insert(list,5);
    list_show(list);
    list = insert(list,0);
    list = insert(list,2);
    list = insert(list,4);
    list = insert(list,6);
    list_show(list);
    
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