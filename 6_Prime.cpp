#include <iostream>
using namespace std;

class Solution {
public:
    bool isPrime(int n) {
        if (n < 2) return false;              // 0 and 1 are not prime
        if (n == 2 || n == 3) return true;    // 2 and 3 are prime
        if (n % 2 == 0) return false;         // even numbers > 2 are not prime

        // check only odd divisors up to sqrt(n)
        // 1LL Means,1 is an integer, and LL stands for Long Long type integer
        for (int i = 3; 1LL * i * i <= n; i += 2) {
            if (n % i == 0)
                return false;
        }
        return true;
    }
};

int main() {
    Solution sol;
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (sol.isPrime(n))
        cout << n << " is a prime number.\n";
    else
        cout << n << " is not a prime number.\n";

    return 0;
}
