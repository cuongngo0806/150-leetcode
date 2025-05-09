#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
// use many ways to solve this problem
// Explain why the solution is correct.
// Explain complexity analysis.
// Explain design and implement a solution.
// Explain how to optimize the solution.
class Solution {
public:
    int jump(vector<int>& nums) {
        //solution 1: Greedy approach
        if(nums.empty()) return 0;
        int n = nums.size();
        int jumps = 0; // Number of jumps made
        int currentEnd = 0; // The farthest index we can reach with the current number of jumps
        int farthest = 0; // The farthest index we can reach with the next jump
        for(int i = 0; i < n - 1; i++) { // We don't need to jump from the last index
            farthest = max(farthest, i + nums[i]); // Update the farthest index we can reach
            if(i == currentEnd) { // If we reach the end of the current jump
                jumps++; // Increment the number of jumps
                currentEnd = farthest; // Update the end of the current jump
            }
        }
        return jumps; // Return the total number of jumps made
    }
};
int main() {
    Solution s;
    vector<int> nums = {2,3,1,1,4};
    int result = s.jump(nums);
    cout << "Result: " << result << endl;
    return 0;
}