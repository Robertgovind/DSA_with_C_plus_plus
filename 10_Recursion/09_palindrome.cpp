#include<iostream>
using namespace std;

bool isPalindrome(string str,int s,int e){
    if(s>e){
        return true;
    }
    if(str[s++]!=str[e--])
    return false;

    isPalindrome(str,s,e);
}

int main(){
    string str="govind";
    cout<<isPalindrome(str,0,str.length()-1)<<endl;
    return 0;
}