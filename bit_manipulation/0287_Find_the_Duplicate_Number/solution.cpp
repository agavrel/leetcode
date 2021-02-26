#include <vector>

using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int a[30001] = {0};
        int res = 0;
        for (int &n : nums)
            res ^= (n * !(a[n]++ - 1)); // if a[n] == 1 then we xor res by n. It will happen only once.

        return res;
    }
};