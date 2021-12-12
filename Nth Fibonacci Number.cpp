/* 
    Nth fibonacci Number using Recusrive function
        drawbacks : if you draw recursive tree you can clearly observer there is a
                    Repeatetive/Duplicate  function calls.
        Update : Use memorization technique to save time

*/

#include<iostream>
using namespace std;
int fib(int n) {
    if(n <= 1) {
        return n;
    }
    else {
        return fib(n-1) + fib(n-2);
    }
}
int main()
{
    int number;
    cin>>number;
    cout<<fib(number);
    return 0;
}
