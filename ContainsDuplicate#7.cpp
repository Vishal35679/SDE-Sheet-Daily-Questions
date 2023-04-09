217. Contains Duplicate
link: https://leetcode.com/problems/contains-duplicate/

Problem:
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
  
CODE:
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> data;
        for(int i=0; i<nums.size(); i++){
            data[ nums[i] ] += 1;
            if( data[nums[i]] > 1 ) return true;
        } return false;
    }
};
