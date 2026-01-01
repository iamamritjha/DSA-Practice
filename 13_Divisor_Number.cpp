#include <vector>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> result;

        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                result.push_back(i);
            }
        }

        return result;
    }
};
int main() {
    Solution sol;
    int number = 28; // Example number
    vector<int> divs = sol.divisors(number);

    // Output the divisors
    for (int d : divs) {
        cout << d << " ";
    }
    cout << endl;

    return 0;
}