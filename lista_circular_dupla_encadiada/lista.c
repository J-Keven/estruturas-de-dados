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
        for(;aux->next != list && new->value > aux->next->value; aux = aux->next);
        new->next = aux->next;
        new->previus = aux;
        aux->next->previus = new;
        aux->next = new;
    }
    return list;
}
No * Delete(No * list, int value){
    if(list != NULL){
        No * aux = list->next;
        if(list->value ==  value){
            aux->previus = list->previus;
            list->previus->next = aux; 
            free(list);
            return aux;
        }
        do{
            if(aux->value == value){
                aux->next->previus = aux->previus;
                aux->previus->next = aux->next;
                free(aux);
                aux = NULL;
                break;
            }
            aux = aux->next;
        }while(aux != list);
    }
    else
    {
        printf("Lista Vazia\n");
    }
    return list;
    
}
No * Free(No * list){
    if(list != NULL){
        No * aux = list;
        do{
            No * dell = aux;
            aux = aux->next;
            free(dell);
            dell = NULL;
        }while(aux != list);
    }
    return NULL;
}
int size(No * list){
    int count = 0;
    if(list != NULL){
        No * aux = list;
        do{
            count++;
            aux = aux->next;
        }while(aux != list);
    }
    return count;
}
int search(No * list, int value){
    if(list != NULL){
        No * aux = list;
        do{
            if(aux->value == value){
                return 1;
            }
            aux = aux->next;
        } while (aux != list);
    }
    return 0;
}
void show_frist_value(No * list){
    if(list == NULL){
        printf("Lista vazia\n");
    }
    else{
        printf("%d\n",list->value);
    }
}
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