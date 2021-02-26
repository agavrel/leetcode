#define ZEROES_EXPECTED (sizeof(int) << 3) - 1

class Solution {
public:
    int integerReplacement(int n) {
        if (n == INT_MAX) // leetcode does not allow overflow
            return ZEROES_EXPECTED + 1;
        int res = 0;
        while (n > 1) {
            if (__builtin_ctz(n) == ZEROES_EXPECTED - __builtin_clz(n)) // special case #1, if power of two
                return res + __builtin_ctz(n); // we add the number of trailing 0
            if (n == 0b11) // special case #2, n == 3 (0b11)
                return res + 2; // only case where it is faster to substract and divide (+2) than to add and divide twice (+3).
            if (n & 1) // if n is odd
                n += (n & 0b10) - 1; // if n & 0b10 we add 1, else we remove 1
            else
                n >>= 1; // if n is even we divide by 2
            res++;
        }
        return res;
    }
};