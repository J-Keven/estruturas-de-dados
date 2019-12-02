#include "FIla.h"

struct fila{
    int value;
    struct fila * next;
    struct fila * andRow
};
Fila * criate(){
    return NULL;
}

Fila * InsertInRow(Fila * row, int value){
    if(row == NULL){
        return NULL;
    }
    Fila *newRow = (Fila *)calloc(1, sizeof(Fila));
    newRow->value = value;
    row->andRow->next = newRow;
    row->andRow = newRow;
    return row;
}

Fila * ShowFila(Fila * row){
    if(row != NULL){
        for(;row != NULL; row = row->next){
            printf("%d ", row->value);
        }
    }
}
