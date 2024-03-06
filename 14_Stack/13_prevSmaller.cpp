#include<iostream>
#include<stack>
#include<vector>

using namespace std;

vector<int> nextSmallerElement(vector<int> &arr,int n){
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        int curr = arr[i];
        while(s.top()>= curr){
            s.pop();
        }
        ans[i] = s.top();
        s.push(curr);
    }
    return ans;
}