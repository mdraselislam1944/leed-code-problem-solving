#include<iostream>
#include<vector>
using namespace std;
struct Node{
int data;
Node* next;
};

void insertNode(Node*& head,int data){
    Node* newNode=new Node();
    newNode->data=data;
    newNode->next=nullptr;
    if(head==nullptr){
        head=newNode;
    }
    else{
        Node* temp=head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=newNode;
    }
}
void printNode(Node*&head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
Node* head=nullptr;
insertNode(head,10);
insertNode(head,20);
insertNode(head,30);
insertNode(head,40);
printNode(head);
return 0;
}
