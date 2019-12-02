#include "FIla.h"
void Menu();
int main(int argc, char const *argv[])
{
    Fila *row = criate();
    int choice;
    int value;
    while(1){
        Menu();
        scanf(" %d", &choice);
        if(choice == 1){
            printf("Valor a ser inserido: ");
            scanf(" %d", &value);
            row = Insert(row,value);
        }
        else if(choice == 2){
            printf("Valor a ser Buscado: ");
            scanf(" %d", &value);
            printf("Existe: %s\n", SeekValue(row, value) ? "Sim": "Nao");
        }
        else if(choice == 3){
            printf("Tamanho: %d\n", size(row)); 
        }
        else if(choice == 4){
            row = Remove(row);
        }
        else if(choice == 5){
            Show(row);
        }
        else if(choice == 6){
            row = Free(row);
        }
        else if(choice == 0){
            break;
        }
    }
    return 0;
}

void Menu(){
    printf("MENU\n");
    printf(" 1 - Inserir Valor\n");
    printf(" 2 - Buscar Por um Valor\n");
    printf(" 3 - Tamanho da Fila\n");
    printf(" 4 - Remover Elemento\n");
    printf(" 5 - Mostrar Fila\n");
    printf(" 6 - Liberar Fila\n");
    printf(" 0 - Sair\n");
    printf("Escolha uma opcao: \n");
}
