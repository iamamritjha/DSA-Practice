#include <limits.h>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int rem = 0;
        while (x != 0) {
            int digit = x % 10;
            x /= 10;

            if (rem > INT_MAX/10 || (rem == INT_MAX/10 && digit > 7)) return 0;
            if (rem < INT_MIN/10 || (rem == INT_MIN/10 && digit < -8)) return 0;

            rem = rem * 10 + digit;
        }
        return rem;
    }
};

int main() {
    Solution sol;
    int result = sol.reverse(123);
    printf("Reversed number: %d\n", result); 
    return 0;
}
