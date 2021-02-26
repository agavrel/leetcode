#include <vector>
#include <string>
#include <cstdint>
#include <array>

using namespace std;

#define ZEROES_EXPECTED (sizeof(int) << 3) - 1 // 8 * 8 bits minus 1 (at index power of two)

class Solution {
public:
    bool operator()(int nums)  {
        return isPowerOfTwo(nums);
    }
    bool isPowerOfTwo(int n) {
        return n > 0 && __builtin_clz(n) + __builtin_ctz(n) == ZEROES_EXPECTED;
        // return n > 0 && !(n & (n - 1)); // alternatively
    }
};
