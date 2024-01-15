#include<iostream>
using namespace std;

void reverseString(string &str,int s,int e){
    if(s>e){
        return ;
    }
    swap(str[s++],str[e--]);
    reverseString(str,s,e);
}

int main(){
    string str="govind";
    reverseString(str,0,str.length()-1);
    cout<<str<<endl;
    return 0;
}
