#ifndef linked_h
#define linked_h

struct node {
    int data;
    node* next;

};

class linked_list {
    private:
      node* head;
      node* tail;
    public:
       linked_list();
       void add(int data);
       void front(int data);
       void display();

};

#endif 