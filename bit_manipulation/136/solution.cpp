#include <vector>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
 // All other numbers are duplicate and xoring will allow to set duplicates value to 0
        for (const int a:nums)
            res ^= a; // the single number will remain.
        return res;
    }
};