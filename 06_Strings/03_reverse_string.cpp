#include<iostream>
using namespace std;

int length(char ch[]){
    int len=0;
    int i=0;
    for(char val=ch[i];ch[i]!='\0';i++){
        len++;
    }
    return len;
}

void reverseString(char ch[]){
    int start=0,end=length(ch)-1;
    while(start<end){
        swap(ch[start++],ch[end--]);
    }
}

int main(){
    char name[20];
    cout<<"Enter your name :"<<endl;
    cin>>name;
    reverseString(name);
    cout<<"Reverse is : "<<name<<endl;
    return 0;
}