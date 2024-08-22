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
    Node *next;
    int data;

    Node();
    Node(int);
    ~Node();
};


class LinkedList {
public:
    LinkedList();
    ~LinkedList();

    void insertAtEnd(int);
    void deleteAtEnd();
    std::string displayInfos();
    std::string displayList();

protected:
private:
    bool empty = {true};
    Node *head;
    int size;
};


#endif //SINGLE_LINKED_LIST_LINKEDLIST_H
