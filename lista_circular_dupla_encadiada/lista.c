#include "lista.h"
struct no{
    int value;
    struct no *previus, *next;
};

No * creat(){
    return NULL;
}

No * insert(No * list, int value){
    No * new = (No * )calloc(1,sizeof(No));
    new->value = value;
    if(list == NULL){
        new->previus = new;
        new->next = new;
        list = new;
    }
    else if(new->value < list->value){
        new->next = list;
        list->previus->next = new;
        new->previus = list->previus;
        list->previus = new;
        list = new;
    }
    else{
        No * aux = list; 
        for(;aux->next != list && new->value > aux->previus->value; aux = aux->next);
        new->next = aux->next;
        new->previus = aux;
        aux->next->previus = new;
        aux->next = new;
    }
    return list;
}
No * Delete(No * list, int value);
No * Free(No * list);
int size(No * list);
int search(No * list, int value);
void show_frist_value(No * list);
void list_show(No * list){
    if(list != NULL){
        No * aux = list;
        do
        {
            printf("%d ", aux->value);
            aux = aux->next;
        } while (aux != list);
        printf("\n");
    }
    else{
        printf("Lista vazia\n");
    }
}