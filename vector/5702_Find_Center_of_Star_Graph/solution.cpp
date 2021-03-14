https://leetcode.com/contest/weekly-contest-232/problems/find-center-of-star-graph/

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        if (edges[0][0] == edges[1][1] || edges[0][0] == edges[1][0])
            return edges[0][0];
        return edges[0][1];
    }
};