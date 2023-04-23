Union of two arrays
link:https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1

Problem:
Given two arrays a[] and b[] of size n and m respectively. The task is to find the number of elements in the union between these two arrays.

Union of the two arrays can be defined as the set containing distinct elements from both the arrays. 
If there are repetitions, then only one occurrence of element should be printed in the union.
  
CODE:
class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        set<int>v;
        for(int i=0;i<n;i++){
            v.insert(a[i]);
        }
        for(int i=0;i<m;i++){
            v.insert(b[i]);
        }
        
        return v.size();
    }
};
