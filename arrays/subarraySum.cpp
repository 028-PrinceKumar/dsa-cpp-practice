
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;

        int prefixSum = 0;
        int count = 0;

        for (int num : nums) {
            prefixSum += num;

            int remaining = prefixSum - k;

            if (mp.find(remaining) != mp.end()) {
                count += mp[remaining];
            }

            mp[prefixSum]++;
        }

        return count;
    }
};
