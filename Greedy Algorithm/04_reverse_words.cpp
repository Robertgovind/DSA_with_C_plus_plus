#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string reverseWords(string s){
    string ans="";
    string temp = "";
    for(int i =s.length()-1;i>=0;i--){
        if(s[i] == '.'){
            reverse(temp.begin(),temp.end());
            ans+=temp;
            ans.push_back('.');
            temp="";
        }
        else{
            temp+=s[i];
        }
    }
    reverse(temp.begin(),temp.end());
    ans+=temp;
    return ans;
}