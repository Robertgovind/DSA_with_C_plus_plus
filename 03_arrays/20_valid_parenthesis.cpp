#include<iostream>
using namespace std;

bool validParenthesis(string str){
    int ans=0;
    for(int i=0;i<str.size();i++){
        if(str[i]==')')
        str[i]=')';
        else if(str[i]=='{')
        str[i]='}';
        else if(str[i]=='[')
        str[i]=']';

        ans=ans^str[i];
    }
    if(ans==0)
    return true;
    else
    return false;
}

int main(){
    string str;
    cout<<"Enter a string :"<<endl;
    //cin>>str;
    cout<<"Validation :"<<(0^'('^'{'^')'^'}')<<endl;
    return 0;
}