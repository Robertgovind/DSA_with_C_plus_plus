#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};
//INSERTION IN DOUBLY LINKED LIST
void insertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void insertAtTail(Node* &tail, int data){
    Node* temp=new Node(data);
    tail->next = temp;
    temp->prev=tail;
    tail=temp;
}

void insertAtPos(Node* &head,Node* &tail, int pos,int data){
    if(pos == 1){
        insertAtHead(head,data);
        return ;
    }
    Node* temp = head;
    int count =1;
    while(count<pos - 1){
        temp=temp->next;
        count++;
    }
    if(temp == NULL){
        insertAtTail(tail,data);
        return; 
    }
    Node* newNode = new Node(data);
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next=newNode;
    newNode->prev=temp;
}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main(){
    Node* head = new Node(5);
    Node* tail = head;
    print(head);
    insertAtHead(head,6);
    print(head);
    insertAtTail(tail,3);
    print(head);
    insertAtPos(head,tail,2,9);
    print(head);
    return 0;
}