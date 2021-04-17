// https://leetcode.com/contest/biweekly-contest-50/problems/maximum-xor-for-each-query/

class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        vector<int> ans;
        int max = (1 << maximumBit) - 1;
        int n = nums[0];
        for (int i = 1; i < nums.size(); i++)
            n ^= nums[i];
        ans.push_back(n ^ max);

        for (int i = nums.size() - 1; i > 0; i--) {
            n = n ^ nums[i];
            ans.push_back(n ^ max);
        }

        return ans;
    }
};