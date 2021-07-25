#include <iostream>
# include "linked.h"


int main() {

    linked_list list = linked_list();
   for (int j =0; j<6; j++) {
       list.append(j);
   }
    list.display();
    list.insert(29,4);
    list.display();
    list.insert(278,2);
    list.display();

    return 0;
}