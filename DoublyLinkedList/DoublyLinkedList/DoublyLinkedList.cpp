#include "Node.h"
#include "DoublyLinkedList.h"
#include <iostream>

using std::cout;
using std::endl;

DoublyLinkedList::DoublyLinkedList(){
    head = nullptr;
}

DoublyLinkedList::~DoublyLinkedList(){
    
    Node* current = head;
      while (current != nullptr) {
          Node* nextNode = current->nextNode;
          delete current;
          current = nextNode;
      }
}

void DoublyLinkedList::push(int value) {
    Node* newNode = new Node(value);

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->nextNode != nullptr) {
        temp = temp->nextNode;
    }
    temp->nextNode = newNode;
    newNode->prevNode = temp;
}


void DoublyLinkedList::pop(int value){
    
    if(head == nullptr){
        cout << "There is nothing to pop" << endl;
        return;
    }
    
    if(head->value == value){
        Node* holdHead = head;
        head->nextNode->prevNode = nullptr;
        head = head->nextNode;
        delete holdHead;
    }
    
    Node* temp = head;
    while(temp->nextNode != nullptr){
        
        temp = temp->nextNode;
        if(temp->value == value){
            
            if(temp->nextNode ==nullptr){
                temp->prevNode->nextNode=nullptr;
                temp->prevNode= nullptr;
                delete temp;
                return;
            }
            temp->nextNode->prevNode = temp->prevNode;
            temp->prevNode->nextNode = temp->nextNode;
            delete temp;
            return;
        }
    }
}

void DoublyLinkedList::print() const{
    
    if(head == nullptr){
        cout << "There is nothing to print" << endl;
        return;
    }
    
    Node* temp = head;
    
    while(temp != nullptr){
        cout << temp->value << "->";
        temp = temp->nextNode;
    }
}


