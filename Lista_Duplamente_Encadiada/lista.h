#ifndef LISTA_H
#define LISTA_H
#include <stdio.h>
#include <stdlib.h>
typedef struct no No;
No * create_list();
No * insert_value(No * list, int value);
No * delete(No * list, int value);
No * list_free(No * list);
int search_value(No * list, int value);
int list_size(No * list);
void show(No* list);
void frist_value(No * list);
#endif