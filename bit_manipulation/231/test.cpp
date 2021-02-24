#include <string>
#include <iostream>
#include <vector>
#include <ctime> // https://man7.org/linux/man-pages/man3/clock.3.html
#include <iterator>
#include "solution.cpp"
#include <sstream>
#include <cstdint>
#include <stdbool.h>

using namespace std;

const char *toString(vector <int> v) {
    stringstream ss;
    copy(v.begin(), v.end(), ostream_iterator<int>(ss, " "));
    return ss.str().c_str();
}

int main(void) {
    vector<int> nums = {1, 16, 3, 4, 5};
    vector<char> expected = {true, true, false, true, false}; // cannot use bool for printf
    // See: https://en.wikipedia.org/w/index.php?title=Sequence_container_(C%2B%2B)&oldid=767869909#Specialization_for_bool

    for (int i = 0; i < expected.size(); i++) {
        clock_t start = clock();
        Solution s;
        char res = s(nums[i]);
        double elapsedTime = (clock() - start);

        printf("%s  \033[30m(%4.0lf cycles)\033[0m\t %d -> %d\n", (expected[i] == res) ? "\033[34mOK" : "\033[31mKO", elapsedTime, res, expected[i]);
    }
    return 0;
}