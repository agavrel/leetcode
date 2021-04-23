class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> a(n,vector<int>(n));
        uint32_t treshold[4] =  {(uint32_t)(n-1), (uint32_t)(n-1), 0, 1};
        uint32_t len = n*n; // cnt of items to be returned
        a.reserve(len); // we can reserve len to avoid reallocating memory
        uint32_t x[2] = {0, 0};  // x[1] is y and x[0] is x
        uint32_t i = 0; // we use a 0b11 mask on i to know which direction we are heading to
        uint32_t k = 0;
        while (len--) {
            a[x[1]][x[0]] = ++k;
            if (x[i & 1] == treshold[i & 0b11]) { // if x or y match the minimum or maximum threshold as defined above
                treshold[i & 0b11] += (i & 0b10) - 1; // we will then increment or decrement this threshold accordingly
                ++i; // we now focus on the next threshold
            }
            x[i & 1] += 1 - (i & 0b10);  // increment or decrement x or y based on i value
        }
        return a;
    }
};