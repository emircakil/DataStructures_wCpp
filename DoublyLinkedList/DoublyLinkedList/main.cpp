#include "Node.h"
#include "DoublyLinkedList.h"
#include <iostream>

int main(int argc, const char * argv[]) {
  
    DoublyLinkedList* lList = new DoublyLinkedList();
    
    lList->push(10);
    lList->push(20);
    lList->push(30);
    lList->push(40);
    lList->push(50);
    lList->push(60);
    lList->push(70);
    
    lList->pop(10);
    lList->pop(30);
    lList->pop(70);
    
    lList->print();
    
    return EXIT_SUCCESS;
}
