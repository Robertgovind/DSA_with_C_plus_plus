#include<bits/stdc++.h>
class Node {
    public:
    int data;
    Node* next;
};

bool checkCircular(Node* head){
    if(head == NULL){
        return true;
    }
    if(head ->next == NULL){
        return false;
    }
    if(head -> next == head){
        return true;
    }
    Node* temp = head -> next;
    while(temp != NULL && temp->next != head){
        temp = temp->next;
    }
    if(temp == NULL)
    return false;

    return true;
}