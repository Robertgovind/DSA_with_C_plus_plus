#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vct;

    //Adding data
    for (int i = 0; i < 5; i++) 
    {
        vct.push_back(i);
        cout<<"Size : "<<vct.size()<<endl;
        cout<<"Capacity : "<<vct.capacity()<<endl;
    }
    cout<<vct[1]<<endl;
    vct.erase(vct.begin()+1);
    cout<<vct[1]<<endl;
    return 0;
}