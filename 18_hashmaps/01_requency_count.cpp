#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<char, int> count;
    string str = "abccaaddffg";
    for (int i = 0; i < str.length(); i++)
        count[str[i]]++;

    for (auto x : count)
        cout << x.first << " " << x.second << endl;
    return 0;
}