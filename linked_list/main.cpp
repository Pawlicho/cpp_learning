#include <iostream>
# include "linked.h"


int main() {

    linked_list list = linked_list();
   for (int j =0; j<6; j++) {
       list.append(j);
   }
    list.display();
    
    list.remove(2);
    list.display();
    list.remove(0);
    list.display();
    list.reverse();
    list.display();

  
    return 0;
}