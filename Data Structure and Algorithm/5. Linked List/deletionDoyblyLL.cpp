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

Node* deleteHead(Node* head){
    if(head==nullptr) return nullptr;
    return head->next;
}

Node* deleteTail(Node* head){
    if(head==nullptr || head->next==nullptr) return nullptr;
    Node* temp=head;
    while(temp->next->next){
        temp=temp->next;
    }
    temp->next=nullptr;
    return head;
}

Node* deleteAtPosition(Node* head,int position){
    if(position==1) return deleteHead(head);
    if(position==0) return head;
    Node* temp = head;
    int cnt = 1;
    while(cnt<position-1 && temp!=NULL){
        temp=temp->next;
        cnt++;
    }
    if(temp==NULL || temp->next==NULL) return head;
    if(temp->next->next==NULL){
        temp->next=nullptr;
        return head;
    }
    temp->next=temp->next->next;
    temp->next->prev=temp;
    return head;

}

int main(){
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->prev=head;
    head->next->next = new Node(30);
    head->next->next->prev=head->next;
    head=deleteTail(head);
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}