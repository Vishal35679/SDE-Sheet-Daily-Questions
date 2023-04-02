73. Set Matrix Zeroes 
link : https://leetcode.com/problems/set-matrix-zeroes/
Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
  
CODE:
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    int row[m];
    int col[n];
    for (int i = 0; i < m; i++) {
          row[i] = -1;
    }
      
    for (int i = 0; i < n; i++) {
          col[i] = -1;
    }
      
    for(int i=0; i<m; i++)
	  {
		  for(int j=0; j<n; j++)
		  {
			  if(matrix[i][j]==0)
			  {
				  row[i] = 0;
				  col[j] = 0;
			  }
		  }
	  }

	  for(int i=0; i<m; i++)
	  {
		  for(int j=0; j<n; j++)
		  {
         if (row[i] == 0 || col[j] == 0) {
                    matrix[i][j] = 0;
                  }
      }
	  }
    }
};
