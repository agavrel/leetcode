// https://leetcode.com/contest/weekly-contest-232/problems/maximum-average-pass-ratio/

class Foo {
public:
    Foo(double v1, double v2) : val1(v1), val2(v2) {};
    bool operator<(const Foo &foo) const { return (foo.val1 + 1) / (foo.val2 + 1) + val1 / val2 < (val1 + 1) / (val2 + 1) + foo.val1 / foo.val2; }
    double val1;
    double val2;
};


class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        std::multiset<Foo> ms;
        double res = 0;

        for (auto classe : classes) {
            ms.insert(Foo(classe[0], classe[1]));
        }


        while (extraStudents--) {
            Foo tmp = *(ms.begin());
            ms.erase(ms.begin());
            ms.insert(Foo(tmp.val1 + 1, tmp.val2 + 1));
        }


        for (auto const &foo : ms) {
            res += foo.val1 / foo.val2;
        }

        return res / (double)classes.size();
    }
};