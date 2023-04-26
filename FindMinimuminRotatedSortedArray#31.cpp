Find Minimum in Rotated Sorted Array
link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

Problem:
Suppose an array of length n sorted in ascending order is rotated between 1 and n times. 
Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].
Given the sorted rotated array nums of unique elements, return the minimum element of this array.
You must write an algorithm that runs in O(log n) time.

CODE:
class Solution {
public:
    int findMin(vector<int> &num) {
        int lo =0, hi = num.size()-1;
        while(lo<hi){
              int mid=(lo+hi)/2;
              if(num[mid]>num[hi]) lo=mid+1;
              else hi=mid;
        }
        return num[lo];
    }
};
