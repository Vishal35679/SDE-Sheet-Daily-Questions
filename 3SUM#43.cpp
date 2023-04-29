3 SUM
link: https://leetcode.com/problems/3sum/

Problem:
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
  
CODE:
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int target = 0;
        set<vector<int>> s;
        vector<vector<int>> output;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++) {
            int j=i+1;
            int k= nums.size() -1;
            while(j<k) {
                int sum = nums[i] + nums[j] + nums[k];
                if(sum == target) {
                    s.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                }
                else if(sum < target) j++;
                else k--;
            }
        }
        for(auto triplets:s) {
            output.push_back(triplets);
        }
        return output;
    }
};
