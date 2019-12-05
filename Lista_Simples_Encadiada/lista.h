#ifndef LISTA_H
#define LISTA_H
#include <stdio.h>
#include <stdlib.h>
typedef struct no No;
No * create();
No * insert(No * list, int value);
No * insert_In_Order(No * list, int value);
No * Delete(No * list, int value);
No * FreeList(No * list);
int Search(No * list, int value);
void Show(No * list);
#endif