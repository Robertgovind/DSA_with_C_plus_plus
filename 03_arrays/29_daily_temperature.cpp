#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> dailyTemperatures(vector<int>& temperatures) {
    if(temperatures.size()==1) {
        temperatures[0]=0;
        return temperatures;
    }
    int c=0,w=1,index=0;
    while(w<temperatures.size()-1){
        if(c==w)
        w++;

        if(temperatures[c]<temperatures[w]){
            temperatures[index]=w-c;
            c++;
            w=c;
            index++;
        }
        else{
            w++;
        }
    }
    while (index<temperatures.size())
    {
        temperatures[index++]=0;
    }
    return temperatures; 
}

int main(){
    vector<int> tmp={73,74,75,71,69,72,76,73};
    vector<int> temp={30,40,50,60};
    vector<int> ans=dailyTemperatures(tmp);
    
        for(int j:ans){
            cout<<j<<" ";
        }
}