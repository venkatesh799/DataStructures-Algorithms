// Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

// A subarray is a contiguous part of an array.

// Example 1:

// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: [4,-1,2,1] has the largest sum = 6.
// Example 2:

// Input: nums = [1]
// Output: 1
// Example 3:

// Input: nums = [5,4,-1,7,8]
// Output: 23

//Kaden's Algorithm

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = INT_MIN;
        int present_sum = 0;
        for(int i=0;i<nums.size();i++) {
            present_sum += nums[i];
            if(present_sum < nums[i]) {
                present_sum = nums[i];
            }
            if(max_sum < present_sum) {
                max_sum = present_sum;
            }
          // present_sum = max(present_sum, nums[i]);
          // max_sum = max(present_sum, max_sum);
        }
        return max_sum;
        
    }
};

// Time Complexity : O(N)
