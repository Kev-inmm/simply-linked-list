#include "LinkedList.h"

Node::Node() : data(0), next(nullptr){};

Node::Node(int data) : data(data), next(nullptr){};


LinkedList::LinkedList() : head(nullptr), size(0) {};

LinkedList::~LinkedList() {
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
}

void LinkedList::insertAtBeginning(int data){
    Node* newNode = new Node(data);

    this->head = newNode;
    this->size++;

}


void LinkedList::insertAtEnd(int data) {
    Node* newNode = new Node(data);

    if(this->head == nullptr){
        this->head = newNode;
        this->size++;
    }else{
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
        this->size += 1;
    }
}

void LinkedList::deleteAtEnd() {
    if (this->head == nullptr){
        return;
    }

    if (this->head->next == nullptr){
        delete head;
        this->head = nullptr;
        this->size = 0;
        return;
    }

    Node* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = nullptr;
    this->size -= 1;


}

std::string LinkedList::displayInfos() {
    std::ostringstream strout;

    strout << std::boolalpha << "Is list Empty: " << (this->head == nullptr) << "\nList size: " << this->size;
    return strout.str();
}

std::string LinkedList::displayList() {
    std::ostringstream strout;
    Node* current = head;

    if (current == nullptr) {
        strout << "The list is empty.";
    } else {
        while (current != nullptr) {
            strout << "Node(data: " << current->data << ", next: " << current->next << ") -> ";
            current = current->next;
        }
        strout << "nullptr";
    }

    return strout.str();
}

