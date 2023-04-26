Container with most Water
link: https://leetcode.com/problems/container-with-most-water/

Problem:
You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
Find two lines that together with the x-axis form a container, such that the container contains the most water.
Return the maximum amount of water a container can store.
  
CODE:
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() -1;
        int area=0;
        while(left<right)
        {
            area = max(area, min(height[left],height[right])*(right-left));
            if(height[left]<height[right]) left++;
            else right--;
        }
    return area;
    }
};
