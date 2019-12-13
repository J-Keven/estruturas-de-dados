#include "lista.h"
void Menu();
int main(int argc, char const *argv[]){
    No * list = create_list();
    int option, value;
    do{
        Menu();
        printf("Escolha uma acao: \n");
        scanf(" %d", &option);
        if(option == 1){
            printf("Digite o valor a ser inserido: ");
            scanf(" %d", &value);
            list = insert_value(list, value);
        }
        else if(option == 2){
            printf("Digite o valor a ser verificado: ");
            scanf(" %d",&value);
            printf("Exixte: %s\n", search_value(list, value)?"sim": "nao");
        }
        else if(option == 3){
            printf("Tamnho: %d\n", list_size(list));
        }
        else if(option == 4){
            printf("Primeniro elemento: ");
            frist_value(list);
        }
        else if(option == 5){
            show(list);
        }
        else if(option == 6){
            printf("Digite o valor a ser removido: ");
            scanf(" %d", &value);
            list = delete(list, value);
        }
        else if(option == 7){
            list = list_free(list);
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
    printf("6 - remover im valor\n");
    printf("7 - liberar a lista\n");
    printf("0 - sair\n");

}
