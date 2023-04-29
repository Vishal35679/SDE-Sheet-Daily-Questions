Pow(X, N)
link: https://leetcode.com/problems/powx-n/

Problem:
Implement pow(x, n), which calculates x raised to the power n (i.e., xn).
  
CODE:
class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1;
        if(n<0) {
            n = abs(n);
            x = 1/x;
        }
        if(n%2==0){
            return myPow(x*x, n/2);
        }
        else{
            return x*myPow(x, n-1);
        }
    }
};
