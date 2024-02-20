#include<iostream>
class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};

Node* sort012(Node* head){
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    Node* temp = head;

    while(temp != NULL){
        if(temp->data == 0)
        zeroCount++;
        else if(temp->data == 1)
        oneCount++;
        else
        twoCount++;

        temp = temp->next;
    }
    temp = head;
    while(temp != NULL){
        if(zeroCount != 0){
            temp ->data = 0;
            zeroCount--;
        }
        else if(oneCount != 0){
            temp->data = 1;
            oneCount--;
        }
        else if(twoCount != 0){
            temp->data = 2;
            twoCount--;
        }
        temp = temp->next;
    }
    return head;
}
//************************************************
void add(Node* &tail,Node* temp){
    tail->next = temp;
    tail = temp;
}
Node* sort012s(Node* head){
    Node* temp = new Node(-1);
    Node* zeroHead = temp;
    Node* zeroTail = temp;
    Node* oneHead = temp;
    Node* oneTail = temp;
    Node* twoHead = temp;
    Node* twoTail = temp;

    Node* curr = head;
    while(head != NULL){
        if(curr-> data == 0){
            add(zeroTail, curr);
        }
        else if( curr->data = 1){
            add(oneTail, curr);
        }
        else{
            add(twoTail, curr);
        }
        curr = curr->next;
    }

    if(oneHead->next != NULL){
        zeroTail->next = oneHead->next;
    }   
    else{
        zeroTail->next = twoHead->next;
    }
    oneTail->next = twoHead->next;
    twoTail->next = NULL;

    head = zeroHead->next;
    delete(oneHead);
    delete(twoHead);
    delete(zeroHead);

    return head;
}