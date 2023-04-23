Sort an array of 0s, 1s and 2s || Sort Colors
link:https://leetcode.com/problems/sort-colors/

Problem:
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, 
with the colors in the order red, white, and blue. We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
  
CODE:
//Dutch National Flag Algorithm
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n= nums.size();
        int low=0, mid=0, high = n-1;
        while(mid<=high) {
            if(nums[mid]==0) {
                swap(nums[mid], nums[low]);
                mid++;
                low++;
            }
            else if(nums[mid]==1) {
                mid++;
            }
            else{
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
