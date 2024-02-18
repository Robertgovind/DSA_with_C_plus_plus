 #include<iostream>
 #include<bits/stdc++.h>
 using namespace std;
vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    vector<vector<int>> result;
     for (int i = 0; i < nums.size(); i++) {
        if (i > 0 && nums[i] == nums[i - 1])//for unique triplets
            continue;

        int low = i + 1, high = nums.size() - 1;

        while (low < high) {
            int sum = nums[i] + nums[low] + nums[high];
            if (sum == 0) {
                result.push_back({nums[i], nums[low], nums[high]});
                while (low < high && nums[low] == nums[low + 1]) 
                    low++;
                while (low < high && nums[high] == nums[high - 1])
                    high--;
                low++;
                high--;
            } else if (sum < 0) {
                low++;
            } else {
                high--;
            }
        }
    }

    return result;
    }

 int main(){
     string str = "govind";
    // cout<<str<<endl;
    // str.append("a");
    // cout<<str<<endl;
    // str.insert(3,"and");
    // cout<<str<<endl;
    // string a = "abc",b = "def";
    // int s = str.find("and");
    // string temp = str.substr(s,3);
    // cout<<temp<<endl;
    // char arr[10]= "govind";
    // strrev(arr);
    // cout<<arr<<endl;
    str = "santosh";
    cout<<str<<endl;
    //reverse();
    cout<<str.find("n")<<endl;
    cout<<str<<endl;
    return 0;
 }