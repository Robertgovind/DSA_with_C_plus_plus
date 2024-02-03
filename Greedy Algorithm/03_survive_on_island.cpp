#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int minimumDays(int s, int m, int n){
    int sunday=s/7;
    int buyingDays=s-sunday;
    int totalFood = s*m;
    int ans = 0;
    if(totalFood%n == 0){
        ans=totalFood/n;
    }
    else{
        ans=(totalFood/n)+1;
    }
    if(ans<=buyingDays){
        return ans;
    }
    else{
        return -1;
    }
}