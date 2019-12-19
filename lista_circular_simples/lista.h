#ifndef LISTA_H
#define LISTA_H
#include <stdio.h>
#include <stdlib.h>
typedef struct no No;
No * creat();
No * insert(No * list, int value);
No * Delete(No * list, int value);
int value_search(No * list, int value);
int frist_value(No * list);
int list_size(No * list);
void list_show(No * list);
#endif