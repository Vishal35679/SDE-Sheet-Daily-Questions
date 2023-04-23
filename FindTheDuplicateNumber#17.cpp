Find the Duplicate Number
link:https://leetcode.com/problems/find-the-duplicate-number/

Problem:
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
There is only one repeated number in nums, return this repeated number.
You must solve the problem without modifying the array nums and uses only constant extra space.
  
CODE:
//count freq approach
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> cnt(nums.size(),0);
        int ind =  0;
        for(int i = 0; i<nums.size(); i++){
            cnt[nums[i]]++;
        }
        
        for(int i = 0; i<cnt.size(); i++)
        {
            if(cnt[i] > 1)
            {
                ind  = i;
                break;
            }
        }
        return ind;
    }
};

//two pointer
class Solution {
public:
	int findDuplicate(vector& nums) {
		int n = nums.size(), slow = nums[0], fast = nums[0];
		do {
			
			slow=nums[slow];
			fast=nums[nums[fast]];
			
		}while(slow!=fast);

		slow=nums[0];
		while(slow != fast) {
		
			slow=nums[slow];
			fast=nums[fast];
			
		}
		return slow;
}
};
