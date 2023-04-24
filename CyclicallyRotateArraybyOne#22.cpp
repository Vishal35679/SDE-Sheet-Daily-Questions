Cyclically rotate array by one 
link: https://www.geeksforgeeks.org/c-program-cyclically-rotate-array-one/

Problem:
Given an array, cyclically rotate the array clockwise by one. 
  
CODE:
void rotate(int arr[], int n)
{
  int i = 0, j = n - 1;
  while(i != j)
  {
    swap(&arr[i], &arr[j]);
    i++;
  }
}
