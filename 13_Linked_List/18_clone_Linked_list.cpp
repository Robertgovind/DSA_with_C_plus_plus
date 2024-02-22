#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* random;

    Node(int d){
        this->data = d;
        this->next = NULL;
        this->random = NULL;
    }
};

void insertAtTail(Node* &head, Node* &tail, int data) {
    Node* temp = new Node(data);
    if(head == NULL){
        head = temp;
        tail = temp;
        return ;
    }
    else{
        tail->next = temp;
        tail = temp;
    }
}
Node* copyList(Node* head) {
    Node* cloneHead = NULL;
    Node* cloneTail = NULL;
    Node* temp = head;
    while(temp != NULL){
        insertAtTail(cloneHead,cloneTail, temp->data);
        temp = temp->next;
    }

    unordered_map<Node*,Node*> mapping;
    Node* originalNode = NULL;
    Node* cloneNode = NULL;

    while(originalNode != NULL){
        mapping[originalNode] = cloneNode;
        originalNode = originalNode->next;
        cloneNode = cloneNode->next;
    }

    originalNode = head;
    cloneNode = cloneHead;

    while(originalNode != NULL){
        cloneNode->random = mapping[originalNode->random];
        originalNode = originalNode->next;
        cloneNode = cloneNode->next;
    }
    return cloneHead;
}