#include "lista.h"
int main(int argc, char const *argv[])
{
    No * list = creat();
    list_show(list);
    list = insert(list, 1);
    list = insert(list, 3);
    list = insert(list, 4);
    list_show(list);
    list = insert(list, 2);
    list = insert(list, 0);
    list = insert(list, -1);
    list_show(list);
    list = insert(list, 5);
    list_show(list);
    return 0;
}
