#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int fib(int n) {
        if (n < 0) {
            return -1; 
        }
        if (n == 0) {
            return 0;
        }
        if (n == 1) {
            return 1;
        }
        return fib(n - 1) + fib(n - 2);
    }
};

int main() {
    Solution sol;
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int result = sol.fib(n);
    cout << "Fibonacci of " << n << " is: " << result << endl;
    return 0;
}