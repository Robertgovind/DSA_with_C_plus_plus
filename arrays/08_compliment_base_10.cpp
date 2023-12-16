#include<iostream>
using namespace std;

int complimentBaseTen(int number){
     int ans;
     int x=number,maskDigit=0;
    if(number==0){
        return 0;
    }
    while(x!=0) {
        maskDigit=(maskDigit<<1)|1;
        x=x>>1;
    }
    ans=(~number)&maskDigit;
    return ans;
}
int main(){
    int number=5;
    cout<<"Compliment of 5 is : "<<complimentBaseTen(number);
   
}