31. Next Permutation
link: https://leetcode.com/problems/next-permutation/

Problem:
Given an Array arr[] of integers, rearrange the number of the given array into the lexicographically next permutation of numbers

CODE:
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int start = nums.size() - 1;
        while(start >= 1 && nums[start] <= nums[start-1]) {
            start--;
        }
        if(start > 0) {
            int temp = nums.size()-1;
            while(nums[temp] <= nums[start-1]) temp--;
            swap(nums[start-1], nums[temp]);
        }
        reverse(nums.begin()+start, nums.end());
    }
};

//easy to understand with approach 
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(), index = -1;
        for(int i=n-2; i>=0; i--){
            if(nums[i] < nums[i+1]){
                index = i;
                break;
            }
        }
        for(int i=n-1; i>=index && index != -1; i--){
            if(nums[i] > nums[index]){
                swap(nums[i], nums[index]);
                break;
            }
        }
        reverse(nums.begin() + index + 1, nums.end());
    }
};
