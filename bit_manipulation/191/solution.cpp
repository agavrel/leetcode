#include <vector>
#include <string>
#include <cstdint>
#include <array>

using namespace std;

class Solution {
public:
    uint32_t operator()(uint32_t nums)  {
        return hammingWeight(nums);
    }
    int hammingWeight(uint32_t n) {
        return __builtin_popcount(n);
    }
};
