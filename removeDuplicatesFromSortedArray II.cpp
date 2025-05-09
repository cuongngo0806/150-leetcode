/**
 * @ Author: Your name
 * @ Create Time: 2025-05-06 10:34:58
 * @ Modified by: Your name
 * @ Modified time: 2025-05-06 13:50:46
 * @ Description:
 */
#include <iostream>
#include <vector>

using namespace std;
// 26. Remove Duplicates from Sorted Array II
// This problem is a variation of the original "Remove Duplicates from Sorted Array" problem.

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        int i = 0;
        for (int j = 1; j < n; j++) {
            // Allow at most two occurrences of each number
            if (i < 2 || nums[j] != nums[i - 2]) {
                nums[i] = nums[j];
                i++;
            }
        }
        return i + 1; // Return the length of the array after removing duplicates
    }
};
int main() {
    Solution s;
    vector<int> nums = {0,0,1,1,1,1,2,3,3};
    int result = s.removeDuplicates(nums);
    cout << "Result: " << result << endl;
    return 0;
}