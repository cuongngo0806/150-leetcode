/**
 * @ Author: Your name
 * @ Create Time: 2025-05-06 10:34:58
 * @ Modified by: Your name
 * @ Modified time: 2025-05-06 13:42:12
 * @ Description:
 */
#include <iostream>
#include <vector>

using namespace std;
// 26. Remove Duplicates from Sorted Array

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        int i = 0;
        for (int j = 1; j < n; j++) {
            if (nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1; // Return the length of the array after removing duplicates
    }
};
int main() {
    Solution s;
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    int result = s.removeDuplicates(nums);
    cout << "Result: " << result << endl;
    return 0;
}