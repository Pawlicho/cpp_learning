#include <iostream>
#include "linked.h"

//Default constructor 
linked_list::linked_list() {_head=NULL; _tail=NULL;}

//Method which appends list with a new node
void linked_list::append(int data) 
{

    node* temp = new node;
    temp->data = data;
    temp->next = NULL;


    if (_head==NULL) {
        _head=temp;
        _tail=temp;
    }


    else {
        _tail->next=temp;
        _tail=_tail->next;
    }

}

//Method that displays element of the list in current order
void linked_list::display() 
{
    node *temp;
    temp = _head;

    while (temp!=NULL) {
        std::cout<<temp->data<<' ';
        temp=temp->next;
    }
    std::cout<<std::endl;
}

//Method which insert new node at the beginning of the list with given data
void linked_list::insert(int data) 
{
    node* temp = new node;
    temp->data = data;
    temp->next = _head;
    _head = temp;
}

void linked_list::insert(int data, size_t place)
{
    node* temp1 = new node;
    temp1->data = data;
    temp1->next = NULL;

    if (place==0) {
        insert(data);
        return;
    }
    node* temp2 = _head;
    //With this loop i look for the correct place to insert new node !!!!
    for (int i=0;i<place-1;i++) {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
    
}



