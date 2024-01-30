#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

Node* reverseLinkedList(Node* &head){
    Node* prev=NULL;
    Node* curr = head;
    Node* forward = NULL;
    while(curr != NULL){
        forward= curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

void reverseLinkedList1(Node* &head, Node* curr, Node* prev){
    if(curr == NULL){
        head = prev;
        return;
    }
    Node* forward = curr->next;
    reverseLinkedList1(head,forward,curr);
    curr->next = prev;
}