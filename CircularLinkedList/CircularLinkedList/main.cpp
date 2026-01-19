
#include "Node.h"
#include "CircularLinkedList.h"
#include <iostream>

int main(int argc, const char * argv[]) {
    
    CircularLinkedList* lList = new CircularLinkedList();
    lList->push(10);
    lList->push(20);
    lList->push(30);
    lList->push(40);
    lList->push(50);
    lList->push(60);
    lList->push(70);
    lList->push(80);
    
    lList->pop(10);
    lList->pop(80);
    lList->pop(30);
    
    lList->print();
    
    return EXIT_SUCCESS;
}
