#include <iostream>
#include "linked.h"

linked_list::linked_list() {head=NULL; tail=NULL;}

void linked_list::add(int data) 
{

    node* temp = new node;
    temp->data = data;
    temp->next = NULL;


    if (head==NULL) {
        head=temp;
        tail=temp;
    }


    else {
        tail->next=temp;
        tail=tail->next;
    }

}

void linked_list::display() 
{
    node *temp;
    temp = head;

    while (head!=NULL) {
        std::cout<<temp->data<<' ';
        temp=temp->next;
    }
}




