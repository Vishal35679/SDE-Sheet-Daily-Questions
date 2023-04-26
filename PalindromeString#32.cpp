Palindrome String
link: https://practice.geeksforgeeks.org/problems/palindrome-string0817/1

Problem:
Given a string S, check if it is palindrome or not.
  
CODE:
class Solution{
public:	
	int isPalindrome(string S)
	{
       int n = S.size();
       for(int i=0; i<n/2; i++){
    	 if(S[i] != S[n-i-1])
    	    return 0;
        }
    	    return 1;
	}
};
