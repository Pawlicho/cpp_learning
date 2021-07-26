#include <iostream>
#include "linked.h"

linked_list::linked_list() {head_=NULL; tail_=NULL;}

void linked_list::append(int data) 
{

    node* temp = new node;
    temp->data = data;
    temp->next = NULL;


    if (head_==NULL) {
        head_=temp;
        tail_=temp;
    }


    else {
        tail_->next=temp;
        tail_=tail_->next;
    }

}

void linked_list::display() 
{
    node *temp;
    temp = head_;

    while (temp!=NULL) {
        std::cout<<temp->data<<' ';
        temp=temp->next;
    }
    std::cout<<std::endl;
    delete temp;
}

void linked_list::insert(int data) 
{
    node* temp = new node;
    temp->data = data;
    temp->next = head_;
    head_ = temp;
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
    node* temp2 = head_;
    
    for (int i=0;i<place-1;i++) {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
    
}

void linked_list::remove(size_t place)
{
    node* temp1 = head_;
    if (place==0) {
        head_=temp1->next;
        delete temp1;
        return;
    }
    for (int i=0; i<place-1;i++) {
        temp1 = temp1->next;
    }
    node* temp2 = temp1->next;
    temp1->next = temp2->next;
    delete temp2;
    return;
}

void linked_list::reverse() 
{
    node* prev, *current, *next;
    prev=NULL;
    current = head_;
    tail_=head_;
    while (current!=NULL) {
        next=current->next;
        current->next = prev;
        prev=current;
        current=next;
    }
    head_=prev;
}
