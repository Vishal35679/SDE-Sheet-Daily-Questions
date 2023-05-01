Find the Smallest Divisor given a Threshold
link: https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/

Problem:
Given an array of integers nums and an integer threshold, we will choose a positive integer divisor, divide all the array by it, and sum the division's result. 
Find the smallest divisor such that the result mentioned above is less than or equal to threshold.

CODE:
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1,r=1000001;
        int ans=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            long long int sum=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]%mid==0){
                    sum+=(nums[i]/mid);
                } else{
                    sum+=(nums[i]/mid)+1;
                }
            }
            if(sum>threshold){
                l=mid+1;
            } else{
                ans=mid;
                r=mid-1;
            }
        }
        return ans;
    }
};
