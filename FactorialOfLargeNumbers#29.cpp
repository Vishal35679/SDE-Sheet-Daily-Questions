Factorial of Large Numbers
link: https://practice.geeksforgeeks.org/problems/factorials-of-large-numbers2508/1

Problem:
Given an integer N, find its factorial. return a list of integers denoting the digits that make up the factorial of N.
  
CODE:
class Solution {
public:
    vector<int> factorial(int n){
       vector<int > ans; 
       ans.push_back(1); 
       for(int x=2; x<=n; x++){
           int carry=0; 
           for(int i=0; i<ans.size(); i++){
               int val=ans[i]*x +carry; 
               ans[i]=val%10; 
               carry=val/10; 
           }
           while(carry!=0){
               ans.push_back(carry%10); 
               carry/=10; 
           }
       }
       reverse(ans.begin() , ans.end()); 
       return ans;
    }
};
