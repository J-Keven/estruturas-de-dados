#include "lista.h"
struct no{
    int value;
    struct no *previous, * next;
};

No * create_list(){
    return NULL;
}

No * insert_value(No * list, int value){
    No * new = (No *)calloc(1,sizeof(No));
    new->value = value;
    if(list == NULL){
        return new;
    }
    if(list->value >= value){
        list->previous = new;
        new->next = list;
        return new;
    }
    No * aux = list;
    for(; aux->next != NULL; aux = aux->next){
        if(value < aux->next->value){
            new->next = aux->next;
            aux->next->previous = new;
            aux->next = new;
            new->previous = aux;
            break;
        }
    }
    if(aux->next == NULL){
        aux->next = new;
        new->previous = aux;
    }
    return list;
}

int search_value(No * list, int value){
    for(;list != NULL;list = list->next){
        if(list->value == value){
            return 1;
        }
    }
    return 0;
}

void frist_value(No * list){
    printf("%d\n", list->value);
}

void show_list(No* list){
    for(;list != NULL; list = list->next){
        printf("%d ", list->value);
    }
    printf("\n");
}

int list_size()   