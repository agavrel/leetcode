#include <algorithm>
#include <unordered_map>

class Solution {
public:
    int maxProduct(vector<string> &words) {
        int res = 0;
        unordered_map<int, int> m; // key is hashed value letters appearing in string, value its length

        for (const string &word : words) {
            int hash = 0;
            len = word.size();
            for (const char &c : word) // iterate over each letter of the current word
                hash |= 1 << (c ^ 96); // create unique hash value using bits of an integer. 'a' <= c <= 'z'
            m[hash] = max(m[value], len); // if a value was previously stored, it may be a longer string. abc -> aabc will have same value but the second one is long
            for (const auto &[k, v] : m) // iterate over map entries, using key and v value
                if (!(k & hash)) // compare previously found hash (map key) with current hash. if AND return 0 they do not have common letters
                    res = max(res, len * v); // keep the max only
        }
        return res;
    }
};