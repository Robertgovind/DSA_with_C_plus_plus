#include<iostream>
using namespace std;

bool checkPowerOfFour(int n){
    while(n!=0){
        if(n==1)
        return true;
        if((n%4)!=0)
        return false;

        n=n>>2;
    }
    return true;
}

int main(){
    cout<<checkPowerOfFour(0);
    
    return 0;
}