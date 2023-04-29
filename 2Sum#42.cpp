2 SUM
link: https://leetcode.com/problems/two-sum/

Problem:
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

CODE:
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n = nums.size();
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(nums[i]+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                break;
                }
            }
        }
        return ans;
    }
};
