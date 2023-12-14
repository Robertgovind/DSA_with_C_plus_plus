#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    
    v.push_back(5)  ;
    
    v.insert(v.begin()+2,5);
    for(int i=0;i<v.size();i++){
        cout<<v.data();
    }
    cout<<"Data";
}