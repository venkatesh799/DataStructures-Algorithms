#include <iostream>
#include <vector>
using namespace std;
// Missing number 
// in constraints they clearly said range is 0 to n only
// so we will usesum of n natural numbers concept and find missing number
class Solution {
    public:
    int missing_number(vector<int> nums) {
        int sum = 0;
        int n = nums.size();
        for(int i=0;i<n;i++) {
            sum += nums[i];
        }
        // sum of n elements
        n = n*(n+1)/2;
        return (n-sum);
    }
};
int main() {
    Solution solution;
    vector<int> nums = {0, 1, 2, 3, 5, 6, 7};
    cout<<"Missing number is: "<<solution.missing_number(nums);
    cout<<endl;
    return 0;
}