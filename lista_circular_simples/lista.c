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