#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
int getLength(Node* head){
    int len = 0;
    while( head != NULL){
        head=head->next;
        len++;
    }
    return len;
}
Node* findMiddle(Node* head){
    int len=getLength(head)/2;
    int count = 0;
    Node* temp =head;
    while (count<len)
    {
        temp = temp->next;
        count++;
    }
    return temp;
}

//Optimized code to find middle node of linked list
Node* getMiddle(Node*head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    if(head->next->next == NULL){
        return head->next;
    }
    Node* fast = head->next;
    Node* slow = head;
    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }
        slow = slow->next;
    }
    return slow;
}