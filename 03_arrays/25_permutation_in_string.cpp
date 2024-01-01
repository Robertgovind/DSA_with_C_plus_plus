#include<iostream>
using namespace std;

 bool isEqual(int c1[26],int c2[26]){
        for(int i=0;i<26;i++){
            if(c1[i]!=c2[i])
            return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int count1[26]={0};
        for(int i=0;i<s1.length();i++){
            int index=s1[i]-'a';
            count1[index]++;
        }
        int i=0;
        int windowSize=s1.length();
        int count2[26]={0};
        while(i<windowSize&&i<s2.length()){
            int index=s2[i]-'a';
            count2[index]++;
            i++;
        }
        if(isEqual(count1,count2))
        return true;

        while(i<s2.length()){
            count2[s2[i]-'a']++;
            count2[s2[i-windowSize]-'a']--;
            i++;
            if(isEqual(count1,count2))
            return true;
        }
        return false;

    }

int main(){
    string s1="ac";
    string s2="gdrdfdfcga";
    cout<<checkInclusion(s1,s2)<<endl;
    return 0;
}