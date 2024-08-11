#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
    int findMaxConsecutiveOnes(vector<int> nums) {
        // count ones if we find any element other than one start again from zero and 
        // keep track of previously ones count
        int count = 0;
        int curr_count = 0;
        int n=nums.size();
        for(int i=0;i<n;i++) {
            if(nums[i] == 1) {
                curr_count++;
            }
            else {
                count = max(count, curr_count);
                curr_count = 0;
            }
        }
        // if last element is 1 then we are missing else block so updating here
        count = max(count, curr_count);
        return count;
    }
};
int main() {
    Solution solution;
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    cout<<"Count of Consective ones: "<<solution.findMaxConsecutiveOnes(nums)<<endl;
    return 0;
}
