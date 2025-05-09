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
    //Solution 1: Sorting
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        if (n == 0) return 0;
        sort(citations.begin(), citations.end(), greater<int>()); // Sort in descending order
        for (int i = 0; i < n; i++) {
            if (citations[i] <= i) { // If the citation count is less than or equal to the index
                return i; // Return the h-index
            }
        }
        return n; // If all citations are greater than their indices, return n
    }
    //Solution 2: Counting
    // int hIndex(vector<int>& citations) {
    //     int n = citations.size();
    //     if (n == 0) return 0;
    //     vector<int> count(n + 1, 0);
    //     for (int i = 0; i < n; i++) {
    //         if (citations[i] >= n) {
    //             count[n]++;
    //         } else {
    //             count[citations[i]]++;
    //         }
    //     }
    //     int total = 0;
    //     for (int i = n; i >= 0; i--) {
    //         total += count[i];
    //         if (total >= i) {
    //             return i;
    //         }
    //     }
    //     return -1;
    // }
};
int main() {
    Solution s;
    vector<int> citations = {3, 0, 6, 1, 5};
    int result = s.hIndex(citations);
    cout << "Result: " << result << endl;
    return 0;
}