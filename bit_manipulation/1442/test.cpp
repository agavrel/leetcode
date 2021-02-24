#include <string>
#include <iostream>
#include <vector>
#include <ctime> // https://man7.org/linux/man-pages/man3/clock.3.html
#include <iterator>
#include "solution.cpp"
#include <sstream>
#include <cstdint>
#include <stdbool.h>

#define bool char

using namespace std;

const char *toString(vector <int> v) {
    stringstream ss;
    copy(v.begin(), v.end(), ostream_iterator<int>(ss, " "));
    return ss.str().c_str();
}

int main(void) {
    vector<vector<int>> nums = {{2,3,1,6,7}, {1,1,1,1,1}, {2,3}, {1,3,5,7,9}, {7,11,12,9,5,2,7,17,22}};
    vector<int> expected = {4, 10, 0, 3, 8};

    for (int i = 0; i < expected.size(); i++) {
        clock_t start = clock();
        Solution s;
        int res = s(nums[i]);
        double elapsedTime = (clock() - start);

        printf("%s  \033[30m(%4.0lf cycles)\033[0m\t %3d -> %3d\n", (expected[i] == res) ? "\033[34mOK" : "\033[31mKO", elapsedTime, res, expected[i]);
    }
    return 0;
}