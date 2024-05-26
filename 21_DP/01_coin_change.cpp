#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// Greedy do not work
 int coinChange1(vector<int>& coins, int amount) {
        int coinCount = 0;
    sort(coins.begin(),coins.end());

    int s = coins.size()-1;
    while(s>=0){
        if(coins[s]>amount){
            if(amount == 0)
            break;

            s--;
        }
        else{
            coinCount++;
            amount -= coins[s];
        }
    }  
    if(amount >0){
        return -1;
    }
    return coinCount;
}
//THIS WORKS
int coinChange(vector<int>& coins, int amount){
if (amount < 1) 
    return 0;

    int minCoinsDP[amount+1];
    minCoinsDP[0] = 0;
    for (int i = 1; i <= amount; i++) {
      minCoinsDP[i] = INT_MAX;
      for (int coin : coins) {
        if (coin <= i && minCoinsDP[i - coin] != INT_MAX)
          minCoinsDP[i] = min(minCoinsDP[i], 1 + minCoinsDP[i - coin]);
      }
    }

    return minCoinsDP[amount] == INT_MAX ? -1 : minCoinsDP[amount];

    return minCoinsDP[amount];
}