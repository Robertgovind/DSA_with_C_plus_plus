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
int main(){
    char name[20];
    cout<<"Enter your name :"<<endl;
    cin>>name;
    cout<<"Length of string is :"<<length(name)<<endl;
    return 0;
}