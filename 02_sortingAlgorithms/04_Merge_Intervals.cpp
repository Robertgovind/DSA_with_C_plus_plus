#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
    vector<vector<int>> output;
    vector<int> temp(2,0);
    if(intervals.size() == 1){
        output = intervals;
        return output;
    }
    
    int first=intervals[0][0];
    int second=intervals[0][1];
    temp[0]=first;
    for(int i=1;i<intervals.size();i++){
        if(intervals[i][0]<=second){
            second = intervals[i][1];
        }
        else{
            temp[1]=second;
            output.push_back(temp);
            temp={0,0};
            first = intervals[i][0];
            temp[0]=first;
            second = intervals[i][1];
        }
    }
    temp[1]=second;
    output.push_back(temp);
    return output;
}

int main(){
    return 0;
}