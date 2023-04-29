Minimize the Height 2
link: https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1

Problem:
Given an array arr[] denoting heights of N towers and a positive integer K.
For each tower, you must perform exactly one of the following operations exactly once.
Increase the height of the tower by K
Decrease the height of the tower by K
Find out the minimum possible difference between the height of the shortest and tallest towers after you have modified each tower.
  
CODE:
class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        sort(arr,arr+n);
        int mini=arr[0];
        int maxi=arr[n-1];
        int ans=maxi-mini;
        for(int i=1;i<n;i++)
        {
            if(arr[i]-k<0)
            continue;
                mini=min(arr[0]+k,arr[i]-k);
                maxi=max(arr[i-1]+k,arr[n-1]-k);
                ans=min(ans,maxi-mini);
        }
        return ans;
    }
};
