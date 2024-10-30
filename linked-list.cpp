#include<iostream>
using  namespace std;
struct Node{
int data;
Node* next;
};

void insertNode(Node* &head,int data){
Node* newNode=new Node();
newNode->data=data;
newNode->next=nullptr;
if(head==nullptr){
    head=newNode;
}else{
Node* currentNode=head;

while(currentNode->next!=nullptr){
    currentNode=currentNode->next;
}
currentNode->next=newNode;
}
}

void printNode(Node*& head){
Node* currentNode=head;
while(currentNode!=nullptr){
    cout<<currentNode->data<<" ";
    currentNode=currentNode->next;
}
}

int main(){

Node* head=nullptr;
insertNode(head, 8);
insertNode(head, 10);
insertNode(head, 12);
insertNode(head, 14);

printNode(head);
return 0;
}
