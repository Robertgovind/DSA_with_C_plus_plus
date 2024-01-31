#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int kthSmallest(vector<vector<int>>& matrix, int k) {
       priority_queue<int,vector<int>,greater<int>> min;
       for(int i=0;i<matrix.size();i++){
           for(int j=0;j<matrix[0].size();j++){
               min.push(matrix[i][j]);
           }
       }
       int ans;
        for(int i=0;i<k;i++){
            ans=min.top();
            min.pop();
        }
        return ans;
    }