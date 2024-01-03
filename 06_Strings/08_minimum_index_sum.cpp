#include<iostream>
#include<string>
#include<vector>
using namespace std;

//Not solved
vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> temp;
        int prev=1234;
        for(int i=0;i<list1.size();i++){
            for(int j=0;j<list2.size();j++){
                if(list1[i]==list2[j]&&(i+j)<=prev){
                temp.push_back(list1[i]);
                prev=i+j;
                }
            }
        }
        return temp;
    }

int main(){
    vector<string> list1={"Shogun","Tapioca Express","Burger King","KFC"};
    vector<string> list2={"Piatti","Shogun","The Grill at Torrey Pines","Hungry Hunter Steakhouse","KFC"};
    //vector<string> list1={"aa","b","d"};
    //vector<string> list2={"e","aa","d","h"};
    vector<string> ans=findRestaurant(list1,list2);
    list1.erase(list1.begin()+0);
    for(string i:list1){
        cout<<i<<" "<<endl;;
    }
    return 0;
}