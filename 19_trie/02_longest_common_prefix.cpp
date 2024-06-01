#include <iostream>
#include <vector>
using namespace std;

// Solution using trie
class TrieNode
{
public:
    char data;
    TrieNode *children[20];
    int childCount;
    bool isTerminal;

    TrieNode(char ch)
    {
        data = ch;
        for (int i = 0; i < 26; i++)
            children[i] = NULL;
        childCount = 0;
        isTerminal = false;
    }
};

class Trie
{
public:
    TrieNode *root;
    Trie()
    {
        root = new TrieNode('\0');
    }

    // Insert Word in trie
    void insertUtil(TrieNode *root, string word)
    {
        if (word.length() == 0)
        {
            root->isTerminal = true;
            return;
        }

        int index = word[0] - 'a';
        TrieNode *child;
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            child = new TrieNode(word[0]);
            root->childCount++;
            root->children[index] = child;
        }
        insertUtil(child, word.substr(1));
    }
    void insertWord(string word)
    {
        insertUtil(root, word);
    }
    void lcp(string first, string &ans)
    {
        for (int i = 0; i < first.length; i++)
        {
            if (root->childCount == 1)
            {
                ans.push_back(root->data);
                int index = ch - 'a';
                root = root->children[index];
            }
            else
            {
                break;
            }
            if (root->isTerminal)
                break;
        }
    }
};

string longestCommonPrefix(vector<string> arr, int n)
{

    Trie *t = new Trie('\0');
    for (int i = 0; i < n; i++)
    {
        t->insertWord(arr[i]);
    }
    string first = arr[0];
    string ans = "";
    lcp(first, ans);
    return ans;
}

// Approach #2
string longestCP(vector<string> arr, int n)
{
    string ans = "";
    for (int i = 0; i < arr[0].length; i++)
    {
        char ch = arr[0][i];
        bool match = true;

        for (int j = 0; j < n; j++)
        {
            if (arr[j].length < i || ch != arr[j][i])
            {
                match = false;
                break;
            }
        }
        if (match)
            ans.push_back(ch);
        else
            break;
    }
    return ans;
}