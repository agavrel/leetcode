#include <vector>
#include <string>
#include <cstdint>
#include <array>

using namespace std;

class Solution {
public:
    vector<int>  operator()(int nums)  {
        return countBits(nums);
    }
    vector<int> countBits(int num) {
        static constexpr int SIZE = 100000;
        static constexpr array<int, SIZE> t {[]() constexpr {
                constexpr uint32_t size = SIZE;
                array<int, size> v{};
                for (int i = 0; i < size; i++)
                    v[i] =  v[i>>1] + (i & 1); // or simply v[i] = __builtin_popcount(i);
                return v;}()};

        vector<int> v(t.begin(), t.begin() + num + 1);
        return v;
    }
};