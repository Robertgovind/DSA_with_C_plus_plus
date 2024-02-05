#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//THIS WORKS PERFECTLY
vector<int> test(int n){
    vector<int> testCases;
    testCases.push_back(0);
    for(int i=0;i<100;i++){
        int temp = 0;
        while(n != 0){
        int dig = n%10;
        temp += dig*dig;
        n/=10;
        }
        n=temp;
        for(int i=0;i<testCases.size();i++){
        if(testCases[i] == temp){
            n=0;
            break;
        }   
    }
    if(n == 0)
    break;
    testCases.push_back(temp);
    }
    return testCases;
}
bool happyNumber(int n){
    vector<int> tests = test(n);
    for(int i=0;i<tests.size();i++){
        if(tests[i] == 1){
            return true;
        }
    }
    return false;
}

int main(){
    cout<<"Happy number : "<<endl;
    cout<<happyNumber(19)<<endl;
    return 0;
}