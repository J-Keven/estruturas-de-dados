#include "lista.h"
struct no{
    int value;
    struct no * next;
};

No * creat(){
    return NULL;
}

No * insert(No * list, int value){
    No * new = (No *)calloc(1, sizeof(No));
    new->value = value;
    if(list == NULL){
        new->next = new;
        return new;
    }
    No * aux = list;
    for(;aux->next != list; aux = aux->next);
    new->next = aux->next;
    aux->next = new;
    return list;
}

No * Delete(No * list, int value){
    if(!value_search(list, value)){
        printf("O valor que deseja remover nao existe na lista\n");
    }
    else{
        No * aux = list;
        if(list->value == value){
            for(;aux->next != list;aux = aux->next);
            aux->next = list->next;
            free(list);
            list = aux->next;
        }
        do{
            if(aux->next->value == value){
                No * rmv = aux->next;
                aux->next = rmv->next;
                free(rmv);
                rmv = NULL;
                break;
            }
            aux = aux->next;
        }while(aux != list);
    }
    return list;
}
int value_search(No * list, int value){
    No * aux = list;
    do{
        if(aux->value == value){
            return 1;
        }
    }while(aux != list);
    return 0;
}
void list_show(No * list){
    if(list != NULL){
        No * aux = list;
        do{
            printf("%d ", aux->value);
            aux = aux->next;
        } while (aux != list);
        printf("\n");
    }
}

