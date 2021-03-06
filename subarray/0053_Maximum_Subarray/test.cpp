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
    vector<vector<int>> nums = {{-2,1,-3,4,-1,2,1,-5,4}, {1},{0},{-1},{-100000}};
    vector<int> expected = {6,1,0,-1,-100000};

    for (int i = 0; i < expected.size(); i++) {
        clock_t start = clock();
        auto res = Solution().maxSubArray(nums[i]);
        double elapsedTime = (clock() - start);

        printf("%s  \033[30m(%4.0lf cycles)\033[0m\t %d -> %d\n", (expected[i] == res) ? "\033[34mOK" : "\033[31mKO", elapsedTime, res, expected[i]);
    }
    return 0;
}