#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<string>> groupAnagrams(vector<string>& strs){
    map<string,vector<string>> result;
    string newstr;
    for(int i=0;i<strs.size();i++){
        newstr=strs[i];
        sort(newstr.begin(),newstr.end());
        result[newstr].push_back(strs[i]);
    } 
    vector<vector<string>> temp;
    for(auto i:result){
        temp.push_back(i.second);
    } 
    return temp;
}