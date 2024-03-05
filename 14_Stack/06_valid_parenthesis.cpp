#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool isValidParenthesis(string str){
    stack<char> s;
    for(int i=0;i<str.length();i++){
        char ch = str[i];
        if(ch=='(' || ch=='{' || ch=='['){
            s.push(ch);
        }
        else{
            if(!s.empty()){
                char top = s.top();
                if((top=='(' && ch==')') ||
                (top=='{' && ch=='}') ||
                (top=='[' && ch==']')){
                    s.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
    }
    if(s.empty())
    return true;

    return false;
}