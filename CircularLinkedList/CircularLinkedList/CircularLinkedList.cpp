#include "Node.h"
#include "CircularLinkedList.h"
#include <iostream>

using std::cout;
using std::endl;

CircularLinkedList::CircularLinkedList(){
    
    head = nullptr;
    tail = nullptr;
}

CircularLinkedList::~CircularLinkedList(){
    Node* current = head;
    while(head != tail){
        current= head;
        head = head->nextNode;
        delete current;
    }
}

void CircularLinkedList::push(int value){
    
    Node* newNode = new Node(value);
    
    if(head == nullptr){
        head = newNode;
        tail = newNode;
        return;
    }
    
    Node* temp = head;
    
    while(temp != tail){
        temp = temp->nextNode;
    }
    
    temp->nextNode = newNode;
    tail = newNode;
    newNode->nextNode = head;
}

void CircularLinkedList::pop(int value){
    
    if(head == nullptr){
        cout << "There is nothing to pop";
        return;
    }
    
    if(head->value == value){
        
        head = head->nextNode;
    }
    
    Node* temp = head;
    Node* prev = temp;
    while(temp != tail){
        
        temp= temp->nextNode;
        if(temp == tail && temp->value == value){
            
            prev->nextNode = temp->nextNode;
            tail = prev;
            delete temp;
            return;
            
        }
        if(temp->value == value){
            prev->nextNode = temp->nextNode;
            delete temp;
            return;
        }
        prev = temp;
    }
}

void CircularLinkedList::print() const{
    
    if(head == nullptr){
        
        cout << "There is nothing to print";
        return;
    }
    
    Node* temp = head;
    cout << temp->value;
    while(temp != tail){
        temp = temp->nextNode;
        cout << "->" << temp->value;
    }
}
    
    




