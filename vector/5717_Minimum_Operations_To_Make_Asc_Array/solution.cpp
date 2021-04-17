// https://leetcode.com/contest/biweekly-contest-50/problems/minimum-operations-to-make-the-array-increasing/

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int res = 0;
        int tmp = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            int dif = 0;
            int n = nums[i];

            if (tmp >= n) {
                dif = tmp - n + 1;
                res += dif;
                tmp++;
            }
            else
                tmp = n;
        }

        return res;
    }
};