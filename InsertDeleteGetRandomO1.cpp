#include <iostream>
#include <vector>
#include <unordered_map>
#include <cstdlib>
#include <ctime>
#include <unordered_set>
#include <algorithm>
#include <random>

using namespace std;
class RandomizedSet {
private:
    vector<int> nums;  // Store values for O(1) random access
    unordered_map<int, int> valToIndex;  // Map value to its index in nums

public:
    RandomizedSet() {
        srand(time(0));
    }
    
    bool insert(int val) {
        if (valToIndex.find(val) != valToIndex.end()) return false;
        nums.push_back(val);
        valToIndex[val] = nums.size() - 1;  // Store index of the new value
        return true;
    }
    
    bool remove(int val) {
        if (valToIndex.find(val) == valToIndex.end()) return false;
        int lastElement = nums.back();
        int idx = valToIndex[val];
        nums[idx] = lastElement;  // Move last element to the position of the element to remove
        valToIndex[lastElement] = idx;  // Update index of the moved element
        nums.pop_back();  // Remove last element
        valToIndex.erase(val);  // Remove value from map
        return true;
    }
    
    int getRandom() {
        return nums[rand() % nums.size()];
    }
};
int main() {
    RandomizedSet* obj = new RandomizedSet();
    bool param_1 = obj->insert(1);
    bool param_2 = obj->remove(2);
    int param_3 = obj->getRandom();
    return 0;
}

