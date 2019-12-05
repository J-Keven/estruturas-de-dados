#include "lista.h"
struct no{
    int value;
    struct no * next;
};

No * create(){
    return NULL;
}

No * insert(No * list, int value){
    No * new = (No *)calloc(1, sizeof(No));
    new->value = value;
    if(list == NULL){
        return new;
    }
    No * aux_list = list;
    for(;aux_list->next != NULL; aux_list = aux_list->next);
    aux_list->next = new;
    return list;
}

No * insert_In_Order(No * list, int value){
    No * new = (No *)calloc(1, sizeof(No));
    new->value = value;
    if(list == NULL){
        return new;
    }
    else if(value < list->value){
        new->next = list;
        return new;
    }
    No * aux_list = list;
    for(;aux_list->next != NULL && value > aux_list->next->value;aux_list = aux_list->next);
    new->next = aux_list->next;
    aux_list->next = new;
    return list;
}

No * Delete(No * list, int value){
    if(list == NULL){
        return NULL;
    }
    No * aux_list = list;
    if(list->value == value){
        aux_list = aux_list->next;
        free(list);
        return aux_list;
    }
    No * aux2 = aux_list;
    do{
        aux_list = aux_list->next;
        if(aux_list != NULL && aux_list->value == value){
            aux2->next = aux_list->next;
            free(aux_list);
            break;
        }
        aux2 = aux_list;
    }while(aux2 != NULL);
    return list;
}

No * FreeList(No * list){
    No * aux;
    while(list != NULL){
        aux = list->next;
        free(list);
        list = aux;
    }
    return NULL;
}

int Search(No * list, int value){

}

void Show(No * list){
    if(list != NULL){
        for(;list != NULL;list = list->next){
            printf("%d ", list->value);
        }
    }
}