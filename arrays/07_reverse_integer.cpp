#include<iostream>
using namespace std;

int reverseInteger(int x){
    int ans=0;
    while(x!=0){
        int digit=x%10;
        if(ans>INT32_MAX/10||ans<INT32_MIN/10){
            return 0;
        }
        ans=ans*10+digit;
        x/=10;
    }
    return ans;
}

int main(){
    int number = 123456789;
    int ans=reverseInteger(number);
    cout<<"The reversed number is : "<<ans<<endl;
    
}