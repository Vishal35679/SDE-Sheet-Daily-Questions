Majority Element 2
link: https://leetcode.com/problems/majority-element-ii/

Problem:
Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.
  
CODE:
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
    int element1 = nums[0];
    int c1 = 1;
    int element2 = 0;
    int c2 = 0;
    for(int i=1; i<nums.size(); i++)
    {
        if(element1 == nums[i])
        {
            c1++;
        }
        else if(element2 == nums[i])
        {
            c2++;
        }
        else if(c1 == 0)
        {
            element1 = nums[i];
            c1 = 1;
        }
        else if(c2 == 0)
        {
            element2 = nums[i];
            c2 = 1;
        }
        else{
            c1--;
            c2--;
        }
    }
    c1 = c2 = 0;
    for(int i=0; i<nums.size(); i++)
    {
        if(nums[i] == element1) c1++;
        else if(nums[i] == element2) c2++;
    }
    vector<int> ans;
    if(c1>nums.size()/3) 
    {
        ans.push_back(element1);
    }
    if(c2>nums.size()/3)
    {
        ans.push_back(element2);
    }
    return ans;
    }
};
