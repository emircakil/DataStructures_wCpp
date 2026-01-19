
#include "LinkedList.h"
#include <iostream>

using std::cout;
using std::endl;

LinkedList::LinkedList()
    : head(nullptr)
{
}

LinkedList::~LinkedList()
{
    // Tüm düğümleri sil (memory leak olmasın)
    Node* current = head;
    while (current != nullptr) {
        Node* nextNode = current->nextNode;
        delete current;
        current = nextNode;
    }
}

void LinkedList::push(int value)
{
 
    Node* newNode = new Node(value);
    Node* temp = head;
    
    if(head == nullptr){
        
        head = newNode;
        return;
    }
    
    while(temp->nextNode != nullptr){
        
        temp = temp->nextNode;
    }
    temp->nextNode = newNode;
}

void LinkedList::pop(int value)
{
    if(head == nullptr){
        return;
    }
    
    if(head->value == value){
        head = head->nextNode;
        return;
    }
    
    Node* temp = head;
    Node* prev = head;
    while(temp->nextNode != nullptr){
        temp = temp->nextNode;
        
        if(temp->value == value){
            prev->nextNode = temp->nextNode;
            cout << temp->value << "\n"<< endl;
            return;
        }
        prev= prev->nextNode;
    }
}

void LinkedList::print() const
{
    Node* temp = head;
    if(head == nullptr){
        return;
    }
    while(temp != nullptr){
        
        cout <<  temp->value << "->";
        temp = temp->nextNode;
    }
}

