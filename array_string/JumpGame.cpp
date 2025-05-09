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
    bool canJump(vector<int>& nums) {
        //solution 1: Greedy approach
        if(nums.empty()) return false;
        int n = nums.size();
        int maxReach = 0; // The maximum index we can reach
        for(int i = 0; i < n; i++) {
            if(i > maxReach) return false; // If we can't reach this index, return false
            maxReach = max(maxReach, i + nums[i]); // Update the maximum reach
            if(maxReach >= n - 1) return true; // If we can reach the last index, return true
        }
        //solution 2: Dynamic programming
        // vector<bool> dp(n, false);
        // dp[0] = true; // We can always reach the first index
        // for(int i = 0; i < n; i++) {
        //     if(dp[i]) { // If we can reach this index
        //         for(int j = 1; j <= nums[i]; j++) {
        //             if(i + j < n) {
        //                 dp[i + j] = true; // Mark the reachable index
        //             }
        //         }
        //     }
        // }
        // }
        // return dp[n - 1]; // Return whether we can reach the last index
        //solution 3: BFS
        // vector<bool> visited(n, false);
        // queue<int> q;
        // q.push(0); // Start from the first index
        // visited[0] = true; // Mark the first index as visited
        // while(!q.empty()) {
        //     int index = q.front();
        //     q.pop();
        //     if(index == n - 1) return true; // If we reach the last index, return true
        //     for(int j = 1; j <= nums[index]; j++) {
        //         int nextIndex = index + j;
        //         if(nextIndex < n && !visited[nextIndex]) {
        //             visited[nextIndex] = true; // Mark the next index as visited
        //             q.push(nextIndex); // Add the next index to the queue
        //         }
        //     }
        // }
        // }
        // return false; // If we exhaust the queue without reaching the last index, return false
        
    }
};

int main() {
    Solution s;
    vector<int> nums = {2,3,1,1,4};
    bool result = s.canJump(nums);
    cout << "Result: " << result << endl;
    return 0;
}