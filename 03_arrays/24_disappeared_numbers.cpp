#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> findDisappearedNumbers(vector<int> &arr,int n){
    vector<int> counter(8,0);
    vector<int> temp;
   
    cout<<endl;
    for(int i=0;i<n;i++){
        counter[arr[i]-1]++;
    }
     for(int i=0;i<n;i++){
        if(counter[i]==0)
        temp.push_back(i+1);
    }
    return temp;
}

int main(){
    vector<int> arr={4,3,2,7,8,2,3,1};
    vector<int> ans=findDisappearedNumbers(arr,8);
    for(int i:ans){
        cout<<i<<" ";
    }

}