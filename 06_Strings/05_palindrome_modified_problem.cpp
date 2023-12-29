//Check palindrome by ignoring non alphanumeric characters
#include<iostream>
using namespace std;

//convert to lowercase
char toLower(char ch){
        if((ch>='a'&&ch<='z')||(ch>='0'&&ch<='9')){
            return ch;
        }
        else{
        return ch-'A'+'a';
        }
}

//check for valid character
bool isValid(char ch){
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9')){
        return true;
    }
    return false;
}

//returns the length of char array
int length(char ch[]){
    int i=0,len=0;
    for(char c=ch[i];c!='\0';i++){
        len++;
    }
    return len;
}

bool checkPalindrome(char ch[]){
    string str="";
    int i=0;
    while(ch[i]!='\0'){
        if(isValid(ch[i])){
            str.push_back(ch[i]);
        }
        i++;
    }
    
    //converting
    for(int i=0;i<str.length();i++){
        str[i]=toLower(str[i]);
    }
    
    int start=0,end=str.length()-1;
    while(start<end){
        if(str[start]!=str[end]){
            return false;
        }
        else{
            start++;
            end--;
        }
    }
    return true;
}

int main(){
    char word[20];
    cout<<"Enter a word :"<<endl;
    cin>>word;
    if(checkPalindrome(word))
    cout<<"Palindrome!!!"<<endl;
    else
    cout<<"Not Palindrome!!!"<<endl;
}