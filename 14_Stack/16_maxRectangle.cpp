#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> nextSmaller(vector<int> arr, int n){
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    for(int i=n-1;i>=0;i--){
        int curr = arr[i];
        while(s.top() != -1 && arr[s.top()]>=curr){
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}


vector<int> prevSmaller(vector<int> arr, int n){
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        int curr = arr[i];
        while(s.top() != -1 && arr[s.top()]>=curr){
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

int LargestRectangularArea(vector<int> &heights,int n){
    int n = heights.size();
    vector<int> next(n);
    next = nextSmaller(heights,n);

    vector<int> prev(n);
    prev = prevSmaller(heights,n);

    int area = INT8_MIN;
    for(int i=0;i<n;i++){
        int l =heights[i];
        if(next[i] == -1){
            next[i] = n;
        }
        int b = next[i]-prev[i]-1;
        int newArea=l*b;
        area = max(area,newArea);
    }
    return area;

}
int maxArea(vector<vector<int>> M, int n, int m){
    int area = LargestRectangularArea(M[0], m);

    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            if(M[i][j] != 0){
                M[i][j] = M[i][j] + M[i-1][j];
            }
            else{
                M[i][j]=0;
            }
        }
        area = max(area,LargestRectangularArea(M[i],m));
    }
    return area;
}