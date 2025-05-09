#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, candidate = 0;
        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }
            count += (num == candidate) ? 1 : -1;
        }
        return candidate; // The majority element is guaranteed to exist
        
    }
};

int main() {
    Solution s;
    vector<int> nums = {2,2,1,1,1,2,2};
    int result = s.majorityElement(nums);
    cout << "Result: " << result << endl;
    return 0;
}