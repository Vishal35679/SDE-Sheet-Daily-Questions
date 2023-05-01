Find Minimum in Rotated Sorted Array 2
link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/

Problem:
Suppose an array of length n sorted in ascending order is rotated between 1 and n times. 
Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].
Given the sorted rotated array nums that may contain duplicates, return the minimum element of this array.
  
CODE:
class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0, high = nums.size()-1;
        while(low<high) {
            int mid = low + (high-low)/2;
            if(nums[mid]< nums[high]) {
                high = mid;
            }
            else if(nums[mid] > nums[high]) {
                low = mid+1;
            }
            else {
                high--;
            }
        }
        return nums[high];
    }
};
