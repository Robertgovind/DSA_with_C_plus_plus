#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter array size ";
    cin>>n;
    int arr[n];
    //Adding data
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    //Traversing items of array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        }
    
    return 0;
}