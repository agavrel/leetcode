#include <vector>
#include <string>
#include <cstdint>
#include <array>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res = nums.size();
        for (int i = 0; i < nums.size(); i++)
            res ^= (nums[i] ^ i); // we can xor all items in the array, and xor the result by 0, 1...n-1, n, only the unique element will remain
        return res;
    }
};