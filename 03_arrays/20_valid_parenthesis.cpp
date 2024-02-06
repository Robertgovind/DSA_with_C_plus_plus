#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool validParenthesis(string str){
   stack<char> st;
   for(int i=0;i<str.length();i++){
    if(str[i] == '(')
    st.push(')');
    else if(str[i] == '{')
    st.push('}');
    else if(str[i] == '[')
    st.push(']');
    else{
        if(st.empty() || str[i] != st.top())
        return false;

        st.pop();
    }
   }
   if(!st.empty())
   return false;
   
   return true;
}

int main(){
    string str;
    cout<<"Enter a string :"<<endl;
    //cin>>str;
    cout<<"Validation :"<<(0^'('^'{'^')'^'}')<<endl;
    return 0;
}