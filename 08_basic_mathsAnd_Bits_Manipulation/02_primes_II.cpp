//shieve of Erathosthenes 
#include<iostream>
#include<vector>
using namespace std;

int countPrimes(int n){
    int count=0;
    vector<bool> primes(n+1,true);
    primes[0]=primes[1]=false;
    for(int i=2;i<n;i++){
        if(primes[i]){
            count++;  //mark primes

            for(int j=2*i;j<n;j+=i){
                primes[j]=false;
            }
        }
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    cout<<"No of primes :"<<countPrimes(n)<<endl;
    return 0;
}