#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool canReach(vector<int>& arr, int start) {
    queue<int> q;
    q.push(start);
    while(!q.empty()){
        int curr = q.front();
        q.pop();
        if(arr[curr] == 0)
        return true;

        if(arr[curr]<0)  //for already visited
        continue;

        if(curr + arr[curr] < arr.size())
        q.push(curr + arr[curr]);
        if(curr-arr[curr] >= 0)
        q.push(curr-arr[curr]);

        arr[curr] = -arr[curr]; // marking as read
    }        
    return false;
}
int main(){
    vector<int> arr = {4,2,3,0,3,1,2};
    bool ans = canReach(arr,5);
    cout<<ans;
    return 0;
}