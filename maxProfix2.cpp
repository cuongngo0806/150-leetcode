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
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n == 0) return 0;
        vector<int> dp(n, 0);
        int minPrice = prices[0];
        for (int i = 1; i < n; i++) {
            minPrice = min(minPrice, prices[i]); // Update the minimum price
            dp[i] = max(dp[i - 1], dp[i-1] + (prices[i] - prices[i-1])); // Calculate the maximum profit
        }
        return dp[n - 1]; // Return the maximum profit
    }
};

int main() {
    Solution s;
    vector<int> prices = {1,2,3,4,5};
    int result = s.maxProfit(prices);
    cout << "Result: " << result << endl;
    return 0;
}