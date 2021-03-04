#include "leetcode.hpp"
// 338

class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> result;
        for (size_t n = 0; n <= num; ++n) {
            unsigned int m = 0;
            for (size_t k = 0; k < 32; k++) {
                if ((n >> k) & 1) {
                    ++m;
                }
            }
            result.emplace_back(m);
        }
        return result;
    }
};
