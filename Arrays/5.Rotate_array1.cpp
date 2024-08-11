#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    // storing first ele
    int temp = arr[0];
    // Rotating array by 1 position to left
    for(int i=0;i<n;i++) {
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;

    // printin array
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}