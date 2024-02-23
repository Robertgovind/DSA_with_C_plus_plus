#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* arb;

    Node(int d){
        this->data = d;
        next = NULL;
        arb = NULL;
    }
};

class Solution {
   private:
    void insertAtTail(Node* &head, Node* &tail, int d) {
        Node* newNode = new Node(d);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail -> next = newNode;
            tail = newNode;
        }
    }
    
    void print(Node* head) {
        while(head != NULL) {
            cout << head -> data << " ";
            head = head -> next;
        }cout << endl;
    }

    void printRandom(Node* head) {
        while(head != NULL) {
            cout << " head data: " << head->data <<" ";
            if(head ->arb != NULL) {
                cout << " head random data" << head -> arb ->data;
            }
            else
            {
                cout << " head random data: NULL";
            }
            head = head -> next;
            cout << endl;
        }
    }

    public:
    Node *copyList(Node *head)
    {
        //step 1: Create a Clone List
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        
        Node* temp = head;
        while(temp != NULL) {
            insertAtTail(cloneHead, cloneTail, temp->data);
            temp = temp -> next;
        }
        
        // step 2: insert nodes of Clone List in between originalList
        
        Node* originalNode = head;
        Node* cloneNode = cloneHead;
        
        while(originalNode != NULL && cloneNode != NULL) {
            Node* next = originalNode -> next;
            originalNode -> next = cloneNode;
            originalNode = next;
            
            next = cloneNode -> next;
            cloneNode -> next = originalNode;
            cloneNode  = next;
        }
        
        // step 3: Random pointer copy
        originalNode = head;
        cloneNode = cloneHead;
        
        while(originalNode != NULL && cloneNode != NULL) { 
            
            if(originalNode -> arb != NULL) {
                cloneNode -> arb = originalNode -> arb -> next;
            }
            else
            {
                cloneNode -> arb  = NULL;
            }
            
            cloneNode = cloneNode -> next;
            originalNode = originalNode -> next;
        }
        
        //step 4: revert step 2 changes
        Node* original = head;
        Node* copy = cloneHead;
        
         while (original && copy)
            {
                original->next =
                 original->next? original->next->next : original->next;
         
                copy->next = copy->next?copy->next->next:copy->next;
                original = original->next;
                copy = copy->next;
            }

        // step 5 answer return
        return cloneHead;
    }
};


// class Node {
//     public:
//     int data;
//     Node* next;
//     Node* random;

//     Node(int d){
//         this->data = d;
//         this->next = NULL;
//         this->random = NULL;
//     }
// };

// void insertAtTail(Node* &head, Node* &tail, int data) {
//     Node* temp = new Node(data);
//     if(head == NULL){
//         head = temp;
//         tail = temp;
//         return ;
//     }
//     else{
//         tail->next = temp;
//         tail = temp;
//     }
// }
// Node* copyList(Node* head) {
//     Node* cloneHead = NULL;
//     Node* cloneTail = NULL;
//     Node* temp = head;
//     while(temp != NULL){
//         insertAtTail(cloneHead,cloneTail, temp->data);
//         temp = temp->next;
//     }

//     unordered_map<Node*,Node*> mapping;
//     Node* originalNode = NULL;
//     Node* cloneNode = NULL;

//     while(originalNode != NULL){
//         mapping[originalNode] = cloneNode;
//         originalNode = originalNode->next;
//         cloneNode = cloneNode->next;
//     }

//     originalNode = head;
//     cloneNode = cloneHead;

//     while(originalNode != NULL){
//         cloneNode->random = mapping[originalNode->random];
//         originalNode = originalNode->next;
//         cloneNode = cloneNode->next;
//     }
//     return cloneHead;
// }