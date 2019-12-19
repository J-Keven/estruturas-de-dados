#ifndef LISTA_H
#define LISTA_H
#include <stdio.h>
#include <stdlib.h>
typedef struct no No;
No * creat();
No * insert(No * list, int value);
No * Delete(No * list, int value);
No * Free_list(No * list);
int value_search(No * list, int value);
int list_size(No * list);
void frist_value(No * list);
void list_show(No * list);
#endif