#include "Node.h"
#include "Stack.h"
#include <iostream>

int main(int argc, const char * argv[]) {

    Stack* stack = new Stack();
    
    stack->push(10);
    stack->push(20);
    stack->push(30);
    stack->push(40);
    stack->push(50);
    stack->push(60);
    stack->push(70);
    stack->push(80);
    
    stack->pop();
    stack->pop();
    
    stack->print();
    
    return EXIT_SUCCESS;
}
