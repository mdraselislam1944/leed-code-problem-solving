#include <iostream>
#include <stack>  // Include stack library
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to insert a new node at the end of the list
void insertNode(Node*& head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;  // If the list is empty, make the new node the head
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;  // Traverse to the end of the list
        }
        temp->next = newNode;  // Insert the new node at the end
    }
}

// Function to print the linked list in reverse order using a stack
void printReverse(Node* head) {
    stack<int> s;  // Create a stack to hold the node data
    Node* temp = head;

    // Push all node data onto the stack
    while (temp != nullptr) {
        s.push(temp->data);
        temp = temp->next;
    }

    // Pop and print the data from the stack
    while (!s.empty()) {
        cout << s.top() << " ";  // Print the top element
        s.pop();                 // Remove the top element
    }
}

// Function to delete all nodes in the linked list
void deleteNode(Node*& head) {
    Node* currentNode = head;
    Node* nextNode = nullptr;
    while (currentNode != nullptr) {
        nextNode = currentNode->next;  // Store the next node
        delete currentNode;             // Delete the current node
        currentNode = nextNode;         // Move to the next node
    }
    head = nullptr;  // Set the head to nullptr after deleting all nodes
}

int main() {
    Node* head = nullptr;

    // Insert nodes into the linked list
    insertNode(head, 10);
    insertNode(head, 20);
    insertNode(head, 30);
    insertNode(head, 40);

    // Print the linked list in reverse order
    cout << "Linked List in Reverse Order: ";
    printReverse(head);  // Should print: 40 30 20 10
    cout << endl;

    // Delete all nodes in the linked list
    deleteNode(head);

    return 0;
}

