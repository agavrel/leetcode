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
    vector<vector<int>> nums = {{3,2,3}, {2,2,1,1,1,2,2}};
    vector<int> expected = {3, 2};

    for (int i = 0; i < expected.size(); i++) {
        clock_t start = clock();
        int res = Solution().majorityElement(nums[i]);
        double elapsedTime = (clock() - start);

        printf("%s  \033[30m(%4.0lf cycles)\033[0m\t %d -> %d\n", (expected[i] == res) ? "\033[34mOK" : "\033[31mKO", elapsedTime, res, expected[i]);
    }
    return 0;
}