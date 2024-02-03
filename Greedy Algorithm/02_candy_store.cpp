#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> candyStore(int candies[],int n, int k){
    sort(candies,candies+n);
    int min =0;
    int buy = 0;
    int free=n-1;
    while(buy<=free){
        min = min+candies[buy];
        buy++;
        free=free-k;
    }
    int max = 0;
    buy=n-1;
    free=0;
    while(free<=buy){
        max+=candies[buy];
        buy--;
        free = free+k;
    }
    vector<int> ans;
    ans.push_back(min);
    ans.push_back(max);
    return ans;
}