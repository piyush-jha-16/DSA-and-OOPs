#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

Node* middleOfLL(Node* head){
    if(head==NULL) return NULL;
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

int main(){
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    Node* middleNode = middleOfLL(head);
    if(middleNode!=NULL){
        cout<<"Middle Element : "<<middleNode->data<<endl;
    }else{
        cout<<"Linked List is empty."<<endl;
    }
    return 0;
}