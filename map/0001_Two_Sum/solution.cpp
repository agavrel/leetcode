#include <iterator>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;

        int i = 0;
        do {
            auto it = m.find(target - nums[i]);
            if (it != m.end())
                return vector<int> {it->second, i};
            m[nums[i]] = i;
        } while (++i);

        return {}; // we will never reach this as each input has exactly one solution
    }
};