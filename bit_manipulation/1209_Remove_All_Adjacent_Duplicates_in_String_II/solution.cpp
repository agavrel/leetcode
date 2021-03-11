#define INC (1 << 7)

class Solution {
public:
    string removeDuplicates(string s, int k) {
        int tmp[100001];
        --k;
        int n = 0;
        for (int i = s.size(); i ^ -1; --i) {
            int sameLetter = !(s[i] ^ (tmp[n] & 0x7f));
            int diff = sameLetter * !((tmp[n] >> 7) ^ k);
            n += !sameLetter - diff;
            tmp[n] = sameLetter * tmp[n] + !sameLetter * s[i] + INC * !diff;
        }
        string result;
        while (n) {
            result += string(tmp[n] >> 7, tmp[n] & 0x7f);
            --n;
        }
        return result;
    }
};

// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii/