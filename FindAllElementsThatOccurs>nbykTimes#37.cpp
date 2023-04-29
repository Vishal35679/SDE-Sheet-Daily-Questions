Find All Elements that Occurs More than n/k times
link: https://www.geeksforgeeks.org/given-an-array-of-of-size-n-finds-all-the-elements-that-appear-more-than-nk-times/

Problem: 
Given an array of size n and an integer k, find all elements in the array that appear more than n/k times. 
  
CODE:
// Approach 1 using HashMap
#include <bits/stdc++.h>
using namespace std;

void morethanNbyK(int arr[], int n, int k)
{
	int x = n / k;
	unordered_map<int, int> freq;
	for (int i = 0; i < n; i++) {
		freq[arr[i]]++;
	}
	for (auto i : freq) {
    if (i.second > x) {
			cout << i.first << endl;
		}
	}
}

//Approach 2 Moore's Voting Algorithm
#include <iostream>
using namespace std;
struct eleCount {
	int e; // Element
	int c; // Count
};

void moreThanNdK(int arr[], int n, int k)
{
	if (k < 2)
		return;
	struct eleCount temp[k - 1];
	for (int i = 0; i < k - 1; i++)
		temp[i].c = 0;
	for (int i = 0; i < n; i++) {
		int j;
		for (j = 0; j < k - 1; j++) {
			if (temp[j].e == arr[i]) {
				temp[j].c += 1;
				break;
			}
		}
		if (j == k - 1) {
			int l;

			for (l = 0; l < k - 1; l++) {
				if (temp[l].c == 0) {
					temp[l].e = arr[i];
					temp[l].c = 1;
					break;
				}
			}
			if (l == k - 1)
				for (l = 0; l < k - 1; l++)
					temp[l].c -= 1;
		}
	}
	for (int i = 0; i < k - 1; i++) {
		int ac = 0; // actual count
		for (int j = 0; j < n; j++)
			if (arr[j] == temp[i].e)
				ac++;
		if (ac > n / k)
			cout << "Number:" << temp[i].e
				<< " Count:" << ac << endl;
	}
}
