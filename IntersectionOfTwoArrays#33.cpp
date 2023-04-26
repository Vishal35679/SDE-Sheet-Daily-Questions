Intersection of Two Arrays
link: https://leetcode.com/problems/intersection-of-two-arrays/

Problem:
Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.
  
CODE:
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> m(nums1.begin(), nums1.end());
        vector<int> res;
        for (auto a : nums2)
            if (m.count(a)) {
                res.push_back(a);
                m.erase(a);
            }
        return res;
    }
};

//2nd approach
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        for(auto i : nums1){
            if(count(nums2.begin(),nums2.end(),i)>0){//checks if the number present in "nums1" is also present in "nums2" 
                if(count(result.begin(),result.end(),i)==0){//checks if the number present in both "nums1" and "nums2" is already in "result" vector or not
                result.push_back(i);
                }
            }
        }
        return result;
    }
};
