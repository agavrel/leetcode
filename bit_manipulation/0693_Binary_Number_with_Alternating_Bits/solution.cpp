using namespace std;

class Solution {
public:
    bool operator()(int nums)  {
        return hasAlternatingBits(nums);
    }
    bool hasAlternatingBits(int n) {
        return __builtin_popcount(n ^ (n >> 1)) + __builtin_clz(n) == 32;
    }
};