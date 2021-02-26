#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> minOperations(string boxes) {
        const int N = boxes.size();
        vector<int> res(N);

        int sum = 0, right = 0, left = 0;
        for (int i = 0; i < N; ++i)
            if (boxes[i] == '1') sum += i, ++right;

        for (int i = 0; i < N; ++i) {
            res[i] = sum;
            if (boxes[i] == '1') --right, ++left;
            sum += left - right;
        }
        return res;
    }
};