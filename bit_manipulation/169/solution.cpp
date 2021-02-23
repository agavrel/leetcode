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
            if (!cnt--)
                res = n;
            cnt += !(n ^ res) << 1;
        }
        return res;
    }
};