#include<iostream>
#include<bits/stdc++.h>
using namespace std;


string longestCommonPrefix(vector<string>& strs) {
    sort(strs.begin(),strs.end());
    string ans = "";
    string first = strs[0],second = strs[strs.size()-1];
    for(int i=0;i<first.length();i++){
        if(first[i] != second[i])
        break;

        ans+=first[i];
    }        
    return ans;
}