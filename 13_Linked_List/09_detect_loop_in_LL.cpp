#include<iostream>
#include<map>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
};

bool detectCycle(Node* head){
    if(head == NULL){
        return false;
    }
    map<Node*, bool> test;
    Node* temp = head;
    while(temp != NULL){
        if(test[temp] == true){
            return true;
        }
        test[temp] = true;
        temp = temp->next;
    }
    return false;
}