Intersection of Two Sorted Arrays
link: https://www.codingninjas.com/codestudio/problems/intersection-of-2-arrays_1082149

Problem:
You are given two sorted arrays arr1 and arr2 of size n and m respectively. You have to find intersection of these two arrays.
  
CODE:
#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    int i=0,j=0;
    vector<int> ans;
    while(i<n && j<m){
        if(arr1[i]==arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j])
        {
            i++;
        }
        else{
            j++;
        }
    }
    return ans;
}
