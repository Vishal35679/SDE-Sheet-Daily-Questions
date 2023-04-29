Jump Game
link: https://leetcode.com/problems/jump-game/

Problem:
You are given an integer array nums. You are initially positioned at the array's 0th index, and each element in the array represents your maximum jump length at that position.
Return true if you can reach the last index, or false otherwise.
  
CODE:
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i=0, maxReach=0;
        while(i<nums.size() && i<=maxReach) {
            maxReach = max(i + nums[i], maxReach);
            i++;
        }
        if(i==nums.size()) return true;
        return false;
    }
};
