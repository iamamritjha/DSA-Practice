#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int n) {
        if (n < 0 || (n % 10 == 0 && n != 0)) return false;  

        int rev = 0;
        while (n > rev) {    
            rev = rev * 10 + n % 10;
            n /= 10;
        }
        return (n == rev || n == rev / 10);
    }
};
int main() {
    Solution sol;
    int num = 121;
    if (sol.isPalindrome(num)) {
        printf("%d is a palindrome\n", num);
    } else {
        printf("%d is not a palindrome\n", num);
    }
    return 0;
}
