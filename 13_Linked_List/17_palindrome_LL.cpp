#include<iostream>
#include<vector>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
};
//OPTIMIZED APPROACH
Node* getMid(Node* head){
    Node* slow = head;
    Node* fast = head->next;

    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow=slow->next;
    }
    return slow;
}

Node* reverse(Node* head){
    Node* curr = head;
    Node* next = NULL;
    Node* prev = NULL;
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return head;
}

bool isPalindrome(Node* head){
    if(head->next == NULL)
    return true;

    Node* middle = getMid(head);
    
    Node* temp = middle->next;
    middle->next = reverse(temp);
    
    Node* head1 = head;
    Node* head2 = middle->next;
    while( head2 != NULL){
        if(head1->data != head2->data){
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }

    //Recorrect the given linked list
    temp = middle->next;
    middle->next = reverse(temp);

    return true;
}

//LESS OPTIMIZED APPROACH
bool check(vector<int> arr){
    int n = arr.size();
    int start = 0, end = n-1;
    while(start<=end){
        if(arr[start++] != arr[end--])
        return false;
    }
    return true;
}  
bool isPal(Node* head){
    Node* temp = head;
    vector<int> test;
    while(temp != NULL){
        test.push_back(temp->data);
        temp = temp->next;
    }

    return check(temp);
}