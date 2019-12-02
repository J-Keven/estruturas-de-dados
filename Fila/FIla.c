#include "FIla.h"

struct fila{
    int value;
    struct fila * next;
    struct fila * andRow
};

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