#include <unordered_map>
#include <climits>

using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> m;
        int min = INT_MAX;

        for (int i = 0; i < s.size(); i++)
            m[s[i]] = m[s[i]] ? INT_MAX : i + 1;

        for (const auto &[k,v] : m)
            if (v < min)
                min = v;

        return min != INT_MAX ? min - 1 : -1;
    }
};