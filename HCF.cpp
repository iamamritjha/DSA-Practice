#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int GCD(int a, int b) {
        if (a == 0) return b;
        if (b == 0) return a;

        int rem;
        while (b != 0) {
            rem = a % b;
            a = b;
            b = rem;
        }
        return a;
    }
};
int main() {
    Solution sol;
    int a = 48, b = 18;
    int gcd = sol.GCD(a, b);
    printf("GCD of %d and %d is: %d\n", a, b, gcd);
    return 0;
}