#include <string>
#include <iostream>
#include <vector>
#include <ctime> // https://man7.org/linux/man-pages/man3/clock.3.html
#include "solution.cpp"

using namespace std;

int main(void) {

    vector<string> word1 = {"abc", "ab", "abcd"};
    vector<string> word2 = {"pqr", "pqrs", "pq"};
    vector<string> expected = {"apbqcr", "apbqrs", "apbqcd"};

    for (int i = 0; i < expected.size(); i++) {
        clock_t start = clock();
        string res = Solution().mergeAlternately(word1[i], word2[i]);
        double elapsedTime = (clock() - start);
        cout << ((expected[i] == res) ? "\033[34mOK" : "\033[31mKO") << "\033[0m\t" << res << " -> " << expected[i] << "\t\t" << elapsedTime << " cycles\n";
    }
    return 0;
}