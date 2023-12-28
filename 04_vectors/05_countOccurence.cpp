#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    for(int i=0;i<5;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    int occurenceCount=0,x;
    cout<<"Enter element : ";
    cin>>x;

    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            occurenceCount++;
        }
    }
    cout<<"Occurence count : "<<occurenceCount;
}