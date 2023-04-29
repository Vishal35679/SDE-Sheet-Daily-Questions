Count More than n/k Occurences
link: https://practice.geeksforgeeks.org/problems/count-element-occurences/1

Problem:
Given an array arr[] of size N and an element k. The task is to find all elements in array that appear more than n/k times.

CODE:
class Solution
{
    public:
    int countOccurence(int arr[], int n, int k) {
      unordered_map<int, int> mp;
      int count = 0;
      for(int i = 0; i<n;i++){
          mp[arr[i]]++;
      }
      
      for(auto it: mp){
          if(it.second > (n/k)){
              count++;
          }
      }
      return count;
    }
};
