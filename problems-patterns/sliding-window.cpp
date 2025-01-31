// Sliding Window Pattern in C++ with Detailed Comments
#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;

// Problem 1: Maximum Sum Subarray of Size K
// Description: Find the maximum sum of any contiguous subarray of size `K`.
int maxSumSubarrayOfSizeK(const vector<int> &arr, int k)
{
    int maxSum = 0, windowSum = 0;
    int windowStart = 0;

    // Iterate over the array
    for (int windowEnd = 0; windowEnd < arr.size(); windowEnd++)
    {
        // Add the next element to the window
        windowSum += arr[windowEnd];

        // Check if we hit the required window size
        if (windowEnd >= k - 1)
        {
            // Update the maximum sum
            maxSum = max(maxSum, windowSum);

            // Slide the window forward
            windowSum -= arr[windowStart];
            windowStart++;
        }
    }
    return maxSum;
}

// Problem 2: Smallest Subarray with a Greater Sum
// Description: Find the length of the smallest contiguous subarray whose sum is greater than or equal to `S`.
int smallestSubarrayWithSum(int s, const vector<int> &arr)
{
    int minLength = INT_MAX;
    int windowSum = 0, windowStart = 0;

    for (int windowEnd = 0; windowEnd < arr.size(); windowEnd++)
    {
        windowSum += arr[windowEnd]; // Add the next element to the window

        // Shrink the window as small as possible while the window sum is greater than or equal to `S`
        while (windowSum >= s)
        {
            minLength = min(minLength, windowEnd - windowStart + 1);
            windowSum -= arr[windowStart];
            windowStart++;
        }
    }

    return minLength == INT_MAX ? 0 : minLength;
}

// Problem 3: Longest Substring with K Distinct Characters
// Description: Find the length of the longest substring with no more than `K` distinct characters.
int longestSubstringWithKDistinct(const string &str, int k)
{
    int maxLength = 0;
    unordered_map<char, int> charFrequencyMap;
    int windowStart = 0;

    for (int windowEnd = 0; windowEnd < str.size(); windowEnd++)
    {
        char rightChar = str[windowEnd];
        charFrequencyMap[rightChar]++;

        // Shrink the window until we have no more than `K` distinct characters
        while (charFrequencyMap.size() > k)
        {
            char leftChar = str[windowStart];
            charFrequencyMap[leftChar]--;
            if (charFrequencyMap[leftChar] == 0)
            {
                charFrequencyMap.erase(leftChar);
            }
            windowStart++;
        }

        maxLength = max(maxLength, windowEnd - windowStart + 1);
    }

    return maxLength;
}

// Problem 4: Fruits into Baskets
// Description: Find the length of the longest substring containing at most 2 distinct characters.
int totalFruit(const vector<int> &fruits)
{
    int maxFruits = 0;
    unordered_map<int, int> fruitCount;
    int windowStart = 0;

    for (int windowEnd = 0; windowEnd < fruits.size(); windowEnd++)
    {
        fruitCount[fruits[windowEnd]]++;

        // Shrink the window until we have at most 2 distinct fruits
        while (fruitCount.size() > 2)
        {
            fruitCount[fruits[windowStart]]--;
            if (fruitCount[fruits[windowStart]] == 0)
            {
                fruitCount.erase(fruits[windowStart]);
            }
            windowStart++;
        }

        maxFruits = max(maxFruits, windowEnd - windowStart + 1);
    }

    return maxFruits;
}

// Problem 5: No-repeat Substring
// Description: Find the length of the longest substring with no repeating characters.
int lengthOfLongestSubstring(const string &str)
{
    int maxLength = 0;
    unordered_map<char, int> charIndexMap;
    int windowStart = 0;

    for (int windowEnd = 0; windowEnd < str.size(); windowEnd++)
    {
        char rightChar = str[windowEnd];

        // If the character is already in the window, shrink the window
        if (charIndexMap.find(rightChar) != charIndexMap.end())
        {
            windowStart = max(windowStart, charIndexMap[rightChar] + 1);
        }

        charIndexMap[rightChar] = windowEnd; // Update the character's index
        maxLength = max(maxLength, windowEnd - windowStart + 1);
    }

    return maxLength;
}

// Problem 6: Longest Subarray with Ones after Replacement
// Description: Find the length of the longest subarray containing only 1s after replacing at most `K` 0s.
int longestOnesAfterReplacement(const vector<int> &nums, int k)
{
    int maxLength = 0;
    int maxOnesCount = 0;
    int windowStart = 0;

    for (int windowEnd = 0; windowEnd < nums.size(); windowEnd++)
    {
        if (nums[windowEnd] == 1)
        {
            maxOnesCount++;
        }

        // Shrink the window if the number of 0s in the window is greater than `k`
        while ((windowEnd - windowStart + 1) - maxOnesCount > k)
        {
            if (nums[windowStart] == 1)
            {
                maxOnesCount--;
            }
            windowStart++;
        }

        maxLength = max(maxLength, windowEnd - windowStart + 1);
    }

    return maxLength;
}

// Test the functions
int main()
{
    // Problem 1: Maximum Sum Subarray of Size K
    vector<int> arr1 = {2, 1, 5, 1, 3, 2};
    int k1 = 3;
    cout << "Maximum sum of a subarray of size " << k1 << ": " << maxSumSubarrayOfSizeK(arr1, k1) << endl;

    // Problem 2: Smallest Subarray with a Greater Sum
    vector<int> arr2 = {2, 1, 5, 2, 8};
    int s = 7;
    cout << "Length of the smallest subarray with a sum >= " << s << ": " << smallestSubarrayWithSum(s, arr2) << endl;

    // Problem 3: Longest Substring with K Distinct Characters
    string str1 = "araaci";
    int k2 = 2;
    cout << "Length of the longest substring with " << k2 << " distinct characters: " << longestSubstringWithKDistinct(str1, k2) << endl;

    // Problem 4: Fruits into Baskets
    vector<int> fruits = {1, 2, 1, 2, 3};
    cout << "Maximum number of fruits in two baskets: " << totalFruit(fruits) << endl;

    // Problem 5: No-repeat Substring
    string str2 = "abcabcbb";
    cout << "Length of the longest substring with no repeating characters: " << lengthOfLongestSubstring(str2) << endl;

    // Problem 6
}