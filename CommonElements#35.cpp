Common Elements in Three Sorted Arrays
link: https://practice.geeksforgeeks.org/problems/common-elements1132/1

Problem:
Given three arrays sorted in increasing order. Find the elements that are common in all three arrays.
  
CODE:
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3) {
            set<int> s;
            int j=0;
            int i=0;
            int k=0;
            while(i<n1 && j<n2 && k<n3) {
                if(A[i]==B[j] && B[j]==C[k]) {
                    s.insert(A[i]);
                    i++;
                    j++;
                    k++;
                }
                else if(A[i]<B[j]) {
                    i++;
                }
                else if(B[j]<C[k]) {
                    j++;
                }
                else {
                    k++;
                }
            }
             vector<int> ans(s.begin(), s.end());
            return ans;
        }

};
