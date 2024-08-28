//
// Created by kevin on 21.08.2024.
//

#ifndef SINGLE_LINKED_LIST_LINKEDLIST_H
#define SINGLE_LINKED_LIST_LINKEDLIST_H

#include <iostream>
#include <string>
#include <sstream>


class Node {
public:
    Node* next;
    int data;

    Node();
    Node(int);
};


class LinkedList {
public:
    LinkedList();
    ~LinkedList();

    void insertAtBeginning(int);
    void insertAfterData(int, int);
    void insertAtEnd(int);

    void deleteAtBeginning();
    void deleteAtPosition(int);
    void deleteAtEnd();

    Node* search(int);
    void clear();
    Node* getHead();

    std::string displayInfos();
    std::string displayList();

protected:
private:
    Node* head;
    int size;
};


#endif //SINGLE_LINKED_LIST_LINKEDLIST_H
