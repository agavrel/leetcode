#include <string>
#include <iostream>
#include <vector>
#include <ctime> // https://man7.org/linux/man-pages/man3/clock.3.html
#include <iterator>
#include "solution.cpp"
#include <sstream>

using namespace std;

string toString(vector <int> v) {
    stringstream ss;
    copy(v.begin(), v.end(), ostream_iterator<int>(ss, " "));
    return ss.str();
}

int main(void) {
    vector<vector<int>> nums = {{1,2,3}, {-5,-3,-3,-2,7,1}};
    vector<vector<int>> multipliers {{3,2,1},{-10,-5,3,4,6}};
    vector<int> expected = {14, 102};

    for (int i = 0; i < expected.size(); i++) {
        clock_t start = clock();
        auto res = Solution().maximumScore(nums[i], multipliers[i]);
        double elapsedTime = (clock() - start);

        printf("%s  \033[30m(%4.0lf cycles)\033[0m\t %d -> %d\n", (expected[i] == res) ? "\033[34mOK" : "\033[31mKO", elapsedTime, res, expected[i]);
    }
    return 0;
}