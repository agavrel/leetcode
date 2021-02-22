#include <sstream>
#include <string>

using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        stringstream ss;
        const char *s1 = word1.c_str();
        const char *s2 = word2.c_str();

        while (*s1) {
            ss << *s1++;
            if (*s2)
                ss << *s2++;
        }

        while (*s2)
            ss << *s2++;

        return ss.str();
    }
};