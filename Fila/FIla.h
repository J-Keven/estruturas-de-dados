#ifndef FILA_H
#define FILA_H
#include <stdio.h>
#include <stdlib.h>

typedef struct fila Fila;
Fila * criate();
Fila * Insert(Fila * row, int value);
Fila * Remove(Fila * row);
Fila * Free(Fila * row);
int size(Fila * row);
int SeekValue(Fila * row, int value);
void Show(Fila * Raw);
#endif