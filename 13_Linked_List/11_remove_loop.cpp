#include<iostream>
using namespace std;


class Node {
    public:
    int data;
    Node* next;
};
//To get amy node that is part of the loop
Node* getLoopNode(Node* head){
    if(head == NULL){
        return head;
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
            return slow;
        }
    }
    return NULL;
}
//To get start node of the loop
Node* getStartNode(Node* head){
    if(head == NULL){
        return head;
    }
    Node* intersect = getLoopNode(head);
    
    if(intersect == NULL)
    return NULL;

    Node* slow = head;
    while(slow != intersect){
        slow = slow->next;
        intersect = intersect-> next;
    }
    return slow;
}

void removeLoop(Node* head) {
    if(head == NULL){
        return;
    }
    Node* start = getStartNode(head);

    if(start == NULL)
    return;

    Node* temp = start->next;
    while(temp->next != start){
        temp = temp->next;
    }
    temp->next = NULL;
}