/**
 * @ Author: Your name
 * @ Create Time: 2025-05-06 10:08:14
 * @ Modified by: Your name
 * @ Modified time: 2025-05-06 10:26:36
 * @ Description:
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
// 27. Remove Element
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int i = 0;
        for (int j = 0; j < n; j++) {
            if (nums[j] != val) {
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }
};
int main() {
    Solution s;
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;
    int result = s.removeElement(nums, val);
    cout << "Result: " << result << endl;
    return 0;
}
