#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};


void insertNode(Node*& head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}


void printNode(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


void deleteNode(Node*& head) {
    Node* currentNode = head;
    Node* nextNode = nullptr;
    while (currentNode != nullptr) {
        nextNode = currentNode->next;
        delete currentNode;
        currentNode = nextNode;
    }
    head = nullptr;
}

int main() {
    Node* head = nullptr;


    insertNode(head, 10);
    insertNode(head, 20);
    insertNode(head, 30);
    insertNode(head, 40);


    cout << "Linked List: ";
    printNode(head);


    deleteNode(head);


    cout << "Linked List after deletion: ";
    printNode(head);

    return 0;
}
