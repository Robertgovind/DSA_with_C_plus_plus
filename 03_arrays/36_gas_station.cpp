//array, greedy
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//DO NOT WORK IN SONME TEST CASES
int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    if(gas.size() == 1){
        return 0;
    }
    int tank,start;
    bool found ;
    for(int i=0;i<gas.size();i++){
        tank = gas[i];
        start=i;
        found = false;
        for(int j=1;j<=gas.size();j++){
            tank = tank + gas[(i+j)%gas.size()]-cost[i];
            if(tank>=cost[(i+j)%gas.size()]){
                found = true;
            }
            else{
                found = false;
                break;
            }
        }
        if(found == true){
                return start;
            }
    }
    return -1;
}
int Sum(vector<int> array){
    int sum=0;
    for(int i=0;i<array.size();i++){
        sum+=array[i];
    }
    return sum;
}
int canCompleteCircuit(vector<int>& gas, vector<int>& cost){
    if(Sum(gas)<Sum(gas))
    return -1;
    vector<int> data;
    for(int i=0;i<gas.size();i++){
        data.push_back(gas[i]-cost[i]);
    }
    int ans,total=0;
    for(int i=0;i<data.size();i++){
        total+=data[i];
        if(total<0){
            total=0;
            ans=i+1;
        }
    }
    return ans;
}
