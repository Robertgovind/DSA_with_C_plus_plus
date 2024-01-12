#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height) {
    int s=0,e=height.size()-1;
    int maxArea=0,currentArea;
    while(s<e){
        currentArea=(e-s)*(min(height[s],height[e]));
        if(currentArea>maxArea)
        maxArea=currentArea;

        if(height[s]<height[e])
        s++;
        else
        e--;
    }
    return maxArea;
}

int main(){
    vector<int> heights={1,8,6,2,5,4,8,3,7};
    cout<<maxArea(heights);
    return 0;
}
