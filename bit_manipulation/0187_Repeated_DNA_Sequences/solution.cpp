#include <vector>
#include <string>
#include <cstdint>
#include <array>
#include <string.h>
#include <unordered_map>
#include <iostream>
#include <climits>

using namespace std;

class Solution {
public:
    vector<string> operator()(string s)  {
        return findRepeatedDnaSequences(s);
    }

    void makeHash(int &hash, int letter) {
       // A 1 C 3 G 7 T 20 after & 0x3f, after >> 1 (middle + left), after &0b11 (middle) :
       // 0b00 00  1
       // 0b00 01  1
       // 0b00 11  1
       // 0b10 10  0
        int c = ((letter & 0x3f) >> 1)  & 0b11;
        hash &= 0b00111111111111111111; // avoid overflow
        hash = (hash << 2 | c); // add current letter information to value of the hash
    }

    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> res = {};
        if (s.size() <= 10)
            return res;
        int hashTable[1 << 20] = {0};

        int hash = 0;
        for (int i = 0; i < 10; i++)
            makeHash(hash, s[i]);
        hashTable[hash]++;
        for (int i = 10; i < s.size(); i++) {
            makeHash(hash, s[i]);
            if (hashTable[hash]++ == 1)
                res.push_back(s.substr(i - 9, 10));
        }
        return res;
    }

    vector<string> findRepeatedDnaSequences2(string s) { // the easy way
            vector<string> res = {};
            if (s.size() < 10)
                return res;
            const char *c = s.c_str();
            unordered_map<string, int> m;
            char buf[s.size() + 1];
            (void)buf;
            memcpy(buf, c, 10);
            m[string(&buf[0], 10)]++;

            for (int i = 10; i < s.size(); i++) {
                memcpy(&buf[i], &s[i], sizeof(char));
                buf[i + 1] = '\0';
                string current = string(&buf[i - 9], 10);
                if (m[current]++ == 1 )
                    res.push_back(&buf[i - 9]);
            }
            return res;
     }
};