#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data)  {
        this->data = data;
        this->next = NULL;
    }
};

Node* reverse(Node* &head){
    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
void insertAtTail(Node* &head, Node* &tail,int d){
    Node* temp = new Node(d);
    if(head == NULL){
        head = temp;
        tail = temp;
        return;
    }
    else{
        tail->next = temp;
        tail = temp;
    }
}

Node* Add(Node* first, Node* second){
    int carry = 0;
    Node* ansHead = NULL;
    Node* ansTail = NULL;
    while(first != NULL && second != NULL){
        int sum = carry + first->data + second->data;
        int digit = sum%10;
        insertAtTail(ansHead,ansTail,digit);
        carry = sum/10;
        first = first->next;
        second = second->next;
    }
    while(first != NULL){
        int sum = carry + first->data;
        int digit = sum%10;
        insertAtTail(ansHead,ansTail,digit);
        carry = sum/10;
        first = first->next;
    }
    while(second != NULL){
        int sum = carry + second->data;
        int digit = sum%10;
        insertAtTail(ansHead,ansTail,digit);
        carry = sum/10;
        second = second->next;
    }
    while(carry != NULL){
        insertAtTail(ansHead,ansTail,carry) ;
        carry = 0;
    }
    return ansHead;
}

//OPTIMIZED ADD FUNCTION
Node* ADD1(Node*first, Node* second){
    int carry = 0;
    Node* ansHead = NULL;
    Node* ansTail = NULL;
    while(first != NULL || second != NULL || carry != 0){
        int val1=0;
        if(first != NULL) val1= first->data;
        int val2=0;
        if(second != NULL) val2=second->data;
        int sum = carry + val1 + val2;
        int digit = sum%10;
        insertAtTail(ansHead,ansTail, digit);
        carry = sum/10;
        if(first != NULL) first = first->next;
        if(second != NULL) second = second->next;
    }
    return ansHead;
}
Node* addTwoList(Node* first, Node* second){
    reverse(first);
    reverse(second);
    Node* ans = Add(first, second);
    reverse(ans);
    return ans;
}