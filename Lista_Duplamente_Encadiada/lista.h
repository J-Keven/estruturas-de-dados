#ifndef LISTA_H
#define LISTA_H
#include <stdio.h>
#include <stdlib.h>
typedef struct no No;
No * create_list();
No * insert_value(No * list, int value);
void show_list(No* list);
#endif