Sqrt(X) 
link: https://leetcode.com/problems/sqrtx/

Problem:
Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.
  
CODE:
class Solution {
public:
//O(log n) Binary Search
    int bs(int n)
    {
        int s=0;
        int e=n;
        long long int mid=s + (e-s)/2;
        int ans=-1;
        while(s<=e)
        {
            long long int sq = mid*mid;
            if(sq == n)
            {
                return mid;
            }
            else if(sq < n)
            {
                ans = mid;
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
            mid=s + (e-s)/2;
        }
        return ans;
    }

    int mySqrt(int x) {
        return bs(x);
    }
};
