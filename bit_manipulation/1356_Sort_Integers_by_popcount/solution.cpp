class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {        
        vector<int> v[33];
        for (const int &n: arr)
            v[__builtin_popcount(n)].push_back(n);
        
        for (int i = 1; i <= 32; i++) {
            sort(v[i].begin(), v[i].end());
            v[0].insert(v[0].end(), v[i].begin(), v[i].end());
        }
        
        return v[0];
    }
};