#include <iostream>
using namespace std;

int lenght(char ch[])
{
    int len = 0;
    int i = 0;
    for (char val = ch[i]; ch[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}
bool checkPalindrome(char ch[])
{
    int start = 0, end = lenght(ch) - 1;
    while (start < end)
    {
        if (ch[start++] != ch[end--])
            return false;
    }
    return true;
}

int main()
{
    char name[20];
    cout << "Enter a word :" << endl;
    cin >> name;
    if (checkPalindrome(name))
        cout << "Palindrome!!" << endl;
    else
        cout << "Not Palindrome!!" << endl;
    return 0;
}