#include "LinkedList.h"

Node::Node() : data(0), next(nullptr){};

Node::Node(int data) : data(data), next(nullptr){};

Node::~Node() {
    delete next;
}

LinkedList::LinkedList() : head(nullptr), size(0) {};

LinkedList::~LinkedList(){
    delete head;
}

void LinkedList::insertAtEnd(int data) {
    Node* newNode = new Node(data);

    if(this->head == nullptr){
        this->head = newNode;
        this->empty = false;
        this->size = 1;
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

    if(this->head->next == nullptr){
        delete head;
        this->head = nullptr;
        this->size = 0;
        this->empty = true;
    }

    if(this->head != nullptr){
        Node* temp = head;
        while (temp->next->next != nullptr) {
            temp = temp->next;
        }

        // temp zeigt jetzt auf den vorletzten Knoten.
        delete temp->next;
        temp->next = nullptr;
        this->size -= 1;
    }

}

std::string LinkedList::displayInfos() {
    std::ostringstream strout;

    strout << std::boolalpha << "Is list Empty: " << this->empty << "\nList size: " << this->size;
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
        strout << "nullptr"; // Das Ende der Liste wird mit nullptr markiert.
    }

    return strout.str();
}

