#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void insertAtHead(Node* &head,int data){
    Node* NewNode = new Node(data);

    NewNode -> next = head;
    head = NewNode;
}

void print(Node* head){
    Node* temp = head;
    while(head != NULL){
        cout<<temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head,12);
    print(head);
    insertAtHead(head, 15);
    print(head);
    return 0;
}