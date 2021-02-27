class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<int> v[14]; // small memory optimization based on input constraints: 10^4 does not exceed 16383, 13 bits sets
        (void)v;

        sort(arr.begin(), arr.end()); // sort array to make sure that 512 is before 1024.
        for (const int &n: arr)
            v[__builtin_popcount(n)].push_back(n); // add int to the array of vectors at index of its number of bits

        for (int i = 1; i <= 13; i++) // v[0] is either empty or equal to 0, so why not reuse it
            v[0].insert(v[0].end(), v[i].begin(), v[i].end()); // concatenate vectors from smallest index to max index

        return v[0];
    }
};

/* or using hashmap
class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        unordered_map<char,vector<int>> m;

        sort(arr.begin(), arr.end());
        for (const int &n: arr)
            m[__builtin_popcount(n)].push_back(n);
        vector<int> v = m[0];
        for (int i = 1; i <= 32; i++)
            v.insert(v.end(), m[i].begin(), m[i].end());

        return v;
    }
};
*/