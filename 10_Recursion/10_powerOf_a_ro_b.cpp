#include<iostream>
using namespace std;

int powerOfaTob(int a,int b){
    if(b==0)
    return 1;
    if(b==1)
    return a;

    if(b&1)
    return a*powerOfaTob(a,b/2)*powerOfaTob(a,b/2);
    else
    return powerOfaTob(a,b/2)*powerOfaTob(a,b/2);
}
int main(){
    cout<<powerOfaTob(3,3);
    return 0;
}