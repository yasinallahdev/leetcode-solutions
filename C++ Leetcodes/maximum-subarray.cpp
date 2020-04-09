class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size() > 1) {
            int smallestValue = *min_element(nums.begin(), nums.end());
            int currentSum = 0;
            int largestSum = smallestValue;
            int maxNumber = *max_element(nums.begin(), nums.end());
            // Solve an edge case by returning the largest number if all values are negative
            if(maxNumber < 0) {
                return maxNumber;
            }
            for(size_t i = 0; i < nums.size(); ++i) {
                for(size_t j = i; j < nums.size(); ++j) {
                 currentSum += nums[j];
                 if(currentSum > largestSum) {
                     largestSum = currentSum;
                 }
                }
                currentSum = 0;
            }
            return largestSum;
        } else {
            // Solve an edge case and return the number in the array if there's only one element in the vector.
            return nums[0];
        }
    }
};