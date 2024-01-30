#include<iostream>
#include<bits/stdc++.h>
using namespace std;

  int maxProfit(vector<int>& prices) {
    if(prices.size() == 1)
    return 0;

    vector<int> profit(prices.size(),0);
    int b=prices[0];
    profit[0]=0;
    for(int i=1;i<prices.size();i++){
        profit[i]=(b<prices[i])?prices[i]-b : 0;
        b=prices[i];
    }
    int maxProfit = 0;
    for(int i=0;i<profit.size();i++)
    maxProfit+=profit[i];

    return maxProfit;
}