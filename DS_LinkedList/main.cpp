
#include <iostream>
#include "Node.h"
#include "LinkedList.h"

int main(int argc, const char * argv[]) {
  
    LinkedList* lList = new LinkedList();
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
    
    return 0;
    delete lList;
}
