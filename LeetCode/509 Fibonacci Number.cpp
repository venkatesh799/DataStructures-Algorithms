/* 
    Problem Statement  :   https://leetcode.com/problems/fibonacci-number/
    
    Using Dp/Memorisation Technique
    
*/


class Solution {
public:
    int fib(int n) {
        vector<int> dp(n+1, -1);
        int answer = ans(n, dp);
        return answer;
    }
    int ans(int number, vector<int> &dp) {
        if(number <= 1) {
            return number;
        }
        if(dp[number] != -1) {
            return dp[number];
        }
        dp[number] = ans(number-1, dp) + ans(number-2, dp);
        return dp[number];
    }
};


// Recursive Solution

class Solution {
public:
    int fib(int n) {
        if(n <= 1) {
            return n;
        }
        else {
            return fib(n-1) + fib(n-2);
        }
    }
};
