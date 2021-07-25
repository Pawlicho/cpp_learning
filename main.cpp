#include <iostream>
# include "linked.h"


int main() {

    linked_list list = linked_list();
    list.add(25);
    list.add(2);
    list.add(5);
    list.add(21);

    list.display();

    return 0;
}