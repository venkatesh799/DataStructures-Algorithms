#include <iostream>
#include <vector>
using namespace std;
bool issorted(vector<int> a) {
    for(int i=0;i<a.size()-1;i++) {
        if(a[i] > a[i+1]) {
            return false;
        }
    }
    return true;
}
int main() {
    vector<int> a = {1, 5, 6, 30, 70};
    cout<<(issorted(a) ? "True": "False")<<endl;
    return 0;
}