#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;
// 189. Rotate Array
//Try to come up with as many solutions as you can. There are at least three different ways to solve this problem.
//Could you do it in-place with O(1) extra space?
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    //solution 1
    // int n = nums.size();
    // k = k % n; // Handle cases where k is greater than n
    // vector<int> rotated(nums.end() - k, nums.end());
    // nums.erase(nums.end() - k, nums.end());
    // nums.insert(nums.begin(), rotated.begin(), rotated.end());

    //solution 2
    // int n = nums.size();
    // k = k % n; // Handle cases where k is greater than n
    // reverse(nums.begin(), nums.end());
    // reverse(nums.begin(), nums.begin() + k);
    // reverse(nums.begin() + k, nums.end());


    //solution 3
    int n = nums.size();
    k = k % n; // Handle cases where k is greater than n
    int count = 0; // Count of numbers rotated
    for (int start = 0; count < n; start++) {
        int current = start;
        int prev = nums[start];
        do {
            int next = (current + k) % n;
            swap(nums[next], prev);
            current = next;
            count++;
        } while (start != current);
    }
    }
};

int main() {
    Solution s;
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;
    s.rotate(nums, k);
    cout << "Rotated Array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}