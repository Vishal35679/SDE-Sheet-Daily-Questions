Maximum Length
link: https://practice.geeksforgeeks.org/problems/84963d7b5b84aa24f7807d86e672d0f97f41a4b5/1

Problem:
Given the maximum occurrences of a, b, and c in a string. Your task is to make the string containing only a, b, & c such that no three consecutive characters are the same. 
If the resultant string equals to a+b+c, return the length (a+b+c) otherwise -1.
  
CODE:
int solve(int a, int b, int c) {
    int maxLength = a + b + c;
    int maxCount = max(a, max(b, c));
    int remainingCount = maxLength - maxCount;
    if (maxCount > remainingCount * 2 + 2) {
        return -1;
    } else {
        return a + b + c;
    }
  }
