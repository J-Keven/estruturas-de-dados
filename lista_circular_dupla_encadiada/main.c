#include "lista.h"
int main(int argc, char const *argv[])
{
    No * list = creat();
    list_show(list);
    list = insert(list, 1);
    list = insert(list, 3);
    list = insert(list, 4);
    list_show(list);
    list = insert(list, 2);
    list = insert(list, 0);
    list = insert(list, -1);
    list_show(list);
    list = insert(list, 5);
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