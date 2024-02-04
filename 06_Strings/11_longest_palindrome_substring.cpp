#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string longestPalindrome(string s) {
        if(s.length() <= 1)
        return s;

    string LPS = "";

    for(int i=1;i<s.length();i++){
        int low = i, high = i;
        while(s.at(low) == s.at(high)){
            low--;  // for odd palindrome
            high++;

            if(low == -1 || high == s.length()){
                break;
            }
        }
        string palindrome = s.substr(low+1, (high-1)-(low+1)+1);
        if(palindrome.length()>LPS.length()){
            LPS = palindrome;
        }
        low = i - 1;
        high = i;
        while (s.at(low) == s.at(high))
        {
            low--;
            high++;
            if(low == -1 || high == s.length()){
                break;
            }
        }
        palindrome = s.substr(low+1, (high-1)-(low+1)+1);
        if(palindrome.length()>LPS.length()){
            LPS = palindrome;
        }
    }
    return LPS;
    }