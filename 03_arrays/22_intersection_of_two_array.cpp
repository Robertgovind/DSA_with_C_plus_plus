#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> intersection(vector<int> &v1,vector<int> &v2){
    int n=v1.size(),m=v2.size();
    vector<int> ans;
    int i=0,j=0;
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    int prev=-1;
    while (i<n&&j<m)    
    {
        if(v1[i]==v2[j]){
            if(prev==v1[i]){
                i++;
                j++;
                continue;
            }
            prev=v1[i];
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
    v1.push_back(9);
    v1.push_back(4);
    v1.push_back(9);
    v1.push_back(8);
    v1.push_back(4);

    vector<int> v2;
    v2.push_back(4);
    v2.push_back(9);
    v2.push_back(5);
    //v2.push_back(7);
    
    vector<int> ans=intersection(v1,v2);
    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
}