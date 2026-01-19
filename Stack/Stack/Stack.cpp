#include "Node.h"
#include "Stack.h"
#include <iostream>

using std::cout;
using std::endl;

Stack::Stack(){
    top = nullptr;
}
Stack::~Stack(){
    
    Node* current = top;
    while(top->link != nullptr){
        current = top;
        top = top->link;
        delete current;
    }
}

void Stack::push(int value){
    Node* newNode = new Node(value);
    
    if(top == nullptr){
        top = newNode;
        return;
    }
    
    newNode->link = top;
    top = newNode;
}

void Stack::pop(){
    
    cout << "poped:"; peek();
    
    Node* hold = top;
    top = top->link;
    delete hold;
}

void Stack::peek(){
    
    cout << top->value << endl;
}

void Stack::print() const{
    
    Node* temp = top;
    
    while(temp != nullptr){
        
        cout << temp->value << endl << " ^" << endl;
        temp = temp->link;
    }
}
