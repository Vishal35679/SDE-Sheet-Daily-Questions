Find if there is a pair with a given sum in the rotated sorted Array
link: https://www.geeksforgeeks.org/given-a-sorted-and-rotated-array-find-if-there-is-a-pair-with-a-given-sum/?ref=lbp

Problem:
Given an array arr[] of distinct elements size N that is sorted and then around an unknown point, the task is to check if the array has a pair with a given sum X.
  
CODE:
bool pairInSortedRotated(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n - 1; i++)
        if (arr[i] > arr[i + 1])
            break;
    int l = (i + 1) % n;
    int r = i;
    while (l != r) {
        if (arr[l] + arr[r] == x)
            return true;
        if (arr[l] + arr[r] < x)
            l = (l + 1) % n;
        else
            r = (n + r - 1) % n;
    }
    return false;
}
