#include<iostream>
#include<vector>
#include<algorithm>
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
        vector<int> temp;
        int tempDigit=digits[digits.size()-1]+1;
        int index=1;
        while(tempDigit!=0){
            temp.push_back(tempDigit%10);
            index++;
            tempDigit/=10;
            if(digits[digits.size()-index]+tempDigit>=10){
                tempDigit+=digits[digits.size()-index];
            }
            
        }
        for(int i=digits.size()-index;i>=0;i--){
            temp.push_back(digits[i]);
        }
        reverse(temp.begin(),temp.end());
        return temp;
    }

int main(){
    vector<int> arr;
    arr.push_back(9);
    arr.push_back(9);

    vector<int> ans=plusOne1(arr);
    for(int i:ans)
    cout<<i;
    return 0;
}