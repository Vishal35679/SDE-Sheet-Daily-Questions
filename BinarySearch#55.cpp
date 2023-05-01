Binary Search
link: https://leetcode.com/problems/binary-search/

Problem: 
Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. 
If target exists, then return its index. Otherwise, return -1. You must write an algorithm with O(log n) runtime complexity.
  
CODE:
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0, r=nums.size()-1;
        while(l<r){
            int mid = l + (r-l)/2;
            if(nums[mid] >= target)
                r = mid;
            else
                l = mid + 1;
        }

        if(nums[l] != target) return -1;
        return l;
    }
};
