Reverse String
link https://leetcode.com/problems/reverse-string/

Problem:
Write a function that reverses a string. The input string is given as an array of characters s.
You must do this by modifying the input array in-place with O(1) extra memory.

CODE:
class Solution {
public:
    void reverseString(vector<char>& s) {
        int S=0;
        int e=s.size()-1;
        while(S<=e)
        {
            swap(s[S++],s[e--]);
        }
    }
};
