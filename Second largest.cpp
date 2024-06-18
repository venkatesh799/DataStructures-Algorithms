/* 
Given an array Arr of size N, print the second largest distinct element from an array. 
If the second largest element doesn't exist then return -1.

Example 1:
Input: 
N = 6
Arr[] = {12, 35, 1, 10, 34, 1}
Output: 34
Explanation: The largest element of the 
array is 35 and the second largest element
is 34.
*/

// Approach1: Sort the array then find array[n-2]. if no duplicates
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int max1 = -1;
	    int max2 = -1;
	    for(int i=0; i<n; i++) {
	        if(arr[i] > max1) {
	            max2 = max1;
	            max1 = arr[i];
	        }
	        else if(arr[i] > max2 && arr[i] != max1) {
	            max2 = arr[i];
	        }
	    }
	    return max2;
	}
};

