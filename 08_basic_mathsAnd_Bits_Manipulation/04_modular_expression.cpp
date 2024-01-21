#include<iostream>
using namespace std;

int power(int a,int b){
    int ans=1;
    while(b>0){
        if(b&1){
            ans=ans*a;
        }
        ans=a*a;
        b>>1;
    }
    return ans;
}
int main(){
    cout<<power(2,2);
    return 0;
}