// 503
#include "leetcode.hpp"

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        if (nums.empty())
            return {};
    
        vector<int> result;
        for (size_t n = 0; n < nums.size(); ++n) {
            int target = nums[n];
            size_t k;
            if (n == nums.size() - 1)
                k = 0;
            else
                k = n + 1;
            bool get = false;
            while (k != n) {
                if (nums[k] > nums[n]) {
                    result.emplace_back(nums[k]);
                    get = true;
                    break;
                }
                k = (k + 1) % nums.size();
            }
            if (get) continue;
            
            result.emplace_back(-1);
        }
        
        return result;
    }
};
