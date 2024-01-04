#include<iostream>
#include<vector>
using namespace std;

 int romanToInt(string s) {
        int ans=0;
        int index=0;
        while(index<s.length()){
            //dealing with I
            if(s[index]=='I' && index<s.length()){
                ans-=1;
                index++;
                if(s[index]=='V' && index<s.length()){
                    ans+=5;
                    index++;
                }
                else if(s[index]=='X' && index<s.length()){
                    ans+=10;
                    index++;
                }
                else{
                    ans+=2;
                }
            }
            else if(s[index]=='X' && index<s.length()){
                 ans-=10;
                index++;
                if(s[index]=='L'&& index<s.length()){
                    ans+=50;
                    index++;
                }
                else if(s[index]=='C' && index<s.length()){
                    ans+=100;
                    index++;
                }
                else{
                    ans+=20;
                }
            }
            else if(s[index]=='C' && index<s.length()){
                 ans-=100;
                index++;
                if(s[index]=='D' && index<s.length()){
                    ans+=500;
                    index++;
                }
                else if(s[index]=='M' && index<s.length()){
                    ans+=1000;
                    index++;
                }
                else{
                    ans+=200;
                }
            }
             if(s[index]=='V' && index<s.length()){
                    ans+=5;
                    index++;
                }
                 if(s[index]=='L'&& index<s.length()){
                    ans+=50;
                    index++;
                }
                 if(s[index]=='D' && index<s.length()){
                    ans+=500;
                    index++;
                }
                else if(s[index]=='M' && index<s.length()){
                    ans+=1000;
                    index++;
                }
            //index++;
        }
        return ans;
    }

int main(){
    string str="MCMXCIV";
    cout<<romanToInt(str);
    return 0;
}