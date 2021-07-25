#ifndef linked_h
#define linked_h

struct node {
    int data;
    node* next;

};

class linked_list {
    private:
      node* _head;
      node* _tail;
    public:
       linked_list();
       void append(int data);
       void insert(int data);
       void display();
       void insert(int data, size_t place);
};

#endif 