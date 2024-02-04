#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Item{
    public:
    int value;
    int weight;
    Item(int v, int w){
        value = v;
        weight = w;
    }
};

bool cmp(pair<double,Item> a, pair<double,Item> b){
    return a.first > b.first;
}

double fractionalKanapsack(int W, Item arr[], int n){
    vector<pair<double, Item>> v;
    for(int i=0;i<n;i++){
        double perUnitValue = (1.0*arr[i].value)/arr[i].weight;
        pair<double, Item> p = make_pair(perUnitValue, arr[i]);
        v.push_back(p);
    }
    sort(v.begin(),v.end(),cmp);
    double totalValue = 0;
    for(int i=0;i<n;i++){
        if(v[i].second.weight > W){
            totalValue += W*v[i].second.value;
            W=0;
        }
        else{
            totalValue += v[i].second.value;
            W = W - v[i].second.weight;
        }
    }
    return totalValue;
}
