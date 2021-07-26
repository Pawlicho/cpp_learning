#ifndef double_h
#define double_h

struct node {
    int data;
    node* next;
    node* previous;
};

class double_linked {
    private:
        node* head_;
    public:
        double_linked();
        void insertHead(int data);
        void insertTail(int data);
        void print();
        void reverse_print();
};
#endif