#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        for(int x = 0; x < nums.size(); x++) {
            for(int y = 0; y < nums.size(); y++) {
                if(x == y) {
                    continue;
                } else {
                    if(nums.at(x) + nums.at(y) == target) {
                        return {x, y};
                    }
                }
            }
        }
        return {0, 1};
    }
};