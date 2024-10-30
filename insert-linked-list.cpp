#include<iostream>
using namespace std;
struct Node{
int data;
Node* next;
};

void addNode(Node*& head,int data){
    Node* newNode=new Node();

    newNode->data = data;
    newNode->next=nullptr;

    if(!head){
        head=newNode;
        return;
    }

    Node* currentNode=head;

    while(currentNode->next!=nullptr){
        currentNode=currentNode->next;
    }
    currentNode->next=newNode;
}

void print(Node* head){
Node* currentNode=head;
while(currentNode!=nullptr){
    cout<<currentNode->data<<" ";
    currentNode=currentNode->next;
}
cout<<endl;
}

void insertInitial(Node*& head,int data){
    Node* newNode=new Node();
    newNode->data=data;
if(!head){
    newNode->next;
    head=newNode;
    return;
}
newNode->next=head;
head=newNode;
}

void deleteNode(Node* head,int data){
    if(!head){
        cout<<"empty";
        return;
    }
    if(head->data==data){
            Node* temp=head;
            head=temp->next;
            delete temp;
            return;
    }
    Node* currentNode=head;
    while(currentNode->next!=nullptr&&currentNode->next->data!=data){
        currentNode=currentNode->next;
    }

    if(currentNode->next==nullptr){
            cout<<"not found"<<endl;
        return ;
    }

    Node* needTodelete=currentNode->next;
    currentNode->next=needTodelete->next;
    delete needTodelete;
}


int main(){
    Node* head=nullptr;
    deleteNode(head,7);
    print(head);

    addNode(head,5);
    addNode(head,7);
    print(head);

    insertInitial(head,10);
    print(head);

deleteNode(head,7);
    print(head);


return 0;
}
