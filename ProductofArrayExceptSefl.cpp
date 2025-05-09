#include <iostream>
#include <vector>

using namespace std;
// use many ways to solve this problem
// Explain why the solution is correct.
// Explain complexity analysis.
// Explain design and implement a solution.
// Explain how to optimize the solution.

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 1);
        // solution 1: O(n) time and O(1) space
        // Calculate prefix products
        // for (int i = 1; i < n; i++) {
        //     result[i] = result[i - 1] * nums[i - 1];
        // }
        
        // // Calculate suffix products and multiply with prefix products
        // int suffix = 1;
        // for (int i = n - 1; i >= 0; i--) {
        //     result[i] *= suffix;
        //     suffix *= nums[i];
        // }
        
        // return result;
        // solution 2: O(n) time and O(n) space
        vector<int> prefix(n, 1), suffix(n, 1);
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] * nums[i - 1];
        }
        for (int i = n - 2; i >= 0; i--) {
            suffix[i] = suffix[i + 1] * nums[i + 1];
        }
        for (int i = 0; i < n; i++) {
            result[i] = prefix[i] * suffix[i];
        }
        return result;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = sol.productExceptSelf(nums);
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}

