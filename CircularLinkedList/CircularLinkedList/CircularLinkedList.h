#ifndef CIRCULARLINKEDLIST_H
#define CIRCULARLINKEDLIST_H

class CircularLinkedList{
    
private:
    Node* head;
    Node* tail;
public:
    CircularLinkedList();
    ~CircularLinkedList();
    void push(int);
    void pop(int);
    void print() const;
};

#endif
