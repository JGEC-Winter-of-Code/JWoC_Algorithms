#include <bits/stdc++.h> 
using namespace std; 

//Defining a node  
class Node { 
public: 
    int data; 
    Node* next; 
}; 

//Print the linked list when ref to head is passed
void print(Node *head){
    //def temp so that we don't lost the ref to head of the linked list
    Node *temp;
    temp=head;
    //traverse until temp points to null and keep on printing the data of the node
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

//Insert node at the beginning of the list
void *insertFirst(Node *head,int data){
    Node *our_node=new Node();
    our_node->data=data;
    our_node->next=NULL;
    Node *temp;
    temp=head;
    //if head null then our new node is the first node
    if(head==NULL){
        head=our_node;
    }
    //else point the head to new node and head next to the new node next
    else{
        our_node->next=head->next;
        head=our_node;
    }
    return head;
}

//Insert node at the last of the node
Node *insertLast(Node *head,int data){
    Node *our_node=new Node();
    our_node->next=NULL;
    our_node->data=data;
    Node *temp;
    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp=our_node;
    return head;
}
//Delete a node 
Node *del(Node *head,int pos){
    if(pos==0){
        Node *next=head->next;
        delete head;
        return next;
    }
    Node *curr=head;
    Node *prev=head;
    for(int i=0;i<pos;i++){
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    delete curr;
    return head;
}

int main(){
    Node *head=NULL;
    Node *first=NULL;
    Node *second=NULL;
    //allocating three nodes
    head=new Node();
    first=new Node();
    second=new Node();
    //data of the head
    head->data=5;
    head->next=first;
    //data of the first node
    first->data=10;
    first->next=second;
    //data of the third node
    second->data=15;
    second->next=NULL;

    //You can call any of the above listed method to perfrom the desied operation the linked list
    //that you pass
    return 0;
}