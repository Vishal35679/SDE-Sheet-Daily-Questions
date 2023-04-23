Missing and Repeating Number in array
link:https://www.codingninjas.com/codestudio/problems/873366?topList=striver-sde-sheet-problems&leftPanelTab=0

Problem:
You are given a read-only array of N integers with values also in the range [1, N] both inclusive. 
Each integer appears exactly once except A which appears twice and B which is missing. 
The task is to find the repeating and missing numbers A and B where A repeats twice and B is missing.
  
CODE:
#include <bits/stdc++.h>
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	pair<int,int>p;
    set<int>s1;
    for(int i=0;i<n;i++)
    {
        s1.insert(arr[i]);
    }
    int actualsum=0;
    for(int i=1;i<=n;i++)
    {
        actualsum+=i;
    }
    int realsum=0;
    for(int i=0;i<n;i++)
    {
        realsum+=arr[i];
    }
    int sum=0;
    for(auto it:s1)
    {
      sum=sum+it;
    }
    int repeat=actualsum-sum;
    int miss=realsum-sum;
    p.first=repeat;
    p.second=miss;
    return p;
}
