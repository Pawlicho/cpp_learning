#include <iostream>
#include "double.h"

int main() {

    double_linked list = double_linked();
    for (int i=6;i>0;i--) {
        list.insertHead(i);
    }
    list.insertTail(256);
    list.print();
    list.reverse_print();

    return 0;
}