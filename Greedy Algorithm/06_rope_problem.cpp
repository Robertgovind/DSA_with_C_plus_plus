#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long minCost(long long arr[], int n) {
    priority_queue<long long, vector<long long>, greater<long long>> p;
    for(int i = 0; i < n;i++){
        p.push(arr[i]);
    }
    int ans = 0;
    while(p.size()>1){
        long long first = p.top();
        p.pop();
        long long second = p.top();
        p.pop();
        long long mergedLength = first + second;
        ans +=mergedLength;
        p.push(mergedLength);
    }
    return ans;
}