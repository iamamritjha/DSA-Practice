#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();

        // 1st pass: find up to two candidates
        int cand1 = 0, cand2 = 0;
        int cnt1 = 0, cnt2 = 0;

        for (int x : nums) {
            if (x == cand1) {
                cnt1++;
            } else if (x == cand2) {
                cnt2++;
            } else if (cnt1 == 0) {
                cand1 = x;
                cnt1 = 1;
            } else if (cnt2 == 0) {
                cand2 = x;
                cnt2 = 1;
            } else {
                cnt1--;
                cnt2--;
            }
        }

        // 2nd pass: verify counts
        cnt1 = cnt2 = 0;
        for (int x : nums) {
            if (x == cand1) cnt1++;
            else if (x == cand2) cnt2++;
        }

        vector<int> res;
        if (cnt1 > n / 3) res.push_back(cand1);
        if (cnt2 > n / 3) res.push_back(cand2);

        return res;
    }
};

int main() {
    Solution s;
    vector<int> nums = {3, 2, 3};
    vector<int> result = s.majorityElement(nums);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
