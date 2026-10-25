class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<long long, int> prefixSumCount;
        prefixSumCount[0] = 1;

        long long sum = 0;
        int count = 0;

        for (int x : nums) {
            sum += x;

            auto it = prefixSumCount.find(sum - k);
            if (it != prefixSumCount.end()) {
                count += it->second;
            }

            ++prefixSumCount[sum];
        }

        return count;
    }
};