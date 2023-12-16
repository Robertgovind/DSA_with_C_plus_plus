#include<iostream>
#include<math.h>
using namespace std;

bool powerOfTen(int x){
    for(int i=0;i<31;i++){
        if(pow(2,i)==x){
            return true;
        }
    }
    return false;
}

int main(){
    int number;
    cin>>number;
    cout<<endl<<powerOfTen(number);
    return 0;
}