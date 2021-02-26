class Solution {
public:
    char findTheDifference(string s, string t) {
        char c = 0;
        for (int i = 0; t[i]; i++)
            c ^= t[i] ^ s[i];
        return c;
    }
};