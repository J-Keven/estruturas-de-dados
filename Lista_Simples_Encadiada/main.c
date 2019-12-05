#include "lista.h"
int main(int argc, char const *argv[])
{
    No * list = create();
    list = insert(list,1);
    list = insert_In_Order(list,2);
    list = insert_In_Order(list,3);
    list = insert_In_Order(list,4);
    list = insert_In_Order(list,5);
    Show(list);
    printf("\n");
    list = Delete(list, 2);
    Show(list);
    printf("\n");
    list = Delete(list, 5);
    Show(list);
    printf("\n");
    list = Delete(list, 3);
    Show(list);
    printf("\n");
    list = FreeList(list);
    Show(list);
    printf("\n");
    return 0;
}
