#include <iostream>
#include <vector>
using namespace std;
// move all zeros to end of array without effecting relative order of elements
// Brute force: create temp array and push all non zero elements to temp array
//              then push zeros to end of array

// Optimal: two pointer approach. first find non zero element j.
//          then swap with non zero element i.
//          increment j and i(i will done in for loop)
class Solution {
    public:
    void movezeros(vector<int> &nums) {
        int j = -1;
        int n = nums.size();
        // find first zero in array
        for(int i=0;i<n;i++) {
            if(nums[i] == 0) {
                // update j
                j = i;
                break;
            }
        }
        // if no zeros then return
        if(j == -1) return;
        for(int i=j+1;i<n;i++) {
            if(nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};
int main() {

    Solution solution;
    vector<int> nums = {1, 0, 4, 0, 0, 6, 7};
    solution.movezeros(nums);
    for(int i=0;i<nums.size();i++) {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    
}