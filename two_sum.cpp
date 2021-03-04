#include "leetcode.hpp"
// 1
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        if (nums.size() == 0)
            return vector<int>();
        map[nums[0]] = 0;
        for (int n = 1; n < nums.size(); n++) {

            auto result = map.find(target - nums[n]);
            if (result != map.end())
                return {result->second, n};
            map[nums[n]] = n;
        }
        return vector<int>();
    }
};