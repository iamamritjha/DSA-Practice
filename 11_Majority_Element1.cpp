#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count =0;
        int element ;
        for(int i =0; i<nums.size(); i++){
            if(count==0){
                count++;
                element = nums[i];
            }
            else if(nums[i]==element){
                count++;
            }
            else{
                count--;
            }
        }
        int cnt=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==element){
                cnt++;
            }
        }
        if(cnt>(nums.size()/2));
           return element;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {3,2,3,3,2,3,3,7,5,5,3,3,3};
    int result = sol.majorityElement(nums);
    cout << "Majority Element is: " << result << endl;
    return 0;
}