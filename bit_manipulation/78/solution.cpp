#include <vector>
#include <string>
#include <cstdint>
#include <array>

using namespace std;

class Solution {
public:
    vector<vector<int>> operator()(vector<int> nums)  {
        return subsets(nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> sub;
        int n = 1 << nums.size();
        for (int i = 0; i < n; i++) {
            vector<int> subset = {};
            for (int j = 0; j < nums.size(); j++)
                if (i & (1 << j))
                    subset.push_back({nums[j]});
            sub.push_back(subset);
        }
        return sub;
    }
};