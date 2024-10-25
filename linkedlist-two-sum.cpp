#include<iostream>
#include<stack>
using namespace std;
struct Node{
    int data;
    Node* next;
};

void insertIntoNode(Node*& head,int data){
    Node* newNode=new Node();
    newNode->data=data;
    newNode->next=nullptr;
    if(head==nullptr){
         head=newNode;
         return;
    }
    else{
        Node* temp=head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=newNode;
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

Node* sumTwoNode(Node* head1, Node* head2) {
    Node* temp1 = head1;
    Node* temp2 = head2;
    stack<int>st1,st2;
    while(temp1!=nullptr){
        st1.push(temp1->data);
        temp1=temp1->next;
    }
    while(temp2!=nullptr){
        st2.push(temp2->data);
        temp2=temp2->next;
    }
    Node* sumNode=nullptr;
    int carry=0;
    while(!st1.empty()||!st2.empty()||carry){
        int x=0,y=0;
        if(!st1.empty()){
            x=st1.top();
            st1.pop();
        }
        if(!st2.empty()){
            y=st2.top();
            st2.pop();
        }
        int sum=x+y+carry;
        carry=sum/10;
        sum=sum%10;
        insertIntoNode(sumNode,sum);
    }
    return sumNode;
}

int main(){
    Node* head=nullptr;
    Node* head2=nullptr;
    insertIntoNode(
                   head,9);
    insertIntoNode(head,9);
    insertIntoNode(head,9);
    insertIntoNode(head,9);

    insertIntoNode(head2,9);
    insertIntoNode(head2,9);
    insertIntoNode(head2,9);
    insertIntoNode(head2,9);
    insertIntoNode(head2,9);
    insertIntoNode(head2,9);
    insertIntoNode(head2,9);
    insertIntoNode(head2,9);

    Node* test=sumTwoNode(head,head2);
    printNode(test);
return 0;
}
