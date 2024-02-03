#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long findMinDiff(vector<long long> a, long long m, long long n){
    int i = 0;
    int j = m-1;
    int mindiff = INT_MAX;
    while(j<a.size()){
        int temp = a[j++]-a[i++];
        mindiff = min(mindiff,temp);
    }
    return mindiff;
}