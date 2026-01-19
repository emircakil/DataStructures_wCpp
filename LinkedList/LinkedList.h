#ifndef LINKEDLIST_H
#define LINKEDLIST_H


#include "Node.h"


class LinkedList{
    
private:
    Node* head;
public:
    LinkedList();
    ~LinkedList();
    void push(int);
    void pop(int);
    void print() const;
};

#endif
