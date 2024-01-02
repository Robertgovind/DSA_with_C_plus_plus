#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

 string restoreString(string s, vector<int>& indices) {
        for(int i=0;i<indices.size()-1;i++){
            int minIndex=i;
            for(int j=i+1;j<indices.size();j++){
                if(indices[minIndex]>indices[j]){
                    minIndex=j;
                }
            }
            swap(indices[minIndex],indices[i]);
            swap(s[minIndex],s[i]);
        }
        return s;
    }

   string restoreString1(string s, vector<int>& indices) {
        string temp;
        for(int i=0;i<indices.size();i++){
            int index=indices[i];
            temp[index]=s[i];
        }
        s=temp;
        return s;
    }

int main(){
    string str="codeleet";
    vector<int> indices={4,5,6,7,0,2,1,3};
    cout<<restoreString1(str,indices);
    return 0;
}