#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3};
    int j = 0;
    int n = nums.size()-1;
    for(int i=0;i<n;i++) {
        if(nums[i] != nums[i+1]) {
            nums[j] = nums[i];
            j++;
        }
    }
    nums[j++] = nums[n];

    cout<<j<<endl;
    for(int i=0;i<j;i++) {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}