#ifndef FILA_H
#define FILA_H
#include <stdio.h>
#include <stdlib.h>

typedef struct fila Fila;
Fila * criate();
Fila * InsertInRow(Fila * row, int value);
Fila * ShowFila(Fila * Raw);
#endif