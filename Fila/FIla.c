#include "FIla.h"

struct fila{
    int value;
    struct fila * next;
    struct fila * andRow
};

Fila * criate(){
    return NULL;
}

Fila * Insert(Fila * row, int value){
    if(row == NULL){
        return NULL;
    }
    Fila *newRow = (Fila *)calloc(1, sizeof(Fila));
    newRow->value = value;
    row->andRow->next = newRow;
    row->andRow = newRow;
    return row;
}

Fila * Remove(Fila * row){
    if(row != NULL){
        return NULL;
    }
    Fila * aux = row->next;
    free(row);
    row = NULL;
    return aux;
}

Fila * Free(Fila * row){
   if(row != NULL){
        return NULL;
    }
    Fila * aux = row->next;
    for(;aux != NULL;aux = aux->next){
        free(row);
        row = aux;    
    }
    free(row);
    return NULL;
}

int size(Fila * row){
    int cont = 0;
    for(; row != NULL; row = row->next);
    return cont;
}

int SeekValue(Fila * row, int value){
    for(;row != NULL;row = row->next){
        if(row->value == value){
            return 1;
        }
    }
    return 0;
}

void Show(Fila * row){
    if(row != NULL){
        for(;row != NULL; row = row->next){
            printf("%d ", row->value);
        }
    }
}