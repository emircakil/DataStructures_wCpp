#ifndef STACK_H
#define STACK_H

class Stack{
    
private:
    Node* top;
public:
    Stack();
    ~Stack();
    void push(int value);
    void pop();
    void peek();
    void print() const;
};

#endif
