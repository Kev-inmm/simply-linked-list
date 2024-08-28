#include "LinkedList.h"

#pragma clang diagnostic push
#pragma ide diagnostic ignored "UnreachableCode"
Node::Node() : data(0), next(nullptr){};

Node::Node(int data) : data(data), next(nullptr){};


LinkedList::LinkedList() : head(nullptr), size(0) {};

LinkedList::~LinkedList() {
    Node* current = this->head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
    this->head = nullptr;
}

Node* LinkedList::getHead(){
    return this->head;
}

void LinkedList::deleteAtBeginning() {
    if(this->head == nullptr){
        return;
    }
    Node* temp = this->head->next;
    delete this->head;
    this->head = temp;
    this->size--;
};

void LinkedList::insertAtBeginning(int data){

    Node* newNode = new Node(data);

    newNode->next = this->head;
    this->head = newNode;
    this->size++;

}


void LinkedList::insertAtEnd(int data) {
    Node* newNode = new Node(data);

    if(this->head == nullptr){
        this->head = newNode;
        this->size++;
        return;
    }else{
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
        this->size++;
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

void LinkedList::insertAfterData(int key, int data) {
    Node* newNode = new Node(data);


    Node* curr = this->head;

    if(this->head == nullptr){
        this->head = newNode;
        return;
    }

    while (curr != nullptr) {
        if (curr->data == key)
            break;
        curr = curr->next;
    }

    newNode->next = curr->next;
    curr->next = newNode;
}

Node* LinkedList::search(int key) {
    Node* curr = this->head;

    while(curr != nullptr){
        if(curr->data == key){
            return curr;
        }
        curr = curr->next;
    }
}

void LinkedList::clear() {
    Node* temp = this->head;
    while(temp != nullptr){
        Node* next = temp->next;
        delete temp;
        temp = next;
    }
    this->head = nullptr;
    this->size = 0;
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
            strout << "Node:(data: " << current->data << ", next: " << current->next << ") -> ";
            current = current->next;
        }
        strout << "nullptr";
    }

    return strout.str();
}


#pragma clang diagnostic pop