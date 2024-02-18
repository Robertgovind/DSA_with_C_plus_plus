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
//FLOYD'S CYCLE DETECTION ALGORITHM
 bool detectLOOP(Node* head){
    if(head == NULL){
        return false;
    }
    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }
        slow = slow -> next;
        if(slow == fast){
            return true;
        }
    }
    return false;
 }