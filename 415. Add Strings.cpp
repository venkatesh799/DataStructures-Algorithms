// 415. Add Strings

// https://leetcode.com/problems/add-strings/description/

class Solution {
public:
    string addStrings(string num1, string num2) {
        string result;
        int ival;
        int jval;
        int i = num1.length() - 1;
        int j = num2.length() - 1;
        int sum = 0;
        int carry = 0;
        // carry != 0 --> if two strings are out and we left with the only carry
        // so, we're adding that carry
        // Num1: "9"
        // Num2: "0"
        // Res = "10" 
        while(i >= 0 || j >= 0 || carry != 0) {
            ival = i >= 0 ? num1[i] - '0' : 0;
            jval = j >= 0 ? num2[j] - '0' : 0;
            sum = ival + jval + carry;
            carry = sum / 10;
            result.push_back((sum%10) + '0');
            i--;
            j--;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
