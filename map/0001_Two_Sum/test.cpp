#include <string>
#include <iostream>
#include <vector>
#include <ctime> // https://man7.org/linux/man-pages/man3/clock.3.html
#include <iterator>
#include "solution.cpp"
#include <sstream>

using namespace std;

const char *toString(vector <int> v) {
    stringstream ss;
    copy(v.begin(), v.end(), ostream_iterator<int>(ss, " "));
    return ss.str().c_str();
}

int main(void) {
    vector<vector<int>> nums = {{2,7,11,15}, {3,2,4},{3,3}};
    vector<int> target {9, 6, 6};
    vector<vector<int>> expected = {{0,1},{1,2},{0,1}};

    for (int i = 0; i < expected.size(); i++) {
        clock_t start = clock();
        auto res = Solution().twoSum(nums[i], target[i]);
        double elapsedTime = (clock() - start);

        printf("%s  \033[30m(%4.0lf cycles)\033[0m\t %s -> %s\n", (expected[i] == res) ? "\033[34mOK" : "\033[31mKO", elapsedTime, toString(res), toString(expected[i]));
    }
    return 0;
}