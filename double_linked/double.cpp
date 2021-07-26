#include <iostream>
#include "double.h"

double_linked::double_linked() {head_=NULL;}

void double_linked::insertHead(int data)
{
    node* newNode = new node;
    newNode->data = data;
    newNode->next=NULL;
    newNode->previous = NULL; 

    if(head_==NULL) {
        head_ = newNode;
        return;
    }
    head_->previous = newNode;
    newNode->next = head_;
    head_=newNode;
}

void double_linked::insertTail(int data) 
{
    node* newNode = new node;
    newNode->data = data;
    newNode->next = NULL;
    newNode->previous = NULL;
    node* temp = NULL;

      if(head_==NULL) {
        head_ = newNode;
        return;
    }
    temp = head_;
    while(temp->next!=NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->previous=temp;
}

void double_linked::print()
{
    node* temp = head_;
    while(temp!=NULL) {
        std::cout<<temp->data<<" ";
        temp = temp->next;
    }
    std::cout<<std::endl;
}

void double_linked::reverse_print()
{
    node* temp = head_;

    if(temp == NULL) {
        return;
    }
    while(temp->next!=NULL) {
        temp = temp->next;
    }
    while (temp!=NULL) {
        std::cout<<temp->data<<' ';
        temp = temp->previous;
    }
    std::cout<<std::endl;
}