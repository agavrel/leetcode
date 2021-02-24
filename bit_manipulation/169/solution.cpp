#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int operator()(vector<int> nums)  {
        return majorityElement(nums);
    }
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int res;

        for (int &n : nums) {
            // res ^= (nums[i] ^ res) * !cnt;
            if (!cnt--) // NB: about the decrement operator: moved the - 1 from cnt += below, that gives -1 or 1 depending on if n == res, as n == res is equivalent to n^res == 0
                res = n; // if count is 0 then our temporary result becomes the current number
            cnt += !(n ^ res) << 1;
        }
        return res;
    }
};