Triplet Sum in an Array
link https://practice.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1

Problem:
Given an array arr of size n and an integer X. Find if there's a triplet in the array which sums up to the given integer X.
  
CODE:
class Solution{
    public:
    bool find3Numbers(int A[], int n, int X) {
        sort(A,A+n);
        for(int i=0;i<n;i++) {
            int j=i+1;
            int k=n-1;
            while(j<k) {
                if(A[i]+A[j]+A[k]==X) {
                    return 1;
                }
                else if(A[i]+A[j]+A[k]>X){
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        return 0;
    }
};
