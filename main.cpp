#include <iostream>

#include "LinkedList.h"

int main() {

    LinkedList* pList = new LinkedList;

    pList->insertAtEnd(1);
    pList->insertAtEnd(2);
    pList->insertAtEnd(3);
    pList->insertAtEnd(4);

    pList->insertAfterData(3, 99);

    std::cout << pList->displayList() << std::endl;



    return 0;
}
