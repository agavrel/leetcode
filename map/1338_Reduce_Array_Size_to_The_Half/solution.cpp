class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n = arr.size() >> 1;

        unordered_map<int, int> freq;
        for (const auto& n : arr) freq[n]++;

        map<int, int, greater<int>> m;
        for (auto &[k,v] : freq)  m[v]++;

        int ans = 0;
        int tmp;
        for (auto &[k,v] : m) {
            tmp = n;
            n -= k * v;
            if (n <= 0)
                return ans + (tmp + k - 1) / k;

            ans += v;
        }
        return 0;
    }
};