#include<iostream>
#include<stack>
using namespace std;

class SpecialStack{
    private:
    stack<int> s;
    int mini = INT8_MAX;

    public:
    void push(int data) {
        if(s.empty()){
            s.push(data);
            mini = data;
        }
        else{
            if(data<mini){
                s.push(2*data - mini);
                mini = data;
            }
            else{
                s.push(data);
            }
        }
    }
    int pop(){
        if(s.empty()){
            return -1;
        }
        int curr = s.top();
        s.pop();
        if(curr>mini){
            return curr;    
        }
        else{
            int prev = mini;
            int val = 2*mini - curr;
            mini = val;
            return prev;
        }
    }
    int top(){
        if(s.top()){
            return -1;
        }
        int curr = s.top();
        if(curr<mini){
            return mini;
        }
        else{
            return curr;
        }
    }

    bool isEmpty(){
        return s.empty();
    }
};