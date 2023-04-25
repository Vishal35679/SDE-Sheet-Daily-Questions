Count pairs with given Sum 
link: https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1

Problem:
Given an array of N integers, and an integer K, find the number of pairs of elements in the array whose sum is equal to K.
  
CODE:
class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        unordered_map <int,int> m;
        int ans = 0;
        for(int i = 0;i < n;i++){
            ans += m[k-arr[i]];
            m[arr[i]]++;
        }
        return ans;
    }
};
