#include <vector>
#include <cstring>

using namespace std;

class Solution {
static constexpr int N = 1000 + 1;
int dp[N][N];

inline int f(vector<int> &M, vector<int> &nums, int i, int first)
{
    if (i == M.size())
        return 0;

    if (dp[i][first] != -1)
        return dp[i][first];

    int last = nums.size() - 1 - i + first;
    int start = M[i] * nums[first] + f(M, nums, i+1, first+1);
    int end = M[i] * nums[last] + f(M, nums, i+1, first);

    return dp[i][first] = max(start, end);
}

public:
    int maximumScore(vector<int>& nums, vector<int>& M)
    {
        memset(dp, -1, sizeof(dp));
        return f(M, nums, 0, 0);
    }
};