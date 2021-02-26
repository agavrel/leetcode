#include <vector>
#include <cmath>
#include <climits>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int> &nums) {
        int currentStreak = 0;
        int largestSum = INT_MIN;
        for(int &n: nums) {
            currentStreak += n;
            if (currentStreak < n) // reset currentStreak if current number is above
                currentStreak = n;
            largestSum = max(largestSum, currentStreak);
        }
        return largestSum;   
    }
};