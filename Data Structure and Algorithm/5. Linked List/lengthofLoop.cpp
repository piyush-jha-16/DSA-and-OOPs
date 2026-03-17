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

int lengthOfLoop(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            slow = head;
            int length = 0;
            while(slow != fast){
                slow = slow->next;
                fast = fast->next;
                length++;
            }
            return length;

        }
    }
    return 0;
}
int main(){
    Node* head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(4);
    head->next->next->next->next=head->next; 

    int loopLength = lengthOfLoop(head);
    if(loopLength > 0){
        cout<<"Length of loop: "<<loopLength<<endl;
    }
    else{
        cout<<"No loop detected"<<endl;
    }
    return 0;
}