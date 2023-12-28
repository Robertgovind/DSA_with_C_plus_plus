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
    int x,occurence;
    cout<<"Enter occurence key : ";
    cin>>x;

    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            occurence=i;
        }
    }
    cout<<"Occurence : "<<occurence<<endl;

    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            occurence=i;
            break;
        }
    }
    cout<<"Occurence : "<<occurence<<endl;
}