#include <iostream>
#include <string>
#include <cctype> // for isalnum and tolower

class Solution {
public:
    bool isPalindrome(std::string s) {
        int left = 0;
        int right = s.length() - 1;
        
        while (left < right) {
            // Skip non-alphanumeric characters from left
            while (left < right && !std::isalnum(s[left])) {
                left++;
            }
            // Skip non-alphanumeric characters from right
            while (left < right && !std::isalnum(s[right])) {
                right--;
            }
            // Compare characters (case insensitive)
            if (std::tolower(s[left]) != std::tolower(s[right])) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};

// Example usage
int main() {
    Solution sol;
    std::string input = "A man, a plan, a canal: Panama";
    if (sol.isPalindrome(input)) {
        std::cout << "Palindrome: Yes" << std::endl;
    } else {
        std::cout << "Palindrome: No" << std::endl;
    }
    return 0;
}
