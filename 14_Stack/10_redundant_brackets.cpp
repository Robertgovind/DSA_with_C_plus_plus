#include<iostream>
#include<stack>
using namespace std;

bool findRedundant(string str){
    stack<char> st;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        if(ch=='(' || ch=='+' || ch=='-' || ch=='*' || ch=='/'){
            st.push(ch);
        }
        else{
            if(ch==')'){
                bool isRedundant = true;
                while(st.top() != '('){
                    char top = st.top();
                    if(top=='+' || top=='-' || top=='*' || top=='/'){
                        isRedundant=false;
                    }
                    st.pop();
                }
                if(isRedundant)
                return true;

                st.pop();
            }
        }
    }
    return false;
}