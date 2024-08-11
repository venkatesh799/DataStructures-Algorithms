#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> arr = {1, 5, 3, 7, 2, 7};
    int max;
    for(int i=0;i<arr.size();i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    cout<<"Maximum for list is: "<<max<<endl;
    return 0;
}