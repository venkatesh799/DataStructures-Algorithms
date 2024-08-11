// Rotate Array by k times
#include <iostream>
#include <vector>
using namespace std;

void rev(vector<int> &nums, int low, int high) {
        while(low < high) {
            swap(nums[low], nums[high]);
            low++;
            high--;
        }
    }
int main() {
    vector<int> nums = {1, 5, 6, 30, 70};
    int k = 3; // rotate array 3 times
    int n = nums.size();
    k = k % n;
    // rotate whole array
    // rotate array 0 to k
    // rotate array after k to n
    rev(nums, 0, n-1);
    rev(nums, k, n-1);
    rev(nums, 0, k-1);
    return 0;
}