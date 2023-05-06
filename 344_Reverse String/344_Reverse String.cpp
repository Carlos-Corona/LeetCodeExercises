// Author: Carlos Corona https://github.com/Carlos-Corona

// Creation Date: 15/6/2022

// Description: 
// Write a function that reverses a string. The input string is given as an array of characters s.
// You must do this by modifying the input array in-place with O(1) extra memory.

// Solution to: 344. Reverse String
// URL: https://leetcode.com/problems/reverse-string/description/



#include <iostream>
#include <vector>

using namespace std; // added for using the "vector" class

class Solution {
public:
    void reverseString(vector<char>& s) {
        if (s.size() <= 1 || s.size() <= 100000) 
        {
            int left = 0;
            int right = s.size() - 1;
            char temp;
            while (left < right) { // corrected the condition
                temp = s[left];
                s[left] = s[right];
                s[right] = temp;
                ++left;
                --right;
            }
        }
    }
};

int main() { // corrected the return type and added a return statement
    Solution* solution = new Solution(); // corrected the variable name and added "new"
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    solution->reverseString(s); // added a test case
    for (char c : s) {
        cout << c;
    }
    cout << endl;
    delete solution; // added "delete"
    return 0;
}