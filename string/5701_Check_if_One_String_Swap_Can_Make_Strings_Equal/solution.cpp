// https://leetcode.com/contest/weekly-contest-232/problems/check-if-one-string-swap-can-make-strings-equal/

class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        bool res = true;
        char c = 0;
        char d;
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] != s2[i]) {
                if (res == true) {
                    if (c != 0)
                        return false;
                    res = false;
                    c = s1[i];
                    d = s2[i];
                }
                else {
                    if (s2[i] == c && s1[i] == d)
                        res = true;
                    else
                        return false;
                }

            }

        }
        return res;
    }
};