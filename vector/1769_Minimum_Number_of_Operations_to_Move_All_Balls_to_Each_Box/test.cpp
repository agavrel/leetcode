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

    vector<string> boxes = {"110", "001011"};
    vector<vector<int>> expected = {{1,1,3}, {11,8,5,4,3,4}};

    for (int i = 0; i < expected.size(); i++) {
        clock_t start = clock();
        auto res = Solution().minOperations(boxes[i]);
        double elapsedTime = (clock() - start);

        cout << ((expected[i] == res) ? "\033[34mOK" : "\033[31mKO") << " \033[30m("  << elapsedTime << " cycles)" << "\033[0m\t" << toString(res) << " ->  " << toString(expected[i]) << "\n";
    }
    return 0;
}