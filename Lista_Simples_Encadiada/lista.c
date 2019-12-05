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
    No * aux_list = list;
    for(;aux_list->next != NULL && value > aux_list->next->value; aux_list = aux_list->next);
    new->next = aux_list->next;
    aux_list->next = new;
}
// 0 1 2 4 5 6
No * Delete(No * list, int value){

}

No * FreeList(No * list){

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