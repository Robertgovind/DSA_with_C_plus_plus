#include<iostream>
#include<string>
#include<vector>
using namespace std;

char toLower(char ch){
        if(ch>='A'&&ch<='Z'){
            return (ch-'A'+'a');
        }
        else{
            return ch;
        }
    }

 bool isValid(string str){
        string row1="qwertyuiop";
        string row2="asdfghjkl";
        string row3="zxcvbnm";

        bool valid=false;
        //for first row
        for(int i=0;i<str.length();i++){
           char testChar=toLower(str[i]);
           int index=row1.find(testChar);
           if(index>=0&&index<row1.size())
           valid=true;
           else
           {
            valid=false;
            break; 
           }
            if(i==str.length()-1)
           return valid;
           
        }
        //for second row
        for(int i=0;i<str.length();i++){
           char testChar=toLower(str[i]);
           int index=row2.find(testChar);
           if(index>=0&&index<row2.size())
           valid=true;
           else
           {
            valid=false;
            break;
           }
           if(i==str.length()-1)
           return valid;
            
        }
        //for third row
         for(int i=0;i<str.length();i++){
           char testChar=toLower(str[i]);
           int index=row3.find(testChar);
           if(index>=0&&index<row3.size())
           valid=true;
           else{
            valid=false;
            break;
           }
            if(i==str.length()-1)
           return valid;
        }
        return valid;
    }
    
    vector<string> findWords(vector<string>& words) {
      vector<string> temp;
      for(int i=0;i<words.size();i++){
        if(isValid(words[i]))
        temp.push_back(words[i]);
      }
      return temp;
    }


int main(){
     vector<string>  words = {"Hello","Alaska","Dad","Peace"};
     vector<string> ans=findWords(words);
     for(string s:ans){
        cout<<s<<" "<<endl;
       }

    return 0;
}