#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

class DoublyLinkedList{
    
private:
    Node* head;
public:
    DoublyLinkedList();
    ~DoublyLinkedList();
    
    void push(int);
    void pop(int);
    void print() const;

};

#endif
