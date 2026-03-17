#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};

Node* insertAtHead(Node* head,int value){
    if(head==nullptr) return new Node(value);
    Node* newNode = new Node(value);
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
    return head;
}

Node* insertAtTrail(Node* head,int value){
    if(head==nullptr) return new Node(value);
    Node* temp = head;
    while( temp->next!=nullptr){
        temp=temp->next;
    }
    Node* newNode = new Node(value);
    temp->next=newNode;
    newNode->prev=temp;
    return head;
}

Node* insertAtPosition(Node* head,int value,int position){
    if(position==1) return insertAtHead(head,value);
    if(position==0) return head;
    Node* temp = head;
    int cnt = 1;
    while(cnt<position-1 && temp!=NULL){
        temp=temp->next;
        cnt++;
    }
    if(temp==NULL) return head;
    if(temp->next==NULL){
        Node* newNode = new Node(value);
        temp->next=newNode;
        newNode->prev=temp;
        return head;
    }

    Node* newNode = new Node(value);
    newNode->next=temp->next;
    newNode->next->prev=newNode;
    temp->next=newNode;
    newNode->prev=temp;
    return head;
}

Node* insertAfterValue(Node* head,int value,int afterValue){
    if(head==nullptr) return head;
    if(head->data==afterValue) return insertAtHead(head,value);
    Node* temp = head;
    while(temp!=NULL && temp->data!=afterValue){
        temp=temp->next;
    }
    if(temp==NULL) return head;
    if(temp->next==NULL){
        Node* newNode = new Node(value);
        temp->next=newNode;
        newNode->prev=temp;
        return head;
    }
    Node* newNode = new Node(value);
    newNode->next=temp->next;
    newNode->next->prev=newNode;
    temp->next=newNode;
    newNode->prev=temp;
    return head;
}

int main(){
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->prev=head;
    head->next->next = new Node(30);
    head->next->next->prev=head->next;
    head=insertAfterValue(head,5,30);
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}