#include <iostream>
#include <sstream>
#include <unordered_map>
#include <vector>
using namespace std;

bool followsPattern(const string &pattern, const string &str)
{
    unordered_map<char, string> patternToStr;
    unordered_map<string, char> strToPattern;
    istringstream iss(str);
    vector<string> words;
    string word;
    while (iss >> word)
    {
        words.push_back(word);
    }

    if (words.size() != pattern.size())
    {
        return false;
    }

    for (int i = 0; i < pattern.size(); ++i)
    {
        char p = pattern[i];
        string w = words[i];

        if (patternToStr.count(p) == 0)
        {
            if (strToPattern.count(w) != 0)
            {
                return false;
            }
            patternToStr[p] = w;
            strToPattern[w] = p;
        }
        else
        {
            if (patternToStr[p] != w)
            {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    string str1_1 = "abba";
    string str2_1 = "cat dog dog cat";
    string str1_2 = "ssb";
    string str2_2 = "cat cat cat";

    cout << "Test case 1: " << (followsPattern(str1_1, str2_1) ? "true" : "false") << endl;
    cout << "Test case 2: " << (followsPattern(str1_2, str2_2) ? "false" : "false") << endl;

    return 0;
}
