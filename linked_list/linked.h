#ifndef linked_h
#define linked_h

struct node {
    int data;
    node* next;

};

class linked_list {
    private:
      node* head_;
      node* tail_;
    public:
       linked_list();
       void append(int data);
       void insert(int data);
       void display();
       void insert(int data, size_t place);
       //linked_list operator+(const linked_list& right);
       void remove(size_t place);
       void reverse();
};

#endif 