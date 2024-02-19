#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
};

Node* removeDuplicate(Node* head){
    if(head == NULL){
        return head;
    }

    Node* curr = head;
    while(curr != NULL){
        if(curr->next != NULL && curr->data == curr->next->data){
            Node* next_next = curr->next->next;
            Node* toDelete = curr->next;
            delete(toDelete);
            curr->next = next_next;
        } 
        else{
            curr = curr->next;
        }
    }
    return head;
}