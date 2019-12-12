#include "lista.h"

int main(int argc, char const *argv[]){
    No * list;
    list = create_list();
    list = insert_value(list, 3);
    list = insert_value(list, 1);
    show_list(list); 
    list = insert_value(list, 2);  
    show_list(list); 
    list = insert_value(list, 4); 
    show_list(list);
    return 0;
}
