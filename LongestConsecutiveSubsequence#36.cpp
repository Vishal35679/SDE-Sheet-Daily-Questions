Longest Consecutive Subsequence
link: https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1

Problem:
Given an array of positive integers. Find the length of the longest sub-sequence such that elements in the subsequence are consecutive integers, the consecutive numbers can be in any order.
  
CODE:
class Solution{
  public:
    int findLongestConseqSubseq(int arr[], int N)
    {
      sort(arr,arr+N);
      unique(arr,arr+N);
      int ans=1;
      int cnt=1;
      for(int i=1;i<N;i++){
          if(arr[i-1]+1==arr[i]){
              cnt++;
              ans=max(ans,cnt);
          }else{
              cnt=1;
          }
      }
      return ans;
    }
};
