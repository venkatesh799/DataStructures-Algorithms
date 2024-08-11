#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> arr = {1, 5, 3, 7, 2, 7};
    int max=INT_MIN, sec_max=INT_MIN;
    for(int i=0;i<arr.size();i++) {
        // if we got new maximum means then the old maximum is 
        // our second maximum
        if(arr[i] > max) {
            sec_max = max;
            max = arr[i];
        }
    }
    cout<<"Second maximum is : "<<sec_max<<endl;
    return 0;
}