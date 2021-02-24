#include <vector>
#include <string>
#include <cstdint>
#include <array>

using namespace std;

class Solution {
public:
    bool operator()(int nums)  {
        return isPowerOfFour(nums);
    }
    bool isPowerOfFour(int n) {
         // there will be exactly one bit set && the number of trailing 0 will be even
        return (__builtin_popcount(n) == 1) && (__builtin_ctz(n) ^ 1);
    }
};
