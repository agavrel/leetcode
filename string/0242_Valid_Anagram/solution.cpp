#include <string>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        if (n != t.size())
            return false;

        int a[26] = {0}; // we use a map if the string contains unicode

        for (int i = 0; i < n; i++)
           a[s[i]-'a']++;

        for (int i = 0; i < n; i++)
            if (!a[t[i]-'a']--)
                return false;

        return true;
    }
};