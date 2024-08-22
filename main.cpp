#include <iostream>

#include "LinkedList.h"

int main() {
    LinkedList liste1;

    liste1.insertAtEnd(10);
    liste1.insertAtEnd(12);

    std::cout << liste1.displayInfos() << std::endl;
    std::cout << liste1.displayList() << std::endl;


    liste1.deleteAtEnd();
    std::cout << liste1.displayInfos() << std::endl;
    std::cout << liste1.displayList() << std::endl;

    liste1.deleteAtEnd();
    std::cout << liste1.displayInfos() << std::endl;
    std::cout << liste1.displayList() << std::endl;

    liste1.insertAtEnd(2222);
    std::cout << liste1.displayInfos() << std::endl;
    std::cout << liste1.displayList() << std::endl;
    return 0;
}
