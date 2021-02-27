#include <vector>

class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int res = 0;
        int mask = 0b01000000000000000000000000000000;
        int setBits;

        do { //
            setBits = 0;
            for (const int &n: nums)
                setBits += !!(n & mask); // if bit is set at index
            res += setBits * (nums.size() - setBits);

        } while ((mask >>= 1));
        return res;
    }
};

/* Unrolled loop, no branching, will reach speed of light
#include <vector>
static int lambda_0 = []() { std::ios::sync_with_stdio(false); cin.tie(NULL); return 0; }();

class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int setBits[31] = {0};

        for (int &n: nums) {
            setBits[0] += n & 1; n >>= 1;
            setBits[1] += n & 1; n >>= 1;
            setBits[2] += n & 1; n >>= 1;
            setBits[3] += n & 1; n >>= 1;
            setBits[4] += n & 1; n >>= 1;
            setBits[5] += n & 1; n >>= 1;
            setBits[6] += n & 1; n >>= 1;
            setBits[7] += n & 1; n >>= 1;
            setBits[8] += n & 1; n >>= 1;
            setBits[9] += n & 1; n >>= 1;
            setBits[10] += n & 1; n >>= 1;
            setBits[11] += n & 1; n >>= 1;
            setBits[12] += n & 1; n >>= 1;
            setBits[13] += n & 1; n >>= 1;
            setBits[14] += n & 1; n >>= 1;
            setBits[15] += n & 1; n >>= 1;
            setBits[16] += n & 1; n >>= 1;
            setBits[17] += n & 1; n >>= 1;
            setBits[18] += n & 1; n >>= 1;
            setBits[19] += n & 1; n >>= 1;
            setBits[20] += n & 1; n >>= 1;
            setBits[21] += n & 1; n >>= 1;
            setBits[22] += n & 1; n >>= 1;
            setBits[23] += n & 1; n >>= 1;
            setBits[24] += n & 1; n >>= 1;
            setBits[25] += n & 1; n >>= 1;
            setBits[26] += n & 1; n >>= 1;
            setBits[27] += n & 1; n >>= 1;
            setBits[28] += n & 1; n >>= 1;
            setBits[29] += n & 1; n >>= 1;
            setBits[30] += n & 1; n >>= 1;
        }
        int res = setBits[0] * (nums.size() - setBits[0]);
        res += setBits[1] * (nums.size() - setBits[1]);
        res += setBits[2] * (nums.size() - setBits[2]);
        res += setBits[3] * (nums.size() - setBits[3]);
        res += setBits[4] * (nums.size() - setBits[4]);
        res += setBits[5] * (nums.size() - setBits[5]);
        res += setBits[6] * (nums.size() - setBits[6]);
        res += setBits[7] * (nums.size() - setBits[7]);
        res += setBits[8] * (nums.size() - setBits[8]);
        res += setBits[9] * (nums.size() - setBits[9]);
        res += setBits[10] * (nums.size() - setBits[10]);
        res += setBits[11] * (nums.size() - setBits[11]);
        res += setBits[12] * (nums.size() - setBits[12]);
        res += setBits[13] * (nums.size() - setBits[13]);
        res += setBits[14] * (nums.size() - setBits[14]);
        res += setBits[15] * (nums.size() - setBits[15]);
        res += setBits[16] * (nums.size() - setBits[16]);
        res += setBits[17] * (nums.size() - setBits[17]);
        res += setBits[18] * (nums.size() - setBits[18]);
        res += setBits[19] * (nums.size() - setBits[19]);
        res += setBits[20] * (nums.size() - setBits[20]);
        res += setBits[21] * (nums.size() - setBits[21]);
        res += setBits[22] * (nums.size() - setBits[22]);
        res += setBits[23] * (nums.size() - setBits[23]);
        res += setBits[24] * (nums.size() - setBits[24]);
        res += setBits[25] * (nums.size() - setBits[25]);
        res += setBits[26] * (nums.size() - setBits[26]);
        res += setBits[27] * (nums.size() - setBits[27]);
        res += setBits[28] * (nums.size() - setBits[28]);
        res += setBits[29] * (nums.size() - setBits[29]);

        return res + setBits[30] * (nums.size() - setBits[30]);
    }
};
*/