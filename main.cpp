#include <iostream>

#include "LinkedList.h"

int main() {

    LinkedList* pList = new LinkedList;

    pList->insertAtBeginning(2);
    std::cout << pList->displayList() << std::endl;

    pList->deleteAtBeginning();
    std::cout << pList->displayList() << std::endl;

    pList->insertAtBeginning(5);
    std::cout << pList->displayList() << std::endl;

    pList->insertAtEnd(10);
    std::cout << pList->displayList() << std::endl;

    pList->insertAtBeginning(222);
    std::cout << pList->displayList() << std::endl;

    pList->clear();

    std::cout << pList->displayList() << std::endl;

    pList->deleteAtBeginning();
    std::cout << pList->displayList() << std::endl;

    pList->deleteAtEnd();
    std::cout << pList->displayList() << std::endl;

    std::cout << pList->getHead() << std::endl;
    std::cout << pList->displayInfos() << std::endl;

    pList->insertAfterData(3,3);
    pList->insertAtBeginning(444);
    pList->insertAfterData(444,222);
    pList->insertAfterData(444,5);


    std::cout << pList->displayList() << std::endl;

    std::cout << pList->search(5) << std::endl;

    return 0;
}
