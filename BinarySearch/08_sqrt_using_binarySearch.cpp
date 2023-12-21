#include<iostream>
using namespace std;

// long long int is used for overflow condition
long long int integerSquareRoot(int n){
    int ans;
    int start=0,end=n;
    int mid=start+(end-start)/2;
    while(start<=end){
        long long int square=mid*mid;
        if(square==n){
            return mid;
        }
        else if(square<n){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

double doubleSquareRoot(int n,int intPart,int precision){
    double mask=1;
    double ans=intPart;
    for(int i=0;i<precision;i++){
        mask=mask/10;
        for(double j=ans;j*j<n;j=j+mask){
            ans=j;
        }
    }
    return ans;
}
int main(){
    int num;
    cin>>num;
    int intpart=integerSquareRoot(num);
    cout<<"Square root is :"<<doubleSquareRoot(num,intpart,4)<<endl;
}