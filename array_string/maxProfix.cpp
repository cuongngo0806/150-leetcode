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
// 121. Best Time to Buy and Sell Stock
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //solution 1
        /*
        /complexity analysis
        Time complexity: O(n), where n is the number of prices.
        Space complexity: O(1), as we are using only a few variables.
        /design and implement a solution
        The idea is to keep track of the minimum price seen so far and calculate the maximum profit at each step.
        We iterate through the prices, updating the minimum price and calculating the maximum profit.
        We return the maximum profit at the end.
        /optimize the solution
        The solution is already optimized as it uses a single pass through the prices array and only a few variables.
        */
        // int n = prices.size();
        // if (n == 0) return 0;
        // int minPrice = prices[0];
        // int maxProfit = 0;
        // for (int i = 1; i < n; i++) {
        //     if (prices[i] < minPrice) {
        //         minPrice = prices[i]; // Update the minimum price
        //     } else {
        //         maxProfit = max(maxProfit, prices[i] - minPrice); // Calculate the maximum profit
        //     }
        // }
        // return maxProfit; // Return the maximum profit

        //solution 2
        /*
        /complexity analysis
        Time complexity: O(n), where n is the number of prices.
        Space complexity: O(n), as we are using a vector to store the maximum profit at each day.
        /design and implement a solution
        The idea is to create a vector to store the maximum profit at each day.
        We iterate through the prices, updating the maximum profit at each day based on the previous day's profit.
        We return the maximum profit at the end.
        /optimize the solution
        The solution is already optimized as it uses a single pass through the prices array and only a few variables.
        */
        int n = prices.size();
        if (n == 0) return 0;
        vector<int> dp(n, 0);
        int minPrice = prices[0];
        for (int i = 1; i < n; i++) {
            minPrice = min(minPrice, prices[i]); // Update the minimum price
            dp[i] = max(dp[i - 1], prices[i] - minPrice); // Calculate the maximum profit
        }
        return dp[n - 1]; // Return the maximum profit


        //solution 3
        /*
        /complexity analysis
        Time complexity: O(n), where n is the number of prices.
        Space complexity: O(1), as we are using only a few variables.
        /design and implement a solution
        The idea is to use a two-pointer approach to find the maximum profit.
        We iterate through the prices, updating the minimum price and calculating the maximum profit.
        We return the maximum profit at the end.
        /optimize the solution
        The solution is already optimized as it uses a single pass through the prices array and only a few variables.
        */
        // int n = prices.size();
        // if (n == 0) return 0;
        // int minPrice = prices[0];
        // int maxProfit = 0;
        // for (int i = 1; i < n; i++) {
        //     if (prices[i] < minPrice) {
        //         minPrice = prices[i]; // Update the minimum price
        //     } else {
        //         maxProfit = max(maxProfit, prices[i] - minPrice); // Calculate the maximum profit
        //     }
        // }
        // return maxProfit; // Return the maximum profit
    }
};

int main() {
    Solution s;
    vector<int> prices = {7,1,5,3,6,4};
    int result = s.maxProfit(prices);
    cout << "Result: " << result << endl;
    return 0;
}