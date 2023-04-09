33. Search in Rotated Sorted Array
link: https://leetcode.com/problems/search-in-rotated-sorted-array/

Problem:
Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.
  
CODE:
class Solution {
public:
    int search(vector<int>& arr, int target) {
        int l=0,h=arr.size()-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(arr[mid]==target) return mid;
            if(arr[l]<=arr[mid]){
                if(target>=arr[l] && target<arr[mid]) h=mid-1;
                else l=mid+1;
            }
            else{
                if(target>arr[mid] && target<=arr[h] ) l=mid+1;
                else h=mid-1;
            }
        }
        return -1;
    }
};
