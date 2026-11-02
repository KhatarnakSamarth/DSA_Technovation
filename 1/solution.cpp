class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashmap;
        for (int i = 0; i < nums.size(); i++) {
            auto couple = hashmap.find(target - nums[i]);
            if (couple != hashmap.end()) {
                return {i, couple->second};
            } else {
                hashmap[nums[i]] = i;
            }
        }
        return {};
    }
};
