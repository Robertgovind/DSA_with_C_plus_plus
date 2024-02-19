#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
};

Node* removeDuplicate(Node* head){
    map<Node*, bool> test;
    Node* curr = head;
    while(curr != NULL){
        if(test[curr] == true){
            Node* next_next = curr->next->next;
            Node* toDelete = curr->next;
            delete(toDelete);
            curr->next = next_next;
        }
        else{
            test[curr] = true;
        }
        curr = curr->next;
    }
    return head;
}