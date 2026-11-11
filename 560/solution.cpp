class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int totalSubarrays = 0;
        int currentSum = 0;
        unordered_map<int, int> prefixCounts;
        prefixCounts[0] = 1;

        for (int num : nums) {
            currentSum += num;
            
            if (prefixCounts.find(currentSum - k) != prefixCounts.end()) {
                totalSubarrays += prefixCounts[currentSum - k];
            }
            
            prefixCounts[currentSum]++;
        }

        return totalSubarrays;
    }
};