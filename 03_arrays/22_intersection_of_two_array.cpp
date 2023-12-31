#include<iostream>
#include<vector>
using namespace std;

vector<int> intersection(vector<int> &v1,vector<int> &v2){
    int n=v1.size(),m=v2.size();
    vector<int> ans;
    int i=0,j=0;
    int prev;
    while (i<n&&j<m)    
    {
        if(v1[i]==v2[j]){
            ans.push_back(v1[i++]);
            j++;
        }
        else if(v1[i]<v2[j])
        i++;
        else if(v1[i]>v2[j])
        j++;
    }
    return ans;
    
}

int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(2);
    v1.push_back(1);
    //v1.push_back(6);

    vector<int> v2;
    v2.push_back(2);
    v2.push_back(2);
    //v2.push_back(6);
    //v2.push_back(7);
    
    vector<int> ans=intersection(v1,v2);
    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
}