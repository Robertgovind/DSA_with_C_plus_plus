#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int lastStoneWeight(vector<int>& stones) {
    if(stones.size() == 1)
    return stones[0];

    priority_queue<int,vector<int>> p;

    for(int i=0;i<stones.size();i++){
        p.push(stones[i]);
    }    

    while(p.size()>1){
        int x = p.top();
        p.pop();
        int y = p.top();
        p.pop();
        if(x!=y){
            int sum = x-y;
            p.push(sum);
        }
    }
    if(p.empty())
    return 0;

    int ans = p.top();
    return ans;
}
int main(){
    vector<int> stone = {2,7,4,1,8,1};
    int st = lastStoneWeight(stone);
    return 0;
}