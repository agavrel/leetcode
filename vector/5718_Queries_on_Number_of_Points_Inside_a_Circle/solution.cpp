// https://leetcode.com/contest/biweekly-contest-50/problems/queries-on-number-of-points-inside-a-circle/

class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> ans;

        for (auto & query : queries) {
            int cnt = 0;
            for (auto & point : points) {
                int x = point[0] - query[0];
                int y = point[1] - query[1];
                if (query[2] * query[2] - (x * x + y *y)  >= 0) {
                    cnt++;
                }
            }
            ans.push_back(cnt);
        }

        return ans;
    }
};