#include <vector>
#include <string>
#include <cstdint>
#include <array>

using namespace std;

class Solution {
public:
    int  operator()(vector<int> nums)  {
        return countTriplets(nums);
    }
    int countTriplets(vector<int>& arr) {
        int n = arr.size();
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            int ab = arr[i];
            for (int j = i + 1; j < n; j++) {
                ab ^= arr[j];
                cnt += (j - i) * !ab;
            }
        }
        return cnt;
    }
};