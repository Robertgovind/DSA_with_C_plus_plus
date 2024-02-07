#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int>id;
    vector<int>time;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        id.push_back(k);
    }
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        time.push_back(k);
    }

    map<int,int> ans;
    for(int i=0;i<n;i++){
        ans[id[i]]+=time[i];
    }
    int k=ans.size();
    for(int i=0;i<k;i++){
        int ele = ans.at(i);
    }

    return 0;
}
// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;


// int main() { 
//     string str;
//     cin>>str;
//     vector<int> c(26,0);

//     int rep = INTMAX_MAX;
//     for(int i =0;i<str.length();i++){
//         c[str[i]-'a']++;
//     }
//     for(int i=0;i<26;i++){
//         if(c[i] != 0){
//             rep = min(rep,c[i]);
//         }
//     }
//     for(int i=0;i<str.length()-1;i++){
//         char e = str[i];
//         int count=1;
//         for(int j=i+1;j<str.length();j++){
//             if(str[j] == e){
//                 if(count<=rep){

//                 }
//                 else{
//                     str[j] = '@';
//                 }
//                 count++;
//             }
//         }
//     }
//     for(int i =0;i<str.length();i++){
//         if(str[i] != '@')
//         cout<<str[i];
//     }



//     return 0;
// }
// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;

// void ans(vector<string> str, int n){
//     int prev =0;
//     int curr;
//     string prevStr=str[0];
//     string ans= str[0];
//     int count = 1,maxCount = -1;
//     for(int i=1;i<n;i++){
//         curr = i;
//         if((prevStr.compare(str[i])) == 0){
//             count++;
//             maxCount = max(maxCount,count);
//             ans = str[i];
//         }
//         else{
//             prev = i;
//             prevStr = str[i];
//             count=1;
//         }
//     }
//     cout<<ans<<endl;
//     cout<<count<<endl;
// }
// int main(){   
//     int n;
//     cin>>n;
//     vector<string> teams;
//     for(int i=0;i<n;i++){
//         string t;
//         cin>>t;
//         teams.push_back(t);
//     }
//     return 0;
// }

// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int findIndex(char arr[],int n,char k){
//     char t = arr[k];
//     for(int i=0;i<n;i++){
//         if(i != k){
//             if(arr[i] == arr[k])
//             return i;
//         }
//     }
//     return -1;
// }
// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
//     int n;
//     cin>>n;
//     char movies[n];
//     for(int i=0;i<n;i++){
//         cin>>movies[i];
//     }
//     int target;
//     cin>>target;

//     cout<<findIndex(movies,n,target);
//     return 0;
// }
