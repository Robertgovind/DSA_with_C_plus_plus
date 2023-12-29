#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;


  //This gives Time Limit Error
  vector<int> plusOne(vector<int>& digits) {
        vector<int> temp;
     long long int num=0;
        for(int i=0;i<digits.size();i++){
            num=num*10+digits[i];
        }
        num++;
        while(num!=0){
            int d=num%10;
            temp.push_back(d);
            num/=10;
        }
        reverse(temp.begin(),temp.end());
        return temp;
    }
    //Error in case of 99
     vector<int> plusOne1(vector<int>& digits) {
         int temp,i=digits.size()-1;
        vector<int> v;
        do{
            temp=digits[i]+1;
            v.push_back((temp%10));
            temp/=10;
            if(temp==0){
                break;
            }
            temp+=digits[i];
        }while(temp!=0);
        while(i>=0){
            v.push_back(digits[i--]);
        }
        reverse(v.begin(),v.end());
    }

int main(){
    vector<int> arr;
    arr.push_back(9);
    arr.push_back(9);

    
    //vector<int> ans=plusOne1(arr);
    for(int i:arr)
    cout<<i;
    return 0;
}