static int lambda_0 = []() { std::ios::sync_with_stdio(false); cin.tie(NULL); return 0; }();class

Solution {
public:
    bool canConstruct(string s, int k) {
         __int128 l = 0;

        for (char c : s) l ^= (__int128)1 << c;

        return __builtin_popcount(l >> 96) <= k && (s.size() >= k);
    }
};