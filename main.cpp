#include <iostream>

#include "LinkedList.h"

int main() {

    LinkedList* pList = new LinkedList;

    pList->insertAtEnd(1);
    pList->insertAtEnd(2);
    pList->insertAtEnd(3);
    pList->insertAtEnd(4);

    pList->insertAfterData(4, 99);



    std::cout << pList->displayList() << std::endl;
pList->deleteAtPosition(1);
    std::cout << pList->displayList() << std::endl;

    return 0;
}
