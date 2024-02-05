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

    ~Node(){
        int val = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Deleted :"<<data<<endl;
    }
};
//INSERTION IN LINKED LIST
void insertAtHead(Node* &head,int data){
    Node* NewNode = new Node(data);

    NewNode -> next = head;
    head = NewNode;
}

void insertAtTail(Node* &tail,int data){
    Node* newNode=new Node(data);
    tail->next = newNode;
    tail = newNode;
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
    temp->next = newNode;
}
//DELETION IN LINKED LIST
void deleteNode(int pos, Node* &head){
    if(pos == 1){
        Node* temp = head;
        head = head->next;
        temp = NULL;
        delete temp;
    }
    else{
        Node* prev;
        Node* current = head;
        int count = 1;
        while(count<pos){
            if(current->next == NULL){
                cout<<"Position not found!!"<<endl;
                return ;
            }
            prev=current;
            current=current->next;
            count++;
        }
        prev->next = current->next;
        current->next = NULL;
        delete current;

    }
}
//TRAVERSAL IN LINKED LIST
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

    insertAtHead(head,44);
    print(head);

    insertAtTail(tail,12);
    print(head);
    insertAtTail(tail, 15);
    print(head);
    insertAtTail(tail,22);
    print(head);

    insertAtPos(head,tail,4,20);
    print(head);

    deleteNode(6,head);
    print(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    return 0;
}