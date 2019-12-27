#ifndef LISTA_H
#define LISTA_H
#include <stdio.h>
#include <stdlib.h>
typedef struct no No;
No * creat();
No * insert(No * list, int value);
No * Delete(No * list, int value);
No * Free(No * list);
int size(No * list);
int search(No * list, int value);
void show_frist_value(No * list);
void list_show(No * list);
#endif