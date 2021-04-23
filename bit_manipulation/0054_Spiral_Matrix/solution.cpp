class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector <int> a;
        uint32_t treshold[4] =  {(uint32_t)(matrix[0].size()-1), (uint32_t)(matrix.size()-1), 0, 1};
        uint32_t len = (treshold[0]+1) * (treshold[1]+1); // cnt of items to be returned
        a.reserve(len); // we can reserve len to avoid reallocating memory
        uint32_t x[2] = {0, 0};  // x[1] is y and x[0] is x
        uint32_t i = 0; // we use a 0b11 mask on i to know which direction we are heading to

        while (len--) {
            a.push_back(matrix[x[1]][x[0]]);
            if (x[i & 1] == treshold[i & 0b11]) { // if x or y match the minimum or maximum threshold as defined above
                treshold[i & 0b11] += (i & 0b10) - 1; // we will then increment or decrement this threshold accordingly
                ++i; // we now focus on the next threshold
            }
            x[i & 1] += 1 - (i & 0b10);  // increment or decrement x or y based on i value
        }
        return a;
    }
};