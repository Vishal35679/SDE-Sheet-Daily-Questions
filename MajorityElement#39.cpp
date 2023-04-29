Majority Element
link: https://leetcode.com/problems/majority-element/

Problem:
Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
  
CODE:
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int element = nums[0];
        int count = 1;
        int ans;
        for(int i=1; i<nums.size(); i++)
        {
            if(element == nums[i]) 
            {count++;}
            else{
                count--;
            }

            if(count==0)
            {
                element = nums[i];
                count++;
            }
        }
        if(element> nums.size()/2){
            ans = element;
        }
        return ans;
    }
};
